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
#include "DownloadableContentDataAsset.generated.h"

UCLASS()
class TOOLKITSTEAMWORKS_API UDownloadableContentDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Application ID", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	int AppId;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Name", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	FString GetDisplayName() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Is Available", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	bool GetIsAvailable() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Is Subscribed", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	bool GetIsSubscribed() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Is Installed", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	bool GetIsInstalled() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Install Directory", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	FString GetInstallDirectory() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Download Progress", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	float GetDownloadProgress() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Earliest Purchase Time", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	FDateTime GetEarliestPurchaseTime() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Install", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	void RequestInstall() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Uninstall", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|Downloadable Content Data")
	void RequestUninstall() const;
};
