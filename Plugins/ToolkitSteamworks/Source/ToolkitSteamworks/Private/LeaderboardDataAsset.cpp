/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/


#include "LeaderboardDataAsset.h"

FString ULeaderboardDataAsset::GetDisplayName() const
{
	STEAM_CLIENT(FString());
	return FString(SteamUserStats()->GetLeaderboardName(static_cast<uint64>(LeaderboardId)));
}

int32 ULeaderboardDataAsset::GetEntryCount() const
{
	STEAM_CLIENT(0);
	return SteamUserStats()->GetLeaderboardEntryCount(static_cast<uint64>(LeaderboardId));
}

void ULeaderboardDataAsset::GetUserEntry(int32 detailCount, FLeaderboardEntriesDownloaded callback) const
{
	STEAM_CLIENT(;);

	CSteamID* targetUsers = new CSteamID[1]{ SteamUser()->GetSteamID() };
	SteamLeaderboard_t leaderboard = static_cast<SteamLeaderboard_t>(LeaderboardId);
	SteamAPICall_t handle = SteamUserStats()->DownloadLeaderboardEntriesForUsers(leaderboard, targetUsers, 1);
	LeaderboardDownloadRequestLinker* linker = new LeaderboardDownloadRequestLinker(handle, detailCount, callback);
}

void ULeaderboardDataAsset::GetEntries(UELeaderboardDataRequest requestType, int32 start, int32 end, int32 detailCount, FLeaderboardEntriesDownloaded callback) const
{
	STEAM_CLIENT(;);
	SteamLeaderboard_t leaderboard = static_cast<SteamLeaderboard_t>(LeaderboardId);
	ELeaderboardDataRequest dRequest = static_cast<ELeaderboardDataRequest>(requestType);
	SteamAPICall_t handle = SteamUserStats()->DownloadLeaderboardEntries(leaderboard, dRequest, start, end);
	LeaderboardDownloadRequestLinker* linker = new LeaderboardDownloadRequestLinker(handle, detailCount, callback);
}

void ULeaderboardDataAsset::GetEntriesForUsers(TArray<int64> users, int32 detailCount, FLeaderboardEntriesDownloaded callback) const
{
	STEAM_CLIENT(;);
	if (users.GetAllocatedSize() != 0)
	{
		CSteamID* targetUsers = new CSteamID[users.Num()];
		int numUsers = users.Num();
		for (int i = 0; i < numUsers; i++)
		{
			targetUsers[i] = INT64_TO_STEAMID(users[i]);
		}
		SteamLeaderboard_t leaderboard = static_cast<SteamLeaderboard_t>(LeaderboardId);
		SteamAPICall_t handle = SteamUserStats()->DownloadLeaderboardEntriesForUsers(leaderboard, targetUsers, numUsers);
		LeaderboardDownloadRequestLinker* linker = new LeaderboardDownloadRequestLinker(handle, detailCount, callback);
	}
}