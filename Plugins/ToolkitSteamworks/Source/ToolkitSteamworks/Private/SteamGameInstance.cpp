/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#include "SteamGameInstance.h"
#include "InventoryItemDataAsset.h"
#include "CoreMinimal.h"

USteamGameInstance* USteamGameInstance::pInstance;

void USteamGameInstance::Shutdown()
{
    pInstance = nullptr;
    if (SelfInitalized)
    {
        GetWorld()->GetTimerManager().ClearTimer(SteamCallbackTimerHandle);

        if (IsDedicatedServerInstance())
        {
            SteamGameServer_Shutdown();
            UE_LOG(LogTemp, Log, TEXT("Steam Game Server API has been shutdown"));
        }
        else
        {
            SteamAPI_Shutdown();
            UE_LOG(LogTemp, Log, TEXT("Steam API has been shutdown"));
        }
    }

    Super::Shutdown();
}

void USteamGameInstance::Init()
{
    pInstance = this;
    Super::Init();
}

USteamGameInstance* USteamGameInstance::GetSteamGameInstance()
{
    return pInstance;
}

FSteamworksInitializationResponse USteamGameInstance::InitializeSteamAPI()
{
    FSteamworksInitializationResponse result = FSteamworksInitializationResponse();

    //If its already initalized ... then someone made the choice to use Online Subsystem Steam which has already initalized this
#if UE_SERVER
    if (SteamGameServer() != nullptr)
#else
    if (SteamClient() != nullptr)
#endif
    {
        result.bShouldRestart = false;
        result.bSuccess = true;
        SelfInitalized = false;
        return result;
    }

    //Create the steam_appid.txt on init if this is running in editor
    if (IsDedicatedServerInstance())
    {
        uint32 uIp = 0;
        FString MultiHome;
        if (FParse::Value(FCommandLine::Get(), TEXT("MULTIHOME="), MultiHome) && !MultiHome.IsEmpty())
        {
            uIp = HeathenTools::IPAddress(MultiHome);
        }

        uint16 gPort = 27017;
        if (FParse::Value(FCommandLine::Get(), TEXT("Port="), gPort) == false)
        {
            int32 gamePort = 27017;
            if (GConfig->GetInt(TEXT("URL"), TEXT("Port"), gamePort, GEngineIni))
            {
                gPort = static_cast<uint16>(gamePort);
            }
        }
        
        uint16 qPort = 27018;
        if (FParse::Value(FCommandLine::Get(), TEXT("QueryPort="), qPort) == false)
        {
            int32 QueryPort = 27018;
            if (GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("GameServerQueryPort"), QueryPort, GEngineIni))
            {
                qPort = static_cast<uint16>(QueryPort);
            }
        }

        bool bVACEnabled = false;
        GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bVACEnabled"), bVACEnabled, GEngineIni);

        FString GameVersion;
        GConfig->GetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), GameVersion, GEngineIni);
        if (GameVersion.Len() == 0)
        {
            UE_LOG(LogTemp, Log, TEXT("[OnlineSubsystemSteam].GameVersion is not set. Server advertising will fail"));
        }

        result.bSuccess = SteamGameServer_Init(uIp, gPort, qPort, (bVACEnabled ? eServerModeAuthenticationAndSecure : eServerModeAuthentication), TCHAR_TO_UTF8(*GameVersion));
        result.bShouldRestart = false;
    }
    else
    {
        int32 appId = 480;
        bool requiresRestart = false;
#if !UE_BUILD_SHIPPING && !UE_BUILD_SHIPPING_WITH_EDITOR
        UE_LOG(LogTemp, Log, TEXT("Steam API: Initializing"));
        
        if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamDevAppId"), appId, GEngineIni))
        {
            UE_LOG(LogTemp, Log, TEXT("Missing SteamDevAppId key in OnlineSubsystemSteam of DefaultEngine.ini"));
        }
#else
#ifndef UE_PROJECT_STEAMSHIPPINGID
#define UE_PROJECT_STEAMSHIPPINGID 0
#endif
        appId = UE_PROJECT_STEAMSHIPPINGID;
#endif

#if WITH_EDITOR
        FFileHelper::SaveStringToFile(FString::FromInt(appId), TEXT("steam_appid.txt"));
#else
        requiresRestart = SteamAPI_RestartAppIfNecessary(static_cast<AppId_t>(appId));
#endif

        if (!requiresRestart)
        {
            result.bShouldRestart = false;
            result.bSuccess = SteamAPI_Init();
        }
        else
        {
            UE_LOG(LogTemp, Log, TEXT("Steam API: Restart Required"));
            result.bShouldRestart = true;
            result.bSuccess = false;
        }
    }

    if (result.bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("Initialization Completed"));
        FTimerDelegate TimerDelegate;
        callbackFrequency = FMath::Clamp(callbackFrequency, 0.01f, 0.1f);
        TimerDelegate.BindLambda([this]() {
            if (this->IsDedicatedServerInstance())
            {
                SteamGameServer_RunCallbacks();
            }
            else
            {
                SteamAPI_RunCallbacks();
            }
            });
        GetWorld()->GetTimerManager().SetTimer(SteamCallbackTimerHandle, TimerDelegate, callbackFrequency, true);
        SelfInitalized = true;
    }
    else
        UE_LOG(LogTemp, Log, TEXT("Initialization Failed"));

    return result;
}

