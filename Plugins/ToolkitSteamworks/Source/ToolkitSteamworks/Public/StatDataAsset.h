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
#include "StatDataAsset.generated.h"

UCLASS()
class TOOLKITSTEAMWORKS_API UStatDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "API Name", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	FString ApiName;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float Value", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	float GetFloatValue();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Int Value", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	int32 GetIntValue();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float Value for User", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	float GetFloatValueForUser(int64 user);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Int Value for User", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	int32 GetIntValueForUser(int64 user);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float Value for User (Server)", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	float ServerGetFloatValueForUser(int64 user);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Int Value for User (Server)", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	int32 ServerGetIntValueForUser(int64 user);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Float Value", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	bool SetFloatValue(float value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Int Value", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	bool SetIntValue(int32 value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Float Value for User", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	bool SetFloatValueForUser(int64 user, float value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Int Value for User", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|Stats Data")
	bool SetIntValueForUser(int64 user, int32 value);
};
