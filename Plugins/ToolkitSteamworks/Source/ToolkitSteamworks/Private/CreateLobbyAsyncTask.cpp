/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/


#include "CreateLobbyAsyncTask.h"

UCreateLobbyAsyncTask* UCreateLobbyAsyncTask::SteamCreateLobby(UObject* WorldContextObject, UELobbyType Type, int32 MaxMembers)
{
    UCreateLobbyAsyncTask* Node = NewObject<UCreateLobbyAsyncTask>();
    Node->WorldContextObject = WorldContextObject;
    Node->LobbyType = Type;
    Node->MaxMembers = MaxMembers;
    return Node;
}

void UCreateLobbyAsyncTask::Activate()
{
    if (SteamAPI_Init())
    {
        SteamAPICall_t handle = SteamMatchmaking()->CreateLobby(static_cast<ELobbyType>(LobbyType), MaxMembers);
        m_LobbyCreate_t.Set(handle, this, &UCreateLobbyAsyncTask::HandleCreateLobby);
    }
    else
    {
        Completed.Broadcast(UEResult::EPC_IOFailure, 0);
    }
}

void UCreateLobbyAsyncTask::HandleCreateLobby(LobbyCreated_t* Response, bool bIOError)
{
    FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
        {
            if (!bIOError)
            {
                Completed.Broadcast(static_cast<UEResult>(Response->m_eResult), static_cast<int64>(Response->m_ulSteamIDLobby));
            }
            else
            {
                Completed.Broadcast(UEResult::EPC_IOFailure, 0);
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread);
    GameThreadTask->Wait();
    SetReadyToDestroy();
}
