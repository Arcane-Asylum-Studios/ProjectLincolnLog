/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/


#include "EnterLobbyAsyncTask.h"

UEnterLobbyAsyncTask* UEnterLobbyAsyncTask::SteamEnterLobby(UObject* WorldContextObject, int64 LobbyId)
{
    UEnterLobbyAsyncTask* Node = NewObject<UEnterLobbyAsyncTask>();
    Node->WorldContextObject = WorldContextObject;
    Node->LobbyId = INT64_TO_STEAMID(LobbyId);

	return Node;
}

UEnterLobbyAsyncTask* UEnterLobbyAsyncTask::SteamEnterLobbyHex(UObject* WorldContextObject, FString Hex)
{
    int64 LobbyIdResult = 0;
    if (HeathenTools::IsHexadecimal(Hex))
    {
        int Result = FParse::HexNumber(*Hex);
        if (Result != 0 && Hex != TEXT("0"))
        {
            CSteamID steamId = CSteamID(Result, 393216, EUniverse::k_EUniversePublic, EAccountType::k_EAccountTypeChat);
            UEnterLobbyAsyncTask* Node = NewObject<UEnterLobbyAsyncTask>();
            Node->WorldContextObject = WorldContextObject;
            Node->LobbyId = steamId;
            return Node;
        }
    }

    UEnterLobbyAsyncTask* Node = NewObject<UEnterLobbyAsyncTask>();
    Node->WorldContextObject = WorldContextObject;
    Node->LobbyId = CSteamID();

    return Node;
}

void UEnterLobbyAsyncTask::Activate()
{
    if (SteamAPI_Init())
    {
        SteamAPICall_t handle = SteamMatchmaking()->JoinLobby(LobbyId);
        m_LobbyEnter_t.Set(handle, this, &UEnterLobbyAsyncTask::SteamCallback);
    }
    else
    {
        Completed.Broadcast(0, false, UEChatRoomEnterResponse::EPC_Error);
    }
}

void UEnterLobbyAsyncTask::SteamCallback(LobbyEnter_t* Response, bool bIOError)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
        {
            if (!bIOError)
            {
                Completed.Broadcast(static_cast<int64>(Response->m_ulSteamIDLobby), Response->m_bLocked, static_cast<UEChatRoomEnterResponse>(Response->m_EChatRoomEnterResponse));
            }
            else
            {
                Completed.Broadcast(0, true, UEChatRoomEnterResponse::EPC_Error);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    GameThreadTask->Wait();
    SetReadyToDestroy();
}
