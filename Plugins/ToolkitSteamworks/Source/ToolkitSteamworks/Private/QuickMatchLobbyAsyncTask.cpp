/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#include "QuickMatchLobbyAsyncTask.h"

UQuickMatchLobbyAsyncTask* UQuickMatchLobbyAsyncTask::SteamQuickMatchLobby(UObject* WorldContextObject)
{
	UQuickMatchLobbyAsyncTask* Node = NewObject<UQuickMatchLobbyAsyncTask>();
	Node->WorldContextObject = WorldContextObject;

	return Node;
}

void UQuickMatchLobbyAsyncTask::Activate()
{
	if (SteamAPI_Init())
	{
		SteamAPICall_t handle = SteamMatchmaking()->RequestLobbyList();
		m_LobbyMatchList_t.Set(handle, this, &UQuickMatchLobbyAsyncTask::MatchCallback);
	}
	else
	{
		Failed.Broadcast(0, UEResult::EPC_IOFailure, UEChatRoomEnterResponse::EPC_Error);
	}
}

void UQuickMatchLobbyAsyncTask::MatchCallback(LobbyMatchList_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Response->m_nLobbiesMatching > 0)
				{
					CSteamID lobbyId = SteamMatchmaking()->GetLobbyByIndex(0);
					SteamAPICall_t handle = SteamMatchmaking()->JoinLobby(lobbyId);
					m_LobbyEnter_t.Set(handle, this, &UQuickMatchLobbyAsyncTask::EnterCallback);
				}
				else
				{
					SteamAPICall_t handle = SteamMatchmaking()->CreateLobby(ELobbyType::k_ELobbyTypePrivate, 2);
					m_LobbyCreate_t.Set(handle, this, &UQuickMatchLobbyAsyncTask::CreateCallback);
				}
			}
			else
			{
				Failed.Broadcast(0, UEResult::EPC_IOFailure, UEChatRoomEnterResponse::EPC_Error);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
}

void UQuickMatchLobbyAsyncTask::CreateCallback(LobbyCreated_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				CreatedNew.Broadcast(static_cast<int64>(Response->m_ulSteamIDLobby), static_cast<UEResult>(Response->m_eResult), UEChatRoomEnterResponse::EPC_Success);
			}
			else
			{
				Failed.Broadcast(0, UEResult::EPC_IOFailure, UEChatRoomEnterResponse::EPC_Error);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	SetReadyToDestroy();
}

void UQuickMatchLobbyAsyncTask::EnterCallback(LobbyEnter_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				JoinedExisting.Broadcast(static_cast<int64>(Response->m_ulSteamIDLobby), UEResult::EPC_OK, static_cast<UEChatRoomEnterResponse>(Response->m_EChatRoomEnterResponse));
			}
			else
			{
				Failed.Broadcast(0, UEResult::EPC_IOFailure, UEChatRoomEnterResponse::EPC_Error);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	SetReadyToDestroy();
}