void USteamGameInstance::InitializeRelayNetworkAccess()
{
    SteamNetworkingUtils()->InitRelayNetworkAccess();
}

void USteamGameInstance::ClearItemDetails()
{
    for (UInventoryItemDataAsset* ItemDataAsset : ItemDataAssets)
    {
        if (ItemDataAsset)
            ItemDataAsset->ItemDetailsArray.Empty();
    }
}

void USteamGameInstance::UpdateItemDetails(TArray<FItemDetailWithProperties> Details)
{
    // Foreach item detail
    for (const FItemDetailWithProperties ItemDetail : Details)
    {
        // foreach data asset
        for (UInventoryItemDataAsset* ItemDataAsset : ItemDataAssets)
        {
            // if this detail goes to this asset
            if (ItemDataAsset && ItemDataAsset->Id == ItemDetail.DefinitionId)
            {
                // Remove any entries from the ItemDetailsArray that match the InstanceId
                ItemDataAsset->ItemDetailsArray.RemoveAll([ItemDetail](const FItemDetailWithProperties& ExistingItemDetail)
                    {
                        return ExistingItemDetail.InstanceId == ItemDetail.InstanceId;
                    });

                // Add this new ItemDetail to the array
                ItemDataAsset->ItemDetailsArray.Add(ItemDetail);
                break;
            }
        }
    }
}

void USteamGameInstance::LoadIcon(int handle, FString apiName, FIconLoadCallback callback)
{
    if (handle > 0)
    {
        FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, handle, apiName, callback]()
            {
                UTexture2D* IconTexture = UTexture2D::CreateTransient(STEAMWORKS_ICON_SIZE, STEAMWORKS_ICON_SIZE, PF_R8G8B8A8);
                AchievementIcons.Add(apiName, IconTexture);

                TArray<uint8> Buffer;
                Buffer.SetNumZeroed(STEAMWORKS_ICON_BYTE_SIZE);

                if (SteamUtils()->GetImageRGBA(handle, Buffer.GetData(), Buffer.Num()))
                {
                    void* MipData = IconTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
                    FMemory::Memcpy(MipData, Buffer.GetData(), Buffer.Num());
                    IconTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

                    IconTexture->GetPlatformData()->SetNumSlices(1);
                    IconTexture->NeverStream = true;

                    IconTexture->UpdateResource();
                }
                else
                {
                    ensure(false && "this shouldn't happen");
                }

                callback.Execute(IconTexture);
            }, TStatId(), nullptr, ENamedThreads::GameThread);

        if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
        {
            GameThreadTask->Wait();
        }
    }
}

void USteamGameInstance::GetAvatarBySteamId(CSteamID SteamId, FAvatarLoadCallback Callback)
{
    if (!SteamId.IsValid())
    {
        return;
    }

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, SteamId, Callback]()
        {
            uint64 uint64SteamId = SteamId.ConvertToUint64();
            if (Avatars.Contains(uint64SteamId))
            {
                if (Callback.IsBound())
                    Callback.Execute(Avatars.FindRef(SteamId.ConvertToUint64()));
            }
            else
            {
                if (AvatarRequests.Contains(uint64SteamId))
                    AvatarRequests.Remove(uint64SteamId);

                AvatarRequests.Add(uint64SteamId, Callback);

                if (!SteamFriends()->RequestUserInformation(SteamId, false))
                    LoadSteamAvatar(SteamId);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);

    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::LoadSteamAvatar(CSteamID SteamId)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, SteamId]()
        {
            if (SteamFriends() != nullptr && SteamId.IsValid())
            {
                int Handle = SteamFriends()->GetLargeFriendAvatar(SteamId);

                if (Handle > 0)
                {
                    UTexture2D* AvatarTexture = UTexture2D::CreateTransient(STEAMWORKS_AVATAR_SIZE, STEAMWORKS_AVATAR_SIZE, PF_R8G8B8A8);
                    Avatars.Add(SteamId.ConvertToUint64(), AvatarTexture);
                    CopySteamAvatar(Handle, AvatarTexture);

                    uint64 uint64SteamId = SteamId.ConvertToUint64();
                    if (AvatarRequests.Contains(uint64SteamId))
                    {
                        FAvatarLoadCallback Callback = AvatarRequests.FindRef(uint64SteamId);
                        if (Callback.IsBound())
                            Callback.Execute(AvatarTexture);

                        AvatarRequests.Remove(uint64SteamId);
                    }
                }
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);

    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::CopySteamAvatar(int Handle, UTexture2D* AvatarTexture)
{
    check(Handle > 0);
    check(AvatarTexture != nullptr);

    TArray<uint8> Buffer;
    Buffer.SetNumZeroed(STEAMWORKS_AVATAR_BYTE_SIZE);

    //copy it directly within this call
    if (SteamUtils()->GetImageRGBA(Handle, Buffer.GetData(), Buffer.Num()))
    {
        void* MipData = AvatarTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
        FMemory::Memcpy(MipData, Buffer.GetData(), Buffer.Num());
        AvatarTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

        AvatarTexture->GetPlatformData()->SetNumSlices(1);
        AvatarTexture->NeverStream = true;

        AvatarTexture->UpdateResource();
    }
    else
    {
        ensure(false && "this shouldn't happen");
    }
}

void USteamGameInstance::EventUserStatsReceived(UserStatsReceived_t* arg0)
{
    int64 GameID = static_cast<int64>(arg0->m_nGameID);
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);
    int64 UserID = STEAMID_TO_INT64(arg0->m_steamIDUser);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, GameID, Result, UserID]()
        {
            if (SteamUserStatsReceived.IsBound())
                SteamUserStatsReceived.Broadcast(GameID, Result, UserID);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventUserStatsUnloaded(UserStatsUnloaded_t* arg0)
{
    int64 UserID = STEAMID_TO_INT64(arg0->m_steamIDUser);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, UserID]()
        {
            if (SteamUserStatsUnloaded.IsBound())
                SteamUserStatsUnloaded.Broadcast(UserID);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventUserStatsStored(UserStatsStored_t* arg0)
{
    int64 GameID = static_cast<int64>(arg0->m_nGameID);
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, GameID]()
        {
            if (SteamUserStatsStored.IsBound())
                SteamUserStatsStored.Broadcast(GameID);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventUserAchievementStored(UserAchievementStored_t* arg0)
{
    int64 GameID = static_cast<int64>(arg0->m_nGameID);
    FString AchievementName = FString(arg0->m_rgchAchievementName);
    int32 Progress = static_cast<int32>(arg0->m_nCurProgress);
    int32 MaxProgress = static_cast<int32>(arg0->m_nMaxProgress);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, GameID, AchievementName, Progress, MaxProgress]()
        {
            if (SteamUserAchievementStored.IsBound())
                SteamUserAchievementStored.Broadcast(GameID, AchievementName, Progress, MaxProgress);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventUserAchievementIconFetched(UserAchievementIconFetched_t* arg0)
{
    int handle = arg0->m_nIconHandle;
    FString AchievementName = FString(arg0->m_rgchAchievementName);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, handle, AchievementName]()
        {
            if (handle > 0)
            {
                if (AchievementIconRequests.GetAllocatedSize() == 0)
                    AchievementIconRequests = TMap<FString, FIconLoadCallback>();

                FString key(AchievementName);

                if (AchievementIconRequests.Contains(key))
                {
                    AchievementIconRequests.Remove(key);
                    LoadIcon(handle, key, AchievementIconRequests.FindRef(key));
                }
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventDlcInstalled(DlcInstalled_t* pParam)
{
    int32 AppID = static_cast<int32>(pParam->m_nAppID);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, AppID]()
        {
            if (SteamDlcInstalled.IsBound())
                SteamDlcInstalled.Broadcast(AppID);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamServerConnectFailure(SteamServerConnectFailure_t* arg0)
{
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);
    bool StillRetrying = arg0->m_bStillRetrying;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result, StillRetrying]()
        {
            if (SteamServerConnectFailure.IsBound())
                SteamServerConnectFailure.Broadcast(Result, StillRetrying);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamServersConnected(SteamServersConnected_t* arg0)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
        {
            if (SteamServersConnected.IsBound())
                SteamServersConnected.Broadcast();
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamServersDisconnected(SteamServersDisconnected_t* arg0)
{
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result]()
        {
            if (SteamServersDisconnected.IsBound())
                SteamServersDisconnected.Broadcast(Result);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamGameServerConnectFailure(SteamServerConnectFailure_t* arg0)
{
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);
    bool StillRetrying = arg0->m_bStillRetrying;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result, StillRetrying]()
        {
            if (SteamGameServerConnectionChanged.IsBound())
            {
                SteamGameServerConnectionChanged.Execute(false);
            }

            if (SteamServerConnectFailure.IsBound())
                SteamServerConnectFailure.Broadcast(Result, StillRetrying);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamGameServersConnected(SteamServersConnected_t* arg0)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
        {
            if (SteamGameServerConnectionChanged.IsBound())
            {
                SteamGameServerConnectionChanged.Execute(true);
            }

            if (SteamServersConnected.IsBound())
                SteamServersConnected.Broadcast();
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamGameServersDisconnected(SteamServersDisconnected_t* arg0)
{
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result]()
        {
            if (SteamGameServerConnectionChanged.IsBound())
            {
                SteamGameServerConnectionChanged.Execute(false);
            }

            if (SteamServersDisconnected.IsBound())
                SteamServersDisconnected.Broadcast(Result);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventAvatarImageLoaded(AvatarImageLoaded_t* arg0)
{
    uint64 uint64SteamId = arg0->m_steamID.ConvertToUint64();

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, uint64SteamId]()
        {
            if (Avatars.Contains(uint64SteamId))
            {
                UTexture2D* AvatarTexture = Avatars.FindRef(uint64SteamId);
                int Handle = SteamFriends()->GetLargeFriendAvatar(CSteamID(uint64SteamId));
                CopySteamAvatar(Handle, AvatarTexture);

                if (AvatarRequests.Contains(uint64SteamId))
                {
                    FAvatarLoadCallback Callback = AvatarRequests.FindRef(uint64SteamId);
                    if (Callback.IsBound())
                        Callback.Execute(AvatarTexture);

                    AvatarRequests.Remove(uint64SteamId);
                }
            }
            else if (AvatarRequests.Contains(uint64SteamId))
            {
                LoadSteamAvatar(CSteamID(uint64SteamId));
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventGameRichPresenceJoinRequested(GameRichPresenceJoinRequested_t* arg0)
{
    int64 FriendID = STEAMID_TO_INT64(arg0->m_steamIDFriend);
    FString ConString = FString(arg0->m_rgchConnect);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, FriendID, ConString]()
        {
            if (SteamRichPresenceJoinRequested.IsBound())
                SteamRichPresenceJoinRequested.Broadcast(FriendID, ConString);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventGameLobbyJoinRequested(GameLobbyJoinRequested_t* arg0)
{
    int64 LobbyID = STEAMID_TO_INT64(arg0->m_steamIDLobby);
    int64 FriendID = STEAMID_TO_INT64(arg0->m_steamIDFriend);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, LobbyID, FriendID]()
        {
            if (SteamLobbyJoinRequested.IsBound())
                SteamLobbyJoinRequested.Broadcast(LobbyID, FriendID);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventGameOverlayActivated(GameOverlayActivated_t* arg0)
{
    bool Active = arg0->m_bActive == 1;
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
    bool UserInitiated = arg0->m_bUserInitiated;
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Active, UserInitiated]()
#else
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Active]()
#endif
        {
            if (SteamGameOverlayActivated.IsBound())
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
                SteamGameOverlayActivated.Broadcast(Active, UserInitiated);
#else
                SteamGameOverlayActivated.Broadcast(Active, false);

            if (SteamGameOverlayActivatedLegacy.IsBound())
                SteamGameOverlayActivatedLegacy.Broadcast(Active);
#endif
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventGameConnectedFriendChatMsg(GameConnectedFriendChatMsg_t* arg0)
{
    CSteamID UserID = arg0->m_steamIDUser;
    int Message = arg0->m_iMessageID;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, UserID, Message]()
        {
            if (SteamFriendChatMsg.IsBound())
            {
                EChatEntryType ChatEntryType;
                char* Buffer = new char[8193];
                int32 resultLength = SteamFriends()->GetFriendMessage(UserID, Message, Buffer, 8193, &ChatEntryType);

                FString messageText;
                messageText.AppendChars(Buffer, resultLength);

                SteamFriendChatMsg.Broadcast(static_cast<int64>(UserID.ConvertToUint64()), messageText, static_cast<UEChatEntryType>(ChatEntryType));

                delete[] Buffer;
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventFriendRichPresenceUpdate(FriendRichPresenceUpdate_t* arg0)
{
    int64 FriendID = static_cast<int64>(arg0->m_steamIDFriend.ConvertToUint64());
    int32 AppId = static_cast<int32>(arg0->m_nAppID);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, FriendID, AppId]()
        {
            if (SteamFriendRichPresenceUpdate.IsBound())
                SteamFriendRichPresenceUpdate.Broadcast(FriendID, AppId);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventPersonaStateChange(PersonaStateChange_t* arg0)
{
    uint64 SteamID = arg0->m_ulSteamID;
    int ChangeFlags = arg0->m_nChangeFlags;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, SteamID, ChangeFlags]()
        {
            if (ChangeFlags & k_EPersonaChangeAvatar)
            {
                if (Avatars.Contains(SteamID))
                {
                    UTexture2D* AvatarTexture = Avatars.FindRef(SteamID);
                    int Handle = SteamFriends()->GetLargeFriendAvatar(CSteamID(SteamID));
                    CopySteamAvatar(Handle, AvatarTexture);

                    if (AvatarRequests.Contains(SteamID))
                    {
                        FAvatarLoadCallback Callback = AvatarRequests.FindRef(SteamID);
                        if (Callback.IsBound())
                            Callback.Execute(AvatarTexture);

                        AvatarRequests.Remove(SteamID);
                    }
                }
                else if (AvatarRequests.Contains(SteamID))
                {
                    LoadSteamAvatar(CSteamID(SteamID));
                }
            }

            if (SteamPersonaStateChange.IsBound())
            {
                UEPersonaChange MappedValue = UEPersonaChange::EPC_None;

                if (ChangeFlags & k_EPersonaChangeName)
                    MappedValue = UEPersonaChange::EPC_Name;
                else if (ChangeFlags & k_EPersonaChangeStatus)
                    MappedValue = UEPersonaChange::EPC_Status;
                else if (ChangeFlags & k_EPersonaChangeComeOnline)
                    MappedValue = UEPersonaChange::EPC_Online;
                else if (ChangeFlags & k_EPersonaChangeGoneOffline)
                    MappedValue = UEPersonaChange::EPC_Offline;
                else if (ChangeFlags & k_EPersonaChangeGamePlayed)
                    MappedValue = UEPersonaChange::EPC_GamePlayed;
                else if (ChangeFlags & k_EPersonaChangeGameServer)
                    MappedValue = UEPersonaChange::EPC_GameServer;
                else if (ChangeFlags & k_EPersonaChangeAvatar)
                    MappedValue = UEPersonaChange::EPC_Avatar;
                else if (ChangeFlags & k_EPersonaChangeJoinedSource)
                    MappedValue = UEPersonaChange::EPC_JoinedSource;
                else if (ChangeFlags & k_EPersonaChangeLeftSource)
                    MappedValue = UEPersonaChange::EPC_LeftSource;
                else if (ChangeFlags & k_EPersonaChangeRelationshipChanged)
                    MappedValue = UEPersonaChange::EPC_RelationshipChanged;
                else if (ChangeFlags & k_EPersonaChangeNameFirstSet)
                    MappedValue = UEPersonaChange::EPC_NameFirstSet;
                else if (ChangeFlags & k_EPersonaChangeBroadcast)
                    MappedValue = UEPersonaChange::EPC_Broadcast;
                else if (ChangeFlags & k_EPersonaChangeNickname)
                    MappedValue = UEPersonaChange::EPC_Nickname;
                else if (ChangeFlags & k_EPersonaChangeSteamLevel)
                    MappedValue = UEPersonaChange::EPC_SteamLevel;
                else if (ChangeFlags & k_EPersonaChangeRichPresence)
                    MappedValue = UEPersonaChange::EPC_RichPresence;

                SteamPersonaStateChange.Broadcast(static_cast<int64>(SteamID), MappedValue);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamInventoryResultReady_t(SteamInventoryResultReady_t* arg0)
{
    EResult Result = arg0->m_result;
    SteamInventoryResult_t Handle = arg0->m_handle;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result, Handle]()
        {
            UEResult result = static_cast<UEResult>(Result);

            if (InventoryRequests.Contains(Handle))
            {
                FItemResultRequest resultRequest = InventoryRequests.FindRef(Handle);
                TArray<FItemDetailWithProperties> ItemDetailsArray;

                if (Result == EResult::k_EResultOK)
                {
                    if (!resultRequest.userId.IsValid()
                        || SteamInventory()->CheckResultSteamID(Handle, resultRequest.userId))
                    {
                        if (!resultRequest.userId.IsValid()
                            && resultRequest.clearAll)
                            ClearItemDetails();

                        SteamItemDetails_t* pOutItemsArray = nullptr;
                        uint32 punOutItemsArraySize = 0;
                        bool bSuccess = SteamInventory()->GetResultItems(Handle, pOutItemsArray, &punOutItemsArraySize);
                        if (bSuccess)
                        {
                            pOutItemsArray = new SteamItemDetails_t[punOutItemsArraySize];
                            bSuccess = SteamInventory()->GetResultItems(Handle, pOutItemsArray, &punOutItemsArraySize);

                            if (bSuccess && punOutItemsArraySize > 0)
                            {
                                for (uint32 i = 0; i < punOutItemsArraySize; ++i)
                                {
                                    FItemDetailWithProperties ItemDetail = FItemDetailWithProperties();
                                    ItemDetail.InstanceId = static_cast<int64>(pOutItemsArray[i].m_itemId);
                                    ItemDetail.DefinitionId = static_cast<int32>(pOutItemsArray[i].m_iDefinition);
                                    ItemDetail.Quantity = static_cast<int32>(pOutItemsArray[i].m_unQuantity);
                                    ItemDetail.Flags = static_cast<int32>(pOutItemsArray[i].m_unFlags);

                                    if (resultRequest.properties.Num() > 0)
                                    {
                                        for (const FString& prop : resultRequest.properties)
                                        {
                                            uint32 bufferSize = 0;
                                            if (SteamInventory()->GetResultItemProperty(Handle, i, StringCast<ANSICHAR>(*prop).Get(), NULL, &bufferSize))
                                            {
                                                char* pchValueBuffer = new char[bufferSize];
                                                if (SteamInventory()->GetResultItemProperty(Handle, i, StringCast<ANSICHAR>(*prop).Get(), pchValueBuffer, &bufferSize))
                                                {
                                                    FKeyValuePair pair = FKeyValuePair();
                                                    pair.Key = prop;
                                                    pair.Value = FString(pchValueBuffer);
                                                    ItemDetail.Properties.Add(pair);
                                                }
                                                delete[] pchValueBuffer;
                                            }
                                        }
                                    }

                                    if (!resultRequest.userId.IsValid())
                                    {
                                        for (UInventoryItemDataAsset* ItemDataAsset : ItemDataAssets)
                                        {
                                            if (ItemDataAsset && ItemDataAsset->Id == ItemDetail.DefinitionId)
                                            {
                                                // Remove any entries from the ItemDetailsArray that match the InstanceId
                                                ItemDataAsset->ItemDetailsArray.RemoveAll([ItemDetail](const FItemDetailWithProperties& ExistingItemDetail)
                                                    {
                                                        return ExistingItemDetail.InstanceId == ItemDetail.InstanceId;
                                                    });

                                                // Add this new ItemDetail to the array
                                                ItemDataAsset->ItemDetailsArray.Add(ItemDetail);
                                                break;
                                            }
                                        }
                                    }

                                    ItemDetailsArray.Add(ItemDetail);
                                }
                            }

                            delete[] pOutItemsArray;
                        }
                    }
                    else
                        result = UEResult::EPC_InvalidSteamID;
                }

                if (resultRequest.callback.IsBound())
                    resultRequest.callback.Execute(result, ItemDetailsArray);

                SteamInventory()->DestroyResult(Handle);
            }
            else if (SteamInventoryResultReady.IsBound())
            {
                SteamInventoryResultReady.Broadcast(result, Handle);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventSteamInventoryDefinitionUpdate_t(SteamInventoryDefinitionUpdate_t* arg0)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
        {
            if (SteamInventoryDefinitionUpdate.IsBound())
            {
                uint32 size = 0;
                SteamInventory()->GetItemDefinitionIDs(nullptr, &size);
                if (size > 0)
                {
                    TArray<int32> result;
                    result.AddUninitialized(static_cast<int32>(size));
                    SteamInventory()->GetItemDefinitionIDs(result.GetData(), &size);
                    SteamInventoryDefinitionUpdate.Broadcast(result);
                }
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventMicroTxnAuthorizationResponse_t(MicroTxnAuthorizationResponse_t* arg0)
{
    int32 nAppId = static_cast<int32>(arg0->m_unAppID);
    int64 orderId = static_cast<int64>(arg0->m_ulOrderID);
    bool authorized = arg0->m_bAuthorized == 1;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, nAppId, orderId, authorized]()
        {
            if (SteamMicroTxnAuthorizationResponse.IsBound())
            {
                SteamMicroTxnAuthorizationResponse.Broadcast(nAppId, orderId, authorized);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventFavoritesListAccountsUpdated(FavoritesListAccountsUpdated_t* arg0)
{
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result]()
        {
            if (SteamFavoritesListAccountsUpdated.IsBound())
                SteamFavoritesListAccountsUpdated.Broadcast(Result);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventFavoritesListChanged(FavoritesListChanged_t* arg0)
{
    int32 appId = static_cast<int32>(arg0->m_nAppID);
    FString ipAddress = HeathenTools::IPAddress(arg0->m_nIP);
    int32 queryPort = static_cast<int32>(arg0->m_nQueryPort);
    int32 connectionPort = static_cast<int32>(arg0->m_nConnPort);
    bool isFav = arg0->m_nFlags == 0x01;
    bool wasAdded = arg0->m_bAdd;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, appId, ipAddress, queryPort, connectionPort, isFav, wasAdded]()
        {
            if (SteamFavoritesListChanged.IsBound())
                SteamFavoritesListChanged.Broadcast(appId, ipAddress, queryPort, connectionPort, isFav, wasAdded);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventLobbyChatMsg(LobbyChatMsg_t* arg0)
{
    int64 lobbyId = arg0->m_ulSteamIDLobby;
    int64 userId = arg0->m_ulSteamIDUser;
    uint8 type = arg0->m_eChatEntryType;
    int32 index = arg0->m_iChatID;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, lobbyId, userId, type, index]()
        {
            if (SteamLobbyChatMsg.IsBound())
                SteamLobbyChatMsg.Broadcast(lobbyId, userId, static_cast<UEChatEntryType>(type), index);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventLobbyChatUpdate(LobbyChatUpdate_t* arg0)
{
    int64 LobbyID = static_cast<int64>(arg0->m_ulSteamIDLobby);
    int64 UserID = static_cast<int64>(arg0->m_ulSteamIDUserChanged);
    int64 UserMadeChange = static_cast<int64>(arg0->m_ulSteamIDMakingChange);
    UEChatMemberStateChange StateChange = static_cast<UEChatMemberStateChange>(arg0->m_rgfChatMemberStateChange);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, LobbyID, UserID, UserMadeChange, StateChange]()
        {
            if (SteamLobbyChatUpdate.IsBound())
                SteamLobbyChatUpdate.Broadcast(LobbyID, UserID, UserMadeChange, StateChange);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventLobbyDataUpdate(LobbyDataUpdate_t* arg0)
{
    int64 LobbyID = static_cast<int64>(arg0->m_ulSteamIDLobby);
    int64 SteamID = static_cast<int64>(arg0->m_ulSteamIDMember);
    bool Success = arg0->m_bSuccess == 1;

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, LobbyID, SteamID, Success]()
        {
            if (SteamLobbyDataUpdate.IsBound())
                SteamLobbyDataUpdate.Broadcast(LobbyID, SteamID, Success);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventLobbyEnter(LobbyEnter_t* arg0)
{
    int64 LobbyID = static_cast<int64>(arg0->m_ulSteamIDLobby);
    UEChatRoomEnterResponse Response = static_cast<UEChatRoomEnterResponse>(arg0->m_EChatRoomEnterResponse);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, LobbyID, Response]()
        {
            if (SteamLobbyEnter.IsBound())
                SteamLobbyEnter.Broadcast(LobbyID, Response);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventLobbyGameCreated(LobbyGameCreated_t* arg0)
{
    int64 lobbyId = static_cast<int64>(arg0->m_ulSteamIDLobby);
    int64 serverId = static_cast<int64>(arg0->m_ulSteamIDGameServer);
    FString ipAddress = HeathenTools::IPAddress(arg0->m_unIP);
    int32 connectionPort = static_cast<int32>(arg0->m_usPort);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, lobbyId, serverId, ipAddress, connectionPort]()
        {
            if (SteamLobbyGameCreated.IsBound())
                SteamLobbyGameCreated.Broadcast(lobbyId, serverId, ipAddress, connectionPort);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

void USteamGameInstance::EventLobbyInvite(LobbyInvite_t* arg0)
{
    int64 UserId = static_cast<int64>(arg0->m_ulSteamIDUser);
    int64 LobbyId = static_cast<int64>(arg0->m_ulSteamIDLobby);
    int64 GameId = static_cast<int64>(arg0->m_ulGameID);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, UserId, LobbyId, GameId]()
        {
            if (SteamLobbyInvite.IsBound())
                SteamLobbyInvite.Broadcast(UserId, LobbyId, GameId);
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}

#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
void USteamGameInstance::EventGetTicketForWebApiResponse(GetTicketForWebApiResponse_t* arg0)
{
    UEResult Result = static_cast<UEResult>(arg0->m_eResult);
    HAuthTicket Ticket = arg0->m_hAuthTicket;
    TArray<uint8> DataArray = TArray<uint8>(arg0->m_rgubTicket, arg0->m_cubTicket);

    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Result, Ticket, DataArray]()
        {
            if (SteamTicketForWebApiResponse.IsBound())
            {
                SteamTicketForWebApiResponse.Broadcast(Result, Ticket, DataArray);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    
    if (FTaskGraphInterface::Get().GetCurrentThreadIfKnown() != ENamedThreads::GameThread)
    {
        GameThreadTask->Wait();
    }
}
#endif