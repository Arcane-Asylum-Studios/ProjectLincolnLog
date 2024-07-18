/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#include "HeathenTools.h"
#include "Async/TaskGraphInterfaces.h"

APIUserStatsClientMostAchievedLinker::APIUserStatsClientMostAchievedLinker(FMostAchievedStatusInfo InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUserStats()->RequestGlobalAchievementPercentages();
	m_GlobalAchievementPercentagesReady_t.Set(handle, this, &APIUserStatsClientMostAchievedLinker::SteamCallback);
}

void APIUserStatsClientMostAchievedLinker::SteamCallback(GlobalAchievementPercentagesReady_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, Response, bIOError]()
		{
			if (!bIOError && Response->m_eResult == EResult::k_EResultOK)
			{
				TArray<FGlobalAchievementStatus> results;

				const int ACH_NAME_MAX_LENGTH = 64;
				char achName[ACH_NAME_MAX_LENGTH];
				float achPercent;
				bool achUnlocked;

				int i = SteamUserStats()->GetMostAchievedAchievementInfo(achName, ACH_NAME_MAX_LENGTH, &achPercent, &achUnlocked);
				while (i != -1)
				{
					FGlobalAchievementStatus nRecord;
					nRecord.bAchieved = achUnlocked;
					nRecord.ApiName = FString(achName);
					nRecord.Percent = achPercent;
					results.Add(nRecord);
					i = SteamUserStats()->GetNextMostAchievedAchievementInfo(i, achName, ACH_NAME_MAX_LENGTH, &achPercent, &achUnlocked);
				}

				if (Callback.IsBound())
					Callback.Execute(results);
			}
			else if (Callback.IsBound())
				Callback.Execute(TArray<FGlobalAchievementStatus>());
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientLeaderboardFindResultLinker::APIUserStatsClientLeaderboardFindResultLinker(FString board, FLeaderboardFindResult InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUserStats()->FindLeaderboard(StringCast<ANSICHAR>(*board).Get());
	m_LeaderboardFindResult_t.Set(handle, this, &APIUserStatsClientLeaderboardFindResultLinker::SteamCallback);
}

void APIUserStatsClientLeaderboardFindResultLinker::SteamCallback(LeaderboardFindResult_t* Response, bool bIOError)
{
	if (!bIOError)
	{
		int64 boardId = static_cast<int64>(Response->m_hSteamLeaderboard);
		bool found = Response->m_bLeaderboardFound > 0 ? true : false;

		FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, boardId, found]()
			{
				if (Callback.IsBound())
				{
					UE_LOG(LogTemp, Log, TEXT("Board found and callback invoked"));
					Callback.Execute(boardId, found);
				}
				else
				{
					UE_LOG(LogTemp, Log, TEXT("Board found, no callback to invoke"));
				}
			}, TStatId(), nullptr, ENamedThreads::GameThread);
		GameThreadTask->Wait();
	}
	else
	{
		// Execute the delegate on the game thread asynchronously
		FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
			{
				if (Callback.IsBound())
					Callback.Execute(0, false);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
		GameThreadTask->Wait();
	}

	delete this;
}

APIUserStatsClientLeaderboardScoreUploadedLinker::APIUserStatsClientLeaderboardScoreUploadedLinker(int64 boardId, bool keepBest, int32 score, TArray<int32> data, FLeaderboardScoreUploaded InCallback)
{
	Callback = InCallback;
	SteamLeaderboard_t board = static_cast<SteamLeaderboard_t>(boardId);
	ELeaderboardUploadScoreMethod method = keepBest ? ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodKeepBest : ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodForceUpdate;

	SteamAPICall_t handle = SteamUserStats()->UploadLeaderboardScore(board, method, score, data.GetData(), data.Num());
	m_LeaderboardScoreUploaded_t.Set(handle, this, &APIUserStatsClientLeaderboardScoreUploadedLinker::SteamCallback);
}

void APIUserStatsClientLeaderboardScoreUploadedLinker::SteamCallback(LeaderboardScoreUploaded_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Callback.IsBound())
					Callback.Execute(Response->m_bSuccess == 1, Response->m_bScoreChanged == 1, Response->m_nGlobalRankNew, Response->m_nGlobalRankPrevious);
			}
			else if (Callback.IsBound())
				Callback.Execute(false, false, 0, 0);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientLeaderboardUGCSetLinker::APIUserStatsClientLeaderboardUGCSetLinker(SteamLeaderboard_t board, UGCHandle_t ugc, FLeaderboardUGCSet InCallback)
{
	SteamAPICall_t handle = SteamUserStats()->AttachLeaderboardUGC(board, ugc);
	m_LeaderboardUGCSet_t.Set(handle, this, &APIUserStatsClientLeaderboardUGCSetLinker::SteamCallback);
}

void APIUserStatsClientLeaderboardUGCSetLinker::SteamCallback(LeaderboardUGCSet_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError && Callback.IsBound())
				Callback.Execute(static_cast<UEResult>(Response->m_eResult));
			else if (Callback.IsBound())
				Callback.Execute(UEResult::EPC_IOFailure);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientGlobalStatIntLinker::APIUserStatsClientGlobalStatIntLinker(FString apiName, int32 days, FGlobalStatsIntHistoryReceived InCallback)
{
	numDays = days;
	name = apiName;
	Callback = InCallback;
	SteamAPICall_t handle = SteamUserStats()->RequestGlobalStats(days);
	m_GlobalStatsReceived_t.Set(handle, this, &APIUserStatsClientGlobalStatIntLinker::SteamCallback);
}

void APIUserStatsClientGlobalStatIntLinker::SteamCallback(GlobalStatsReceived_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				TArray<int64> GlobalStatHistory;

				int64* Data = new int64[numDays];

				int32 NumEntries = SteamUserStats()->GetGlobalStatHistory(StringCast<ANSICHAR>(*name).Get(), Data, numDays);

				if (NumEntries > 0)
				{
					// Populate the TArray with the retrieved data
					for (int32 i = 0; i < NumEntries; i++)
					{
						GlobalStatHistory.Add(Data[i]);
					}
				}

				// Clean up allocated memory
				delete[] Data;

				if (Callback.IsBound())
					Callback.Execute(GlobalStatHistory, static_cast<UEResult>(Response->m_eResult));
			}
			else if (Callback.IsBound())
				Callback.Execute(TArray<int64>(), UEResult::EPC_IOFailure);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientGlobalStatDoubleLinker::APIUserStatsClientGlobalStatDoubleLinker(FString apiName, int32 days, FGlobalStatsDoubleHistoryReceived InCallback)
{
	numDays = days;
	name = apiName;
	Callback = InCallback;
	SteamAPICall_t handle = SteamUserStats()->RequestGlobalStats(days);
	m_GlobalStatsReceived_t.Set(handle, this, &APIUserStatsClientGlobalStatDoubleLinker::SteamCallback);
}

void APIUserStatsClientGlobalStatDoubleLinker::SteamCallback(GlobalStatsReceived_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				TArray<double> GlobalStatHistory;
				double* Data = new double[numDays];

				int32 NumEntries = SteamUserStats()->GetGlobalStatHistory(StringCast<ANSICHAR>(*name).Get(), Data, numDays);

				if (NumEntries > 0)
				{
					// Populate the TArray with the retrieved data
					for (int32 i = 0; i < NumEntries; i++)
					{
						GlobalStatHistory.Add(Data[i]);
					}
				}

				// Clean up allocated memory
				delete[] Data;

				if (Callback.IsBound())
					Callback.Execute(GlobalStatHistory, static_cast<UEResult>(Response->m_eResult));
			}
			else if (Callback.IsBound())
				Callback.Execute(TArray<double>(), UEResult::EPC_IOFailure);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientLeaderboardFindOrCreateResultLinker::APIUserStatsClientLeaderboardFindOrCreateResultLinker(FString board, UELeaderboardSortMethod sortMethod, UELeaderboardDisplayType displayType, FLeaderboardFindResult InCallback)
{
	SteamAPICall_t handle = SteamUserStats()->FindOrCreateLeaderboard(StringCast<ANSICHAR>(*board).Get(), static_cast<ELeaderboardSortMethod>(sortMethod), static_cast<ELeaderboardDisplayType>(displayType));
	m_LeaderboardFindResult_t.Set(handle, this, &APIUserStatsClientLeaderboardFindOrCreateResultLinker::SteamCallback);
}

void APIUserStatsClientLeaderboardFindOrCreateResultLinker::SteamCallback(LeaderboardFindResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				int64 boardId = static_cast<int64>(Response->m_hSteamLeaderboard);
				bool found = Response->m_bLeaderboardFound > 0 ? true : false;
				if (Callback.IsBound())
					Callback.Execute(boardId, found);
			}
			else if (Callback.IsBound())
				Callback.Execute(0, false);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientNumberOfCurrentPlayersLinker::APIUserStatsClientNumberOfCurrentPlayersLinker(FNumCurrentPlayers InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUserStats()->GetNumberOfCurrentPlayers();
	m_NumberOfCurrentPlayers_t.Set(handle, this, &APIUserStatsClientNumberOfCurrentPlayersLinker::SteamCallback);
}

void APIUserStatsClientNumberOfCurrentPlayersLinker::SteamCallback(NumberOfCurrentPlayers_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError && Callback.IsBound())
			{
				Callback.Execute(Response->m_cPlayers);
			}
			else if (Callback.IsBound())
				Callback.Execute(0);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserStatsClientUserStatsReceivedResultLinker::APIUserStatsClientUserStatsReceivedResultLinker(CSteamID userId, FUserStatsReceivedResult InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUserStats()->RequestUserStats(userId);
	m_UserStatsReceived_t.Set(handle, this, &APIUserStatsClientUserStatsReceivedResultLinker::SteamCallback);
}

void APIUserStatsClientUserStatsReceivedResultLinker::SteamCallback(UserStatsReceived_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				int64 userId = STEAMID_TO_INT64(Response->m_steamIDUser);
				int64 gameId = static_cast<int64>(Response->m_nGameID);
				UEResult result = static_cast<UEResult>(Response->m_eResult);
				if (Callback.IsBound())
					Callback.Execute(gameId, result, userId);
			}
			else if (Callback.IsBound())
				Callback.Execute(0, UEResult::EPC_IOFailure, 0);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
}

LeaderboardDownloadRequestLinker::LeaderboardDownloadRequestLinker(SteamAPICall_t handle, int detailsPerEntry, FLeaderboardEntriesDownloaded InCallback)
{
	maxDetailsPerEntry = detailsPerEntry;
	Callback = InCallback;
	m_LeaderboardScoresDownloaded_t.Set(handle, this, &LeaderboardDownloadRequestLinker::SteamCallback);
}

void LeaderboardDownloadRequestLinker::SteamCallback(LeaderboardScoresDownloaded_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			TArray<FLeaderboardEntry> results;

			if (!bIOError)
			{
				for (int i = 0; i < Response->m_cEntryCount; i++)
				{
					LeaderboardEntry_t* entry = new LeaderboardEntry_t;
					int32* details = new int32[maxDetailsPerEntry];
					if (SteamUserStats()->GetDownloadedLeaderboardEntry(Response->m_hSteamLeaderboardEntries, i, entry, details, maxDetailsPerEntry))
					{
						FLeaderboardEntry nEntry = FLeaderboardEntry();
						if (maxDetailsPerEntry > 0)
						{
							for (int ii = 0; ii < maxDetailsPerEntry; ii++)
							{
								nEntry.Details.Add(details[ii]);
							}
						}
						delete[] details;

						nEntry.Rank = entry->m_nGlobalRank;
						nEntry.Score = entry->m_nScore;
						nEntry.UgcHandle = static_cast<int64>(entry->m_hUGC);
						nEntry.UserId = STEAMID_TO_INT64(entry->m_steamIDUser);

						delete entry;
						results.Add(nEntry);
					}
					else
					{
						delete entry;
						delete[] details;
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("IO Error reported on Leaderboard Download Scores request."));
			}

			if (Callback.IsBound())
				Callback.Execute(results);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

FAssociateWithClanResultLinker::FAssociateWithClanResultLinker(int64 clanId, FAssociateWithClanResult InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamGameServer()->AssociateWithClan(INT64_TO_STEAMID(clanId));
	m_AssociateWithClanResult_t.Set(handle, this, &FAssociateWithClanResultLinker::SteamCallback);
}

void FAssociateWithClanResultLinker::SteamCallback(AssociateWithClanResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

FComputeNewPlayerCompatibilityResultLinker::FComputeNewPlayerCompatibilityResultLinker(int64 userId, FComputeNewPlayerCompatibilityResult InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamGameServer()->ComputeNewPlayerCompatibility(INT64_TO_STEAMID(userId));
	m_ComputeNewPlayerCompatibilityResult_t.Set(handle, this, &FComputeNewPlayerCompatibilityResultLinker::SteamCallback);
}

void FComputeNewPlayerCompatibilityResultLinker::SteamCallback(ComputeNewPlayerCompatibilityResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), Response->m_cPlayersThatDontLikeCandidate, Response->m_cPlayersThatCandidateDoesntLike, Response->m_cClanPlayersThatDontLikeCandidate);
				else
					Callback.Execute(UEResult::EPC_IOFailure, 0, 0, 0);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
	delete this;
}

FGSStatsReceivedLinker::FGSStatsReceivedLinker(int64 userId, FGSStatsCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamGameServerStats()->RequestUserStats(INT64_TO_STEAMID(userId));
	m_GSStatsReceived_t.Set(handle, this, &FGSStatsReceivedLinker::SteamCallback);
}

void FGSStatsReceivedLinker::SteamCallback(GSStatsReceived_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), STEAMID_TO_INT64(Response->m_steamIDUser));
				else
					Callback.Execute(UEResult::EPC_IOFailure, 0);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
	delete this;
}

SetPersonaNameResponseLinker::SetPersonaNameResponseLinker(FString name, FSetPersonaNameResponseCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamFriends()->SetPersonaName(StringCast<ANSICHAR>(*name).Get());
	m_SetPersonaNameResponse_t.Set(handle, this, &SetPersonaNameResponseLinker::SteamCallback);
}

void SetPersonaNameResponseLinker::SteamCallback(SetPersonaNameResponse_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
				Callback.Execute(Response->m_bSuccess, Response->m_bLocalSuccess, static_cast<UEResult>(Response->m_result));
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIFriendsClientFriendsEnumerateFollowingListLinker::APIFriendsClientFriendsEnumerateFollowingListLinker(FFriendsEnumerateFollowingListCallback InCallback)
{
	if (InCallback.IsBound())
	{
		Callback = InCallback;

		SteamAPICall_t Handle = SteamFriends()->EnumerateFollowingList(0);

		m_FriendsEnumerateFollowingList_t.Set(Handle, this, &APIFriendsClientFriendsEnumerateFollowingListLinker::SteamCallback);
	}
}

void APIFriendsClientFriendsEnumerateFollowingListLinker::SteamCallback(FriendsEnumerateFollowingList_t* Response, bool bIOError)
{
	if (Response->m_eResult == EResult::k_EResultOK)
	{
		if (Response->m_nResultsReturned > 0)
		{
			for (int i = 0; i < Response->m_nResultsReturned; i++)
			{
				results.Add(static_cast<int64>(Response->m_rgSteamID[i].ConvertToUint64()));
			}

			if (results.Num() < Response->m_nTotalResultCount)
			{
				SteamAPICall_t Handle = SteamFriends()->EnumerateFollowingList(results.Num());

				m_FriendsEnumerateFollowingList_t.Set(Handle, this, &APIFriendsClientFriendsEnumerateFollowingListLinker::SteamCallback);
			}
			else
			{
				FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
					{
						Callback.Execute(UEResult::EPC_OK, results);
					}, TStatId(), nullptr, ENamedThreads::GameThread);
				GameThreadTask->Wait();
				delete this;
			}
		}
		else
		{
			FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
				{
					Callback.Execute(UEResult::EPC_OK, results);
				}, TStatId(), nullptr, ENamedThreads::GameThread);
			GameThreadTask->Wait();
			delete this;
		}
	}
	else
	{
		FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
			{
				Callback.Execute(static_cast<UEResult>(Response->m_eResult), results);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
		GameThreadTask->Wait();
		delete this;
	}
}

SteamInventoryStartPurchaseResultLinker::SteamInventoryStartPurchaseResultLinker(TArray<FItemDefCount> items, FSteamInventoryStartPurchaseResultCallback InCallback)
{
	TArray<SteamItemDef_t> defs;
	TArray<uint32> counts;
	uint32 length = items.Num();
	Callback = InCallback;
	for (uint32 i = 0; i < length; i++)
	{
		defs.Add(SteamItemDef_t(items[i].ItemDef));
		counts.Add(static_cast<uint32>(items[i].Quantity));
	}

	SteamAPICall_t handle = SteamInventory()->StartPurchase(defs.GetData(), counts.GetData(), length);
	if (handle == k_uAPICallInvalid)
	{
		//Invalid call, likely due to a bad input parameter
		FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
			{
				if (Callback.IsBound())
					Callback.Execute(UEResult::EPC_InvalidParam, 0, 0);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
		GameThreadTask->Wait();
	}
	else
		m_SteamInventoryStartPurchaseResult_t.Set(handle, this, &SteamInventoryStartPurchaseResultLinker::SteamCallback);
}

void SteamInventoryStartPurchaseResultLinker::SteamCallback(SteamInventoryStartPurchaseResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError && Response->m_result == EResult::k_EResultOK)
			{
				if (Callback.IsBound())
					Callback.Execute(static_cast<UEResult>(Response->m_result), static_cast<int64>(Response->m_ulOrderID), static_cast<int64>(Response->m_ulTransID));
			}
			else
			{
				if (Callback.IsBound())
					Callback.Execute(static_cast<UEResult>(Response->m_result), 0, 0);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SteamInventoryRequestPricesResultLinker::SteamInventoryRequestPricesResultLinker(FRequestPricesCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamInventory()->RequestPrices();
	m_SteamInventoryRequestPricesResult_t.Set(handle, this, &SteamInventoryRequestPricesResultLinker::SteamCallback);
}

void SteamInventoryRequestPricesResultLinker::SteamCallback(SteamInventoryRequestPricesResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
				{
					UEResult result = static_cast<UEResult>(Response->m_result);
					UESteamCurrencyCode code = HeathenTools::MapSteamCurrencyCodeToEnum(Response->m_rgchCurrency);
					FString symbol = HeathenTools::GetSymbol(code);
					Callback.Execute(result, code, symbol);
				}
				else
				{
					Callback.Execute(UEResult::EPC_IOFailure, UESteamCurrencyCode::Unknown, FString());
				}
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SteamInventoryEligiblePromoItemDefIDsLinker::SteamInventoryEligiblePromoItemDefIDsLinker(FSteamInventoryEligiblePromoItemDefIDsCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamInventory()->RequestEligiblePromoItemDefinitionsIDs(SteamUser()->GetSteamID());
	m_SteamInventoryEligiblePromoItemDefIDs_t.Set(handle, this, &SteamInventoryEligiblePromoItemDefIDsLinker::SteamCallback);
}

void SteamInventoryEligiblePromoItemDefIDsLinker::SteamCallback(SteamInventoryEligiblePromoItemDefIDs_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
				{
					uint32 count = static_cast<uint32>(Response->m_numEligiblePromoItemDefs);
					TArray<int32> itemDefIds;
					itemDefIds.AddUninitialized(Response->m_numEligiblePromoItemDefs);

					SteamInventory()->GetEligiblePromoItemDefinitionIDs(Response->m_steamID, itemDefIds.GetData(), &count);

					Callback.Execute(static_cast<UEResult>(Response->m_result),
						itemDefIds,
						Response->m_bCachedData);
				}
				else
				{
					Callback.Execute(UEResult::EPC_IOFailure,
						TArray<int32>(),
						false);
				}
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

FLobbyMatchListLinker::FLobbyMatchListLinker(FLobbyMatchList InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->RequestLobbyList();
	m_LobbyMatchList_t.Set(handle, this, &FLobbyMatchListLinker::SteamCallback);
}

void FLobbyMatchListLinker::SteamCallback(LobbyMatchList_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Callback.IsBound())
					Callback.Execute(Response->m_nLobbiesMatching);
			}
			else
			{
				if (Callback.IsBound())
					Callback.Execute(0);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

FLobbyEnterLinker::FLobbyEnterLinker(int64 lobbyId, FLobbyEnter InCallback)
{
	Target = nullptr;
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->JoinLobby(INT64_TO_STEAMID(lobbyId));
	m_LobbyEnter_t.Set(handle, this, &FLobbyEnterLinker::SteamCallback);
}

FLobbyEnterLinker::FLobbyEnterLinker(ULobbyDataAsset* InTarget, int64 lobbyId, FLobbyEnter InCallback)
{
	Target = InTarget;
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->JoinLobby(INT64_TO_STEAMID(lobbyId));
	m_LobbyEnter_t.Set(handle, this, &FLobbyEnterLinker::SteamCallback);
}

void FLobbyEnterLinker::SteamCallback(LobbyEnter_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Callback.IsBound())
					Callback.Execute(static_cast<int64>(Response->m_ulSteamIDLobby), Response->m_bLocked, static_cast<UEChatRoomEnterResponse>(Response->m_EChatRoomEnterResponse));
			}
			else
			{
				if (Callback.IsBound())
					Callback.Execute(0, true, UEChatRoomEnterResponse::EPC_Error);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

FLobbyCreateLinker::FLobbyCreateLinker(UELobbyType type, int32 maxMembers, FLobbyCreate InCallback)
{
	Target = nullptr;
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->CreateLobby(static_cast<ELobbyType>(type), maxMembers);
	m_LobbyCreate_t.Set(handle, this, &FLobbyCreateLinker::SteamCallback);
}

FLobbyCreateLinker::FLobbyCreateLinker(ULobbyDataAsset* InTarget, UELobbyType type, int32 maxMembers, FLobbyCreate InCallback)
{
	Target = InTarget;
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->CreateLobby(static_cast<ELobbyType>(type), maxMembers);
	m_LobbyCreate_t.Set(handle, this, &FLobbyCreateLinker::SteamCallback);
}

void FLobbyCreateLinker::SteamCallback(LobbyCreated_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Callback.IsBound())
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), static_cast<int64>(Response->m_ulSteamIDLobby));
			}
			else
			{
				if (Callback.IsBound())
					Callback.Execute(UEResult::EPC_IOFailure, 0);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

FLobbyQuickMatchLinker::FLobbyQuickMatchLinker(FLobbyMatch InCallback)
{
	Target = nullptr;
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->RequestLobbyList();
	m_LobbyMatchList_t.Set(handle, this, &FLobbyQuickMatchLinker::MatchCallback);
}

FLobbyQuickMatchLinker::FLobbyQuickMatchLinker(ULobbyDataAsset* InTarget, FLobbyMatch InCallback)
{
	Target = InTarget;
	Callback = InCallback;
	SteamAPICall_t handle = SteamMatchmaking()->RequestLobbyList();
	m_LobbyMatchList_t.Set(handle, this, &FLobbyQuickMatchLinker::MatchCallback);
}

void FLobbyQuickMatchLinker::MatchCallback(LobbyMatchList_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Response->m_nLobbiesMatching > 0)
				{
					CSteamID lobbyId = SteamMatchmaking()->GetLobbyByIndex(0);
					SteamAPICall_t handle = SteamMatchmaking()->JoinLobby(lobbyId);
					m_LobbyEnter_t.Set(handle, this, &FLobbyQuickMatchLinker::EnterCallback);
				}
				else
				{
					SteamAPICall_t handle = SteamMatchmaking()->CreateLobby(ELobbyType::k_ELobbyTypePrivate, 2);
					m_LobbyCreate_t.Set(handle, this, &FLobbyQuickMatchLinker::CreateCallback);
				}
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
}

void FLobbyQuickMatchLinker::CreateCallback(LobbyCreated_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Callback.IsBound())
					Callback.Execute(static_cast<int64>(Response->m_ulSteamIDLobby), true, static_cast<UEResult>(Response->m_eResult), false, UEChatRoomEnterResponse::EPC_Success);
			}
			else
			{
				if (Callback.IsBound())
					Callback.Execute(0, true, UEResult::EPC_IOFailure, true, UEChatRoomEnterResponse::EPC_Error);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

void FLobbyQuickMatchLinker::EnterCallback(LobbyEnter_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError)
			{
				if (Callback.IsBound())
					Callback.Execute(static_cast<int64>(Response->m_ulSteamIDLobby), false, UEResult::EPC_OK, Response->m_bLocked, static_cast<UEChatRoomEnterResponse>(Response->m_EChatRoomEnterResponse));
			}
			else
			{
				if (Callback.IsBound())
					Callback.Execute(0, false, UEResult::EPC_IOFailure, true, UEChatRoomEnterResponse::EPC_Error);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SteamMatchmakingPingResponseLinker::SteamMatchmakingPingResponseLinker(FString address, int32 port, FSteamMatchmakingPingResponse InCallback)
{
	Callback = InCallback;
	queryHandle = SteamMatchmakingServers()->PingServer(HeathenTools::IPAddress(address), static_cast<uint16>(port), this);
}

SteamMatchmakingPingResponseLinker::~SteamMatchmakingPingResponseLinker()
{
	SteamMatchmakingServers()->CancelServerQuery(queryHandle);
}

void SteamMatchmakingPingResponseLinker::ServerResponded(gameserveritem_t& server)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, server]()
		{
			FGameServerItemWrapper details;
			details.Address = HeathenTools::IPAddress(server.m_NetAdr.GetIP());
			details.ConnectionPort = static_cast<int32>(server.m_NetAdr.GetConnectionPort());
			details.QueryPort = static_cast<int32>(server.m_NetAdr.GetQueryPort());
			details.AppID = static_cast<int32>(server.m_nAppID);
			details.BotPlayers = server.m_nBotPlayers;
			details.bDoNotRefresh = server.m_bDoNotRefresh;
			details.GameDescription = FString(server.m_szGameDescription);
			details.GameDirectory = FString(server.m_szGameDir);
			details.bHadSuccessfulResponse = server.m_bHadSuccessfulResponse;
			details.Map = FString(server.m_szMap);
			details.MaxPlayers = server.m_nMaxPlayers;
			details.Name = FString(server.GetName());
			details.bPassword = server.m_bPassword;
			details.Ping = server.m_nPing;
			details.Players = server.m_nPlayers;
			details.bSecure = server.m_bSecure;
			details.ServerVersion = server.m_nServerVersion;
			details.TimeLastPlayed = FDateTime::FromUnixTimestamp(static_cast<int64>(server.m_ulTimeLastPlayed));

			if (Callback.IsBound())
				Callback.Execute(details, false);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
}

void SteamMatchmakingPingResponseLinker::ServerFailedToRespond()
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
		{
			if (Callback.IsBound())
				Callback.Execute(FGameServerItemWrapper(), true);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SteamMatchmakingPlayersResponseLinker::SteamMatchmakingPlayersResponseLinker(FString address, int32 port, FSteamMatchmakingPlayersResponse InCallback)
{
	Callback = InCallback;
	queryHandle = SteamMatchmakingServers()->PlayerDetails(HeathenTools::IPAddress(address), static_cast<uint16>(port), this);
}

SteamMatchmakingPlayersResponseLinker::~SteamMatchmakingPlayersResponseLinker()
{
	SteamMatchmakingServers()->CancelServerQuery(queryHandle);
}

void SteamMatchmakingPlayersResponseLinker::AddPlayerToList(const char* pchName, int nScore, float flTimePlayed)
{
	FGameServerPlayerDetailsWrapper entry;
	entry.Name = FString(pchName);
	entry.Score = nScore;
	entry.TimePlayed = flTimePlayed;
	results.Add(entry);
}

void SteamMatchmakingPlayersResponseLinker::PlayersFailedToRespond()
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
		{
			if (Callback.IsBound())
				Callback.Execute(TArray<FGameServerPlayerDetailsWrapper>(), true);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

void SteamMatchmakingPlayersResponseLinker::PlayersRefreshComplete()
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
		{
			if (Callback.IsBound())
				Callback.Execute(results, false);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SteamMatchmakingRulesResponseLinker::SteamMatchmakingRulesResponseLinker(FString address, int32 port, FSteamMatchmakingRulesResponse InCallback)
{
	Callback = InCallback;
	queryHandle = SteamMatchmakingServers()->ServerRules(HeathenTools::IPAddress(address), static_cast<uint16>(port), this);
}

SteamMatchmakingRulesResponseLinker::~SteamMatchmakingRulesResponseLinker()
{
	SteamMatchmakingServers()->CancelServerQuery(queryHandle);
}

void SteamMatchmakingRulesResponseLinker::RulesResponded(const char* pchRule, const char* pchValue)
{
	FKeyValuePair pair;
	pair.Key = FString(pchRule);
	pair.Value = FString(pchValue);
	results.Add(pair);
}

void SteamMatchmakingRulesResponseLinker::RulesFailedToRespond()
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
		{
			if (Callback.IsBound())
				Callback.Execute(TArray<FKeyValuePair>(), true);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

void SteamMatchmakingRulesResponseLinker::RulesRefreshComplete()
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
		{
			if (Callback.IsBound())
				Callback.Execute(results, false);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SteamMatchmakingServerListResponseLinker::SteamMatchmakingServerListResponseLinker(FSteamServerListResponce InCallback)
{
	Callback = InCallback;
}

SteamMatchmakingServerListResponseLinker::~SteamMatchmakingServerListResponseLinker()
{
	SteamMatchmakingServers()->ReleaseRequest(listHandle);
}

void SteamMatchmakingServerListResponseLinker::ServerResponded(HServerListRequest hRequest, int iServer)
{
	gameserveritem_t* server = SteamMatchmakingServers()->GetServerDetails(listHandle, iServer);
	FGameServerItemWrapper details;
	details.Address = HeathenTools::IPAddress(server->m_NetAdr.GetIP());
	details.ConnectionPort = static_cast<int32>(server->m_NetAdr.GetConnectionPort());
	details.QueryPort = static_cast<int32>(server->m_NetAdr.GetQueryPort());
	details.AppID = static_cast<int32>(server->m_nAppID);
	details.BotPlayers = server->m_nBotPlayers;
	details.bDoNotRefresh = server->m_bDoNotRefresh;
	details.GameDescription = FString(server->m_szGameDescription);
	details.GameDirectory = FString(server->m_szGameDir);
	details.bHadSuccessfulResponse = server->m_bHadSuccessfulResponse;
	details.Map = FString(server->m_szMap);
	details.MaxPlayers = server->m_nMaxPlayers;
	details.Name = FString(server->GetName());
	details.bPassword = server->m_bPassword;
	details.Ping = server->m_nPing;
	details.Players = server->m_nPlayers;
	details.bSecure = server->m_bSecure;
	details.ServerVersion = server->m_nServerVersion;
	details.TimeLastPlayed = FDateTime::FromUnixTimestamp(static_cast<int64>(server->m_ulTimeLastPlayed));
	details.ServerId = static_cast<int64>(server->m_steamID.ConvertToUint64());
	results.Add(details);
}

void SteamMatchmakingServerListResponseLinker::ServerFailedToRespond(HServerListRequest hRequest, int iServer)
{
}

void SteamMatchmakingServerListResponseLinker::RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this]()
		{
			if (Callback.IsBound())
				Callback.Execute(results);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

AddAppDependencyResultLinker::AddAppDependencyResultLinker(int64 parentFileId, int32 appId, FAddAppDependencyResultCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUGC()->AddAppDependency(static_cast<PublishedFileId_t>(parentFileId), static_cast<AppId_t>(appId));
	m_AddAppDependencyResult_t.Set(handle, this, &AddAppDependencyResultLinker::SteamCallback);
}

void AddAppDependencyResultLinker::SteamCallback(AddAppDependencyResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

AddUGCDependencyResultLinker::AddUGCDependencyResultLinker(int64 parentFileId, int64 childFileId, FAddUGCDependencyResultCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUGC()->AddDependency(static_cast<PublishedFileId_t>(parentFileId), static_cast<PublishedFileId_t>(childFileId));
	m_AddUGCDependencyResult_t.Set(handle, this, &AddUGCDependencyResultLinker::SteamCallback);
}

void AddUGCDependencyResultLinker::SteamCallback(AddUGCDependencyResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

CreateItemResultLinker::CreateItemResultLinker(int32 appId, UEWorkshopFileType type, FCreateItemResultCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUGC()->CreateItem(static_cast<AppId_t>(appId), static_cast<EWorkshopFileType>(type));
	m_CreateItemResult_t.Set(handle, this, &CreateItemResultLinker::SteamCallback);
}

void CreateItemResultLinker::SteamCallback(CreateItemResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), static_cast<int64>(Response->m_nPublishedFileId), Response->m_bUserNeedsToAcceptWorkshopLegalAgreement);
				else
					Callback.Execute(UEResult::EPC_IOFailure, 0, false);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

DeleteItemResultLinker::DeleteItemResultLinker(int64 fileId, FDeleteItemResultCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUGC()->DeleteItem(static_cast<PublishedFileId_t>(fileId));
	m_DeleteItemResult_t.Set(handle, this, &DeleteItemResultLinker::SteamCallback);
}

void DeleteItemResultLinker::SteamCallback(DeleteItemResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

GetUserItemVoteResultLinker::GetUserItemVoteResultLinker(int64 fileId, FGetUserItemVoteResultCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUGC()->GetUserItemVote(static_cast<PublishedFileId_t>(fileId));
	m_GetUserItemVoteResult_t.Set(handle, this, &GetUserItemVoteResultLinker::SteamCallback);
}

void GetUserItemVoteResultLinker::SteamCallback(GetUserItemVoteResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), Response->m_bVotedUp, Response->m_bVotedDown, Response->m_bVoteSkipped);
				else
					Callback.Execute(UEResult::EPC_IOFailure, false, false, false);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

RemoveAppDependencyResultLinker::RemoveAppDependencyResultLinker(int64 fileId, int32 appId, FRemoveAppDependencyResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->RemoveAppDependency(static_cast<PublishedFileId_t>(fileId), static_cast<AppId_t>(appId));
	m_RemoveAppDependencyResult_t.Set(handle, this, &RemoveAppDependencyResultLinker::SteamCallback);
}

void RemoveAppDependencyResultLinker::SteamCallback(RemoveAppDependencyResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

RemoveUGCDependencyResultLinker::RemoveUGCDependencyResultLinker(int64 parentFileId, int64 childFileId, FRemoveUGCDependencyResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->RemoveDependency(static_cast<PublishedFileId_t>(parentFileId), static_cast<PublishedFileId_t>(childFileId));
	m_RemoveUGCDependencyResult_t.Set(handle, this, &RemoveUGCDependencyResultLinker::SteamCallback);
}

void RemoveUGCDependencyResultLinker::SteamCallback(RemoveUGCDependencyResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

UserFavoriteItemsListChangedLinker::UserFavoriteItemsListChangedLinker(int32 appId, int64 fileId, FUserFavoriteItemsListChangedCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->AddItemToFavorites(static_cast<AppId_t>(appId), static_cast<PublishedFileId_t>(fileId));
	m_UserFavoriteItemsListChanged_t.Set(handle, this, &UserFavoriteItemsListChangedLinker::SteamCallback);
}

void UserFavoriteItemsListChangedLinker::SteamCallback(UserFavoriteItemsListChanged_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

SteamUGCQueryCompletedLinker::SteamUGCQueryCompletedLinker(int64 queryHandle, FSteamUGCQueryCompletedCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->SendQueryUGCRequest(static_cast<UGCQueryHandle_t>(queryHandle));
	m_SteamUGCQueryCompleted_t.Set(handle, this, &SteamUGCQueryCompletedLinker::SteamCallback);
}

void SteamUGCQueryCompletedLinker::SteamCallback(SteamUGCQueryCompleted_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<int64>(Response->m_handle), static_cast<UEResult>(Response->m_eResult), static_cast<int32>(Response->m_unNumResultsReturned), static_cast<int32>(Response->m_unTotalMatchingResults), Response->m_bCachedData);
				else
					Callback.Execute(0, UEResult::EPC_IOFailure, 0, 0, false);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

SetUserItemVoteResultLinker::SetUserItemVoteResultLinker(int64 fileId, bool voteUp, FSetUserItemVoteResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->SetUserItemVote(static_cast<PublishedFileId_t>(fileId), voteUp);
	m_SetUserItemVoteResult_t.Set(handle, this, &SetUserItemVoteResultLinker::SteamCallback);
}

void SetUserItemVoteResultLinker::SteamCallback(SetUserItemVoteResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

StartPlaytimeTrackingResultLinker::StartPlaytimeTrackingResultLinker(TArray<int64> fileIDs, FStartPlaytimeTrackingResultCallback callback)
{
	Callback = callback;
	int32 index = fileIDs.Num();
	PublishedFileId_t* files = new PublishedFileId_t[index];
	for (int i = 0; i < index; i++)
	{
		files[index] = static_cast<PublishedFileId_t>(fileIDs[i]);
	}

	SteamAPICall_t handle = SteamUGC()->StartPlaytimeTracking(files, index);
	m_StartPlaytimeTrackingResult_t.Set(handle, this, &StartPlaytimeTrackingResultLinker::SteamCallback);

	delete[] files;
}

void StartPlaytimeTrackingResultLinker::SteamCallback(StartPlaytimeTrackingResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

StopPlaytimeTrackingResultLinker::StopPlaytimeTrackingResultLinker(TArray<int64> fileIDs, FStopPlaytimeTrackingResultCallback callback)
{
	Callback = callback;
	int32 index = fileIDs.Num();
	PublishedFileId_t* files = new PublishedFileId_t[index];
	for (int i = 0; i < index; i++)
	{
		files[index] = static_cast<PublishedFileId_t>(fileIDs[i]);
	}

	SteamAPICall_t handle = SteamUGC()->StartPlaytimeTracking(files, index);
	m_StopPlaytimeTrackingResult_t.Set(handle, this, &StopPlaytimeTrackingResultLinker::SteamCallback);

	delete[] files;
}

void StopPlaytimeTrackingResultLinker::SteamCallback(StopPlaytimeTrackingResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

StopAllPlaytimeTrackingResultLinker::StopAllPlaytimeTrackingResultLinker(FStopPlaytimeTrackingResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->StopPlaytimeTrackingForAllItems();
	m_StopPlaytimeTrackingResult_t.Set(handle, this, &StopAllPlaytimeTrackingResultLinker::SteamCallback);
}

void StopAllPlaytimeTrackingResultLinker::SteamCallback(StopPlaytimeTrackingResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

SubmitItemUpdateResultLinker::SubmitItemUpdateResultLinker(int64 updateHandle, FString changeNote, FSubmitItemUpdateResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->SubmitItemUpdate(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*changeNote).Get());
	m_SubmitItemUpdateResult_t.Set(handle, this, &SubmitItemUpdateResultLinker::SteamCallback);
}

void SubmitItemUpdateResultLinker::SteamCallback(SubmitItemUpdateResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), Response->m_bUserNeedsToAcceptWorkshopLegalAgreement);
				else
					Callback.Execute(UEResult::EPC_IOFailure, false);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

RemoteStorageSubscribePublishedFileResultLinker::RemoteStorageSubscribePublishedFileResultLinker(int64 fileId, FRemoteStorageSubscribePublishedFileResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->SubscribeItem(static_cast<PublishedFileId_t>(fileId));
	m_RemoteStorageSubscribePublishedFileResult_t.Set(handle, this, &RemoteStorageSubscribePublishedFileResultLinker::SteamCallback);
}

void RemoteStorageSubscribePublishedFileResultLinker::SteamCallback(RemoteStorageSubscribePublishedFileResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

RemoteStorageUnsubscribePublishedFileResultLinker::RemoteStorageUnsubscribePublishedFileResultLinker(int64 fileId, FRemoteStorageUnsubscribePublishedFileResultCallback callback)
{
	Callback = callback;
	SteamAPICall_t handle = SteamUGC()->UnsubscribeItem(static_cast<PublishedFileId_t>(fileId));
	m_RemoteStorageUnsubscribePublishedFileResult_t.Set(handle, this, &RemoteStorageUnsubscribePublishedFileResultLinker::SteamCallback);
}

void RemoteStorageUnsubscribePublishedFileResultLinker::SteamCallback(RemoteStorageUnsubscribePublishedFileResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
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

WorkshopEULAStatusLinker::WorkshopEULAStatusLinker(FWorkshopEULAStatusCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUGC()->GetWorkshopEULAStatus();
	m_WorkshopEULAStatus_t.Set(handle, this, &WorkshopEULAStatusLinker::SteamCallback);
}

void WorkshopEULAStatusLinker::SteamCallback(WorkshopEULAStatus_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
					Callback.Execute(static_cast<UEResult>(Response->m_eResult), static_cast<int32>(Response->m_nAppID), static_cast<int32>(Response->m_unVersion), FDateTime(Response->m_rtAction), Response->m_bAccepted, Response->m_bNeedsAction);
				else
					Callback.Execute(UEResult::EPC_IOFailure, 0, 0, FDateTime(), false, false);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

RemoteStorageClientFileWriteAsyncCompleteLinker::RemoteStorageClientFileWriteAsyncCompleteLinker(FString name, TArray<uint8> data, FSteamClientFileWriteAsyncCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamRemoteStorage()->FileWriteAsync(StringCast<ANSICHAR>(*name).Get(), data.GetData(), data.Num());
	m_RemoteStorageFileWriteAsyncComplete_t.Set(handle, this, &RemoteStorageClientFileWriteAsyncCompleteLinker::SteamCallback);
}

void RemoteStorageClientFileWriteAsyncCompleteLinker::SteamCallback(RemoteStorageFileWriteAsyncComplete_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
				Callback.Execute(static_cast<UEResult>(Response->m_eResult));
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

RemoteStorageClientFileReadAsyncCompleteLinker::RemoteStorageClientFileReadAsyncCompleteLinker(FString name, FSteamClientFileReadAsyncCallback InCallback)
{
	Callback = InCallback;
	int32 size = SteamRemoteStorage()->GetFileSize(StringCast<ANSICHAR>(*name).Get());
	SteamAPICall_t handle = SteamRemoteStorage()->FileReadAsync(StringCast<ANSICHAR>(*name).Get(), 0, size);
	m_RemoteStorageFileReadAsyncComplete_t.Set(handle, this, &RemoteStorageClientFileReadAsyncCompleteLinker::SteamCallback);
}

void RemoteStorageClientFileReadAsyncCompleteLinker::SteamCallback(RemoteStorageFileReadAsyncComplete_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
			{
				if (!bIOError)
				{
					if (Response->m_eResult == EResult::k_EResultOK)
					{
						TArray<uint8> InSaveData = TArray<uint8>();
						InSaveData.AddUninitialized(Response->m_cubRead);
						SteamRemoteStorage()->FileReadAsyncComplete(Response->m_hFileReadAsync, InSaveData.GetData(), Response->m_cubRead);
						Callback.Execute(static_cast<UEResult>(Response->m_eResult), InSaveData);
					}
					else
						Callback.Execute(static_cast<UEResult>(Response->m_eResult), TArray<uint8>());
				}
				else
					Callback.Execute(UEResult::EPC_IOFailure, TArray<uint8>());
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

FSteamClientFileShareLinker::FSteamClientFileShareLinker(FString name, FSteamClientFileShareCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamRemoteStorage()->FileShare(StringCast<ANSICHAR>(*name).Get());
	m_RemoteStorageFileShareResult_t.Set(handle, this, &FSteamClientFileShareLinker::SteamCallback);
}

void FSteamClientFileShareLinker::SteamCallback(RemoteStorageFileShareResult_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (Callback.IsBound())
				Callback.Execute(static_cast<UEResult>(Response->m_eResult), static_cast<int64>(Response->m_hFile));
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserClientCallbackLinker::APIUserClientCallbackLinker(FString RedirectUrl, FStoreAuthURLCallback InCallback)
{
	Callback = InCallback;
	SteamAPICall_t Handle = SteamUser()->RequestStoreAuthURL(StringCast<ANSICHAR>(*RedirectUrl).Get());
	// Set the handle and callback (not supported in this simple example)
	m_StoreAuthURLResponse_t.Set(Handle, this, &APIUserClientCallbackLinker::SteamCallback);
}

void APIUserClientCallbackLinker::SteamCallback(StoreAuthURLResponse_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			if (!bIOError && Callback.IsBound())
			{
				FString URL(Response->m_szURL);
				Callback.Execute(URL, bIOError);
			}
			else if (Callback.IsBound())
				Callback.Execute(FString(), bIOError);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();

	delete this;
}

APIUserClientEncryptedAppTicketLinker::APIUserClientEncryptedAppTicketLinker(TArray<uint8> data, FEncryptedAppTicket InCallback)
{
	Callback = InCallback;
	SteamAPICall_t handle = SteamUser()->RequestEncryptedAppTicket(data.GetData(), data.Num());
	m_EncryptedAppTicketResponse_t.Set(handle, this, &APIUserClientEncryptedAppTicketLinker::SteamCallback);
}

void APIUserClientEncryptedAppTicketLinker::SteamCallback(EncryptedAppTicketResponse_t* Response, bool bIOError)
{
	FGraphEventRef GameThreadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, bIOError, Response]()
		{
			TArray<uint8> buffer;
			if (!bIOError)
			{
				uint32 written;
				SteamUser()->GetEncryptedAppTicket(NULL, 0, &written);
				buffer.SetNumUninitialized(written);
				SteamUser()->GetEncryptedAppTicket(buffer.GetData(), written, &written);
			}

			if (Callback.IsBound())
			{
				Callback.Execute(buffer, bIOError);
			}
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	GameThreadTask->Wait();
}