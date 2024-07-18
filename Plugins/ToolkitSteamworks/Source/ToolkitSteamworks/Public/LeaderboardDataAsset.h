/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SteamGameInstance.h"
#include "LeaderboardDataAsset.generated.h"

UCLASS()
class TOOLKITSTEAMWORKS_API ULeaderboardDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "API Name", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	FString ApiName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "ID", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	int64 LeaderboardId;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Name", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	FString GetDisplayName() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Entry Count", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	int32 GetEntryCount() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Entry", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	void GetUserEntry(int32 detailCount, FLeaderboardEntriesDownloaded callback) const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Entries", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	void GetEntries(UELeaderboardDataRequest requestType, int32 start, int32 end, int32 detailCount, FLeaderboardEntriesDownloaded callback) const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Entries for Users", Keywords = "Heathen Toolkit Steamworks Leaderboard"), Category = "Heathen's Toolkit|Steamworks|Leaderboard Data")
	void GetEntriesForUsers(TArray<int64> users, int32 detailCount, FLeaderboardEntriesDownloaded callback) const;
};
