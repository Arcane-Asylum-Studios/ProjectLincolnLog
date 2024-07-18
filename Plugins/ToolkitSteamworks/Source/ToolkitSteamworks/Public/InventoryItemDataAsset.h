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
#include "InventoryItemDataAsset.generated.h"

UCLASS()
class TOOLKITSTEAMWORKS_API UInventoryItemDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "ID", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	int32 Id = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Details", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	TArray<FItemDetailWithProperties> ItemDetailsArray = TArray<FItemDetailWithProperties>();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Quantity", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	int64 GetQuantity();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Name", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	FString GetName() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Has Price", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	bool HasPrice() const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Price", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	FItemPrice GetPrice();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Promo", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	bool AddPromoItem(TArray<FString> ReadProperties, FItemResultsCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Trigger Drop", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	bool TriggerItemDrop(TArray<FString> ReadProperties, FItemResultsCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange Items For", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	bool ExchangeItemsFor(TArray<FItemCount> Recipe, TArray<FString> ReadProperties, FItemResultsCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Purchase", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory Item Data")
	void StartPurchase(int32 Quantity, FSteamInventoryStartPurchaseResultCallback Callback);
};
