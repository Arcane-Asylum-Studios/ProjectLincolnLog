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
#include "AchievementDataAsset.generated.h"

UCLASS()
class TOOLKITSTEAMWORKS_API UAchievementDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "API Name", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	FString ApiName;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Name", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	FString GetDisplayName() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Description", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	FString GetDescription() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Is Hidden", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	bool GetIsHidden() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Is Achieved", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	bool GetIsAchieved() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Is Achieved", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	bool SetIsAchieved(bool bNewValue) const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Unlock Time", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	FDateTime GetUnlockTime() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Global Percent", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	float GetGlobalPercent() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Status", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	FAchievementStatus GetStatus() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Status for User", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	FUserAchievementStatus GetStatusForUser(int64 user) const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Icon", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Achievement Data")
	void GetIcon(FIconLoadCallback callback) const;
};
