/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#include "SteamRemoteStorageSaveGame.h"
#include <Kismet/GameplayStatics.h>

bool USteamRemoteStorageSaveGame::SteamFileWrite(FString fileName)
{
    STEAM_CLIENT(false);

    TArray<uint8> OutSaveData;
    if (UGameplayStatics::SaveGameToMemory(this, OutSaveData))
    {
        return SteamRemoteStorage()->FileWrite(StringCast<ANSICHAR>(*fileName).Get(), OutSaveData.GetData(), OutSaveData.Num());
    }
    else
        return false;
}

void USteamRemoteStorageSaveGame::SteamFileWriteAsync(FString fileName, FSteamFileWriteAsyncCallback callback)
{
    STEAM_CLIENT(;);
    RemoteStorageFileWriteAsyncCompleteLinker* Linker = new RemoteStorageFileWriteAsyncCompleteLinker(fileName, this, callback);
}

USteamRemoteStorageSaveGame* USteamRemoteStorageSaveGame::SteamFileRead(FString fileName)
{
    STEAM_CLIENT(nullptr);

    if (SteamRemoteStorage()->FileExists(StringCast<ANSICHAR>(*fileName).Get()))
    {
        TArray<uint8> InSaveData;

        int32 fileSize = SteamRemoteStorage()->GetFileSize(StringCast<ANSICHAR>(*fileName).Get());
        InSaveData.SetNumUninitialized(fileSize);
        SteamRemoteStorage()->FileRead(StringCast<ANSICHAR>(*fileName).Get(), InSaveData.GetData(), fileSize);
        if (USteamRemoteStorageSaveGame* SaveGameInstance = Cast<USteamRemoteStorageSaveGame>(UGameplayStatics::LoadGameFromMemory(InSaveData)))
        {
            return SaveGameInstance;
        }
        else
            return nullptr;
    }
    else
        return nullptr;
}

void USteamRemoteStorageSaveGame::SteamFileReadAsync(FString fileName, FSteamFileReadAsyncCallback callback)
{
    STEAM_CLIENT(;);
    if (SteamRemoteStorage()->FileExists(StringCast<ANSICHAR>(*fileName).Get()))
        RemoteStorageFileReadAsyncCompleteLinker* Linker = new RemoteStorageFileReadAsyncCompleteLinker(fileName, callback);
    else
    {
        if (callback.IsBound())
            callback.Execute(UEResult::EPC_FileNotFound, nullptr);
    }
}

RemoteStorageFileWriteAsyncCompleteLinker::RemoteStorageFileWriteAsyncCompleteLinker(FString name, USteamRemoteStorageSaveGame* instance, FSteamFileWriteAsyncCallback InCallback)
{
    Callback = InCallback;

    TArray<uint8> OutSaveData;
    if (UGameplayStatics::SaveGameToMemory(instance, OutSaveData))
    {
        SteamAPICall_t handle = SteamRemoteStorage()->FileWriteAsync(StringCast<ANSICHAR>(*name).Get(), OutSaveData.GetData(), OutSaveData.Num());
        m_RemoteStorageFileWriteAsyncComplete_t.Set(handle, this, &RemoteStorageFileWriteAsyncCompleteLinker::SteamCallback);
    }
    else
        delete this;
}

void RemoteStorageFileWriteAsyncCompleteLinker::SteamCallback(RemoteStorageFileWriteAsyncComplete_t* Response, bool bIOError)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Response, bIOError]()
        {
            if (Callback.IsBound())
            {
                if (!bIOError)
                    Callback.Execute(static_cast<UEResult>(Response->m_eResult));
                else
                    Callback.Execute(UEResult::EPC_IOFailure);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    GameThreadTask->Wait();

    delete this;
}

RemoteStorageFileReadAsyncCompleteLinker::RemoteStorageFileReadAsyncCompleteLinker(FString name, FSteamFileReadAsyncCallback InCallback)
{
    Callback = InCallback;
    int32 fileSize = SteamRemoteStorage()->GetFileSize(StringCast<ANSICHAR>(*name).Get());
    InSaveData.SetNumUninitialized(fileSize);
    SteamAPICall_t handle = SteamRemoteStorage()->FileReadAsync(StringCast<ANSICHAR>(*name).Get(), 0, fileSize);
    m_RemoteStorageFileReadAsyncComplete_t.Set(handle, this, &RemoteStorageFileReadAsyncCompleteLinker::SteamCallback);
}

void RemoteStorageFileReadAsyncCompleteLinker::SteamCallback(RemoteStorageFileReadAsyncComplete_t* Response, bool bIOError)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Response, bIOError]()
        {
            if (Callback.IsBound())
            {
                if (!bIOError)
                {
                    if (Response->m_eResult == EResult::k_EResultOK)
                    {
                        SteamRemoteStorage()->FileReadAsyncComplete(Response->m_hFileReadAsync, InSaveData.GetData(), Response->m_cubRead);
                        if (USteamRemoteStorageSaveGame* SaveGameInstance = Cast<USteamRemoteStorageSaveGame>(UGameplayStatics::LoadGameFromMemory(InSaveData)))
                        {
                            Callback.Execute(static_cast<UEResult>(Response->m_eResult), SaveGameInstance);
                        }
                        else
                            Callback.Execute(static_cast<UEResult>(Response->m_eResult), nullptr);
                    }
                    else
                        Callback.Execute(static_cast<UEResult>(Response->m_eResult), nullptr);
                }
                else
                    Callback.Execute(UEResult::EPC_IOFailure, nullptr);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    GameThreadTask->Wait();

    delete this;
}
