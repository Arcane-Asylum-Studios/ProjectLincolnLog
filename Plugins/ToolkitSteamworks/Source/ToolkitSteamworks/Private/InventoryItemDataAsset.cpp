/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/
#include "InventoryItemDataAsset.h"

int64 UInventoryItemDataAsset::GetQuantity()
{
	int64 Value = 0;
	for (const FItemDetailWithProperties Detail : ItemDetailsArray)
	{
		Value += Detail.Quantity;
	}
	return Value;
}

FString UInventoryItemDataAsset::GetName() const
{
	FString Result = FString();
	STEAM_CLIENT(Result);

	char NameBuffer[1024]; // Adjust buffer size as needed
	uint32 BufferSize = sizeof(NameBuffer);
	if (SteamInventory()->GetItemDefinitionProperty(Id, "name", NameBuffer, &BufferSize))
	{
		Result = FString(UTF8_TO_TCHAR(NameBuffer));
	}
	else
	{
		// Handle error if property retrieval fails
		UE_LOG(LogTemp, Warning, TEXT("Failed to retrieve name property for item with Id %d"), Id);
	}

	return Result;
}

bool UInventoryItemDataAsset::HasPrice() const
{
	STEAM_CLIENT(false);

	uint64 PriceInCents = 0;
	uint64 BasePriceInCents = 0;
	return SteamInventory()->GetItemPrice(Id, &PriceInCents, &BasePriceInCents);
}

FItemPrice UInventoryItemDataAsset::GetPrice()
{
	STEAM_CLIENT(FItemPrice());
	FItemPrice price = FItemPrice();
	uint64 nCur;
	uint64 nBase;
	SteamInventory()->GetItemPrice(SteamItemDef_t(Id), &nCur, &nBase);
	price.BasePrice = static_cast<int64>(nBase);
	price.CurrentPrice = static_cast<int64>(nCur);
	return price;
}

bool UInventoryItemDataAsset::AddPromoItem(TArray<FString> ReadProperties, FItemResultsCallback Callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = ReadProperties;
	request.callback = Callback;
	TArray<SteamItemDef_t> steamItemDefs;

	SteamInventoryResult_t handle;
	bool response = SteamInventory()->AddPromoItem(&handle, SteamItemDef_t(Id));
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UInventoryItemDataAsset::TriggerItemDrop(TArray<FString> ReadProperties, FItemResultsCallback Callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = ReadProperties;
	request.callback = Callback;
	SteamInventoryResult_t handle;
	bool response = SteamInventory()->TriggerItemDrop(&handle, SteamItemDef_t(Id));
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UInventoryItemDataAsset::ExchangeItemsFor(TArray<FItemCount> Recipe, TArray<FString> ReadProperties, FItemResultsCallback Callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = ReadProperties;
	request.callback = Callback;

	TArray<SteamItemDef_t> generateItems;
	TArray<uint32> generateQuantities;
	TArray<SteamItemInstanceID_t> destroyItems;
	TArray<uint32> destroyQuantities;

	for (const FItemCount& item : Recipe)
	{
		if (item.InstanceId > 0)
		{
			generateItems.Add(static_cast<SteamItemDef_t>(item.InstanceId));
			generateQuantities.Add(static_cast<uint32>(item.Quantity));
		}
		else if (item.InstanceId < 0)
		{
			destroyItems.Add(static_cast<SteamItemInstanceID_t>(-item.InstanceId));
			destroyQuantities.Add(static_cast<uint32>(item.Quantity));
		}
	}

	SteamInventoryResult_t handle;

	bool response = SteamInventory()->ExchangeItems(&handle,
		generateItems.GetData(), generateQuantities.GetData(), generateItems.Num(),
		destroyItems.GetData(), destroyQuantities.GetData(), destroyItems.Num());
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

void UInventoryItemDataAsset::StartPurchase(int32 Quantity, FSteamInventoryStartPurchaseResultCallback Callback)
{
	TArray<FItemDefCount> items = TArray<FItemDefCount>();
	FItemDefCount itemCount = FItemDefCount();
	itemCount.ItemDef = Id;
	itemCount.Quantity = Quantity;
	items.Add(itemCount);
	SteamInventoryStartPurchaseResultLinker* linker = new SteamInventoryStartPurchaseResultLinker(items, Callback);
}

