// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/InventoryItemDataAsset.h"
#include "ToolkitSteamworks/Public/HeathenTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UInventoryItemDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UInventoryItemDataAsset_NoRegister();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_ItemResultsCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamInventoryStartPurchaseResultCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FItemCount();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetailWithProperties();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FItemPrice();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Class UInventoryItemDataAsset Function AddPromoItem
struct Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics
{
	struct InventoryItemDataAsset_eventAddPromoItem_Parms
	{
		TArray<FString> ReadProperties;
		FScriptDelegate Callback;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Add Promo" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReadProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadProperties;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReadProperties_Inner = { "ReadProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReadProperties = { "ReadProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventAddPromoItem_Parms, ReadProperties), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventAddPromoItem_Parms, Callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_ItemResultsCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576704677
void Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryItemDataAsset_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryItemDataAsset_eventAddPromoItem_Parms), &Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReadProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReadProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "AddPromoItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::InventoryItemDataAsset_eventAddPromoItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::InventoryItemDataAsset_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execAddPromoItem)
{
	P_GET_TARRAY(FString,Z_Param_ReadProperties);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddPromoItem(Z_Param_ReadProperties,FItemResultsCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function AddPromoItem

// Begin Class UInventoryItemDataAsset Function ExchangeItemsFor
struct Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics
{
	struct InventoryItemDataAsset_eventExchangeItemsFor_Parms
	{
		TArray<FItemCount> Recipe;
		TArray<FString> ReadProperties;
		FScriptDelegate Callback;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Exchange Items For" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Recipe_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Recipe;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReadProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadProperties;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_Recipe_Inner = { "Recipe", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemCount, METADATA_PARAMS(0, nullptr) }; // 3650960223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_Recipe = { "Recipe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventExchangeItemsFor_Parms, Recipe), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3650960223
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReadProperties_Inner = { "ReadProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReadProperties = { "ReadProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventExchangeItemsFor_Parms, ReadProperties), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventExchangeItemsFor_Parms, Callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_ItemResultsCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576704677
void Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryItemDataAsset_eventExchangeItemsFor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryItemDataAsset_eventExchangeItemsFor_Parms), &Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_Recipe_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_Recipe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReadProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReadProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "ExchangeItemsFor", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::InventoryItemDataAsset_eventExchangeItemsFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::InventoryItemDataAsset_eventExchangeItemsFor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execExchangeItemsFor)
{
	P_GET_TARRAY(FItemCount,Z_Param_Recipe);
	P_GET_TARRAY(FString,Z_Param_ReadProperties);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExchangeItemsFor(Z_Param_Recipe,Z_Param_ReadProperties,FItemResultsCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function ExchangeItemsFor

// Begin Class UInventoryItemDataAsset Function GetName
struct Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics
{
	struct InventoryItemDataAsset_eventGetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Get Name" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::InventoryItemDataAsset_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::InventoryItemDataAsset_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function GetName

// Begin Class UInventoryItemDataAsset Function GetPrice
struct Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics
{
	struct InventoryItemDataAsset_eventGetPrice_Parms
	{
		FItemPrice ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Get Price" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventGetPrice_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemPrice, METADATA_PARAMS(0, nullptr) }; // 201970840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "GetPrice", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::InventoryItemDataAsset_eventGetPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::InventoryItemDataAsset_eventGetPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execGetPrice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemPrice*)Z_Param__Result=P_THIS->GetPrice();
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function GetPrice

// Begin Class UInventoryItemDataAsset Function GetQuantity
struct Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics
{
	struct InventoryItemDataAsset_eventGetQuantity_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Get Quantity" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "GetQuantity", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::InventoryItemDataAsset_eventGetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::InventoryItemDataAsset_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execGetQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetQuantity();
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function GetQuantity

// Begin Class UInventoryItemDataAsset Function HasPrice
struct Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics
{
	struct InventoryItemDataAsset_eventHasPrice_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Has Price" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryItemDataAsset_eventHasPrice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryItemDataAsset_eventHasPrice_Parms), &Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "HasPrice", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::InventoryItemDataAsset_eventHasPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::InventoryItemDataAsset_eventHasPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execHasPrice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPrice();
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function HasPrice

// Begin Class UInventoryItemDataAsset Function StartPurchase
struct Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics
{
	struct InventoryItemDataAsset_eventStartPurchase_Parms
	{
		int32 Quantity;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Start Purchase" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventStartPurchase_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventStartPurchase_Parms, Callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamInventoryStartPurchaseResultCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 321428695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "StartPurchase", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::InventoryItemDataAsset_eventStartPurchase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::InventoryItemDataAsset_eventStartPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execStartPurchase)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPurchase(Z_Param_Quantity,FSteamInventoryStartPurchaseResultCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function StartPurchase

// Begin Class UInventoryItemDataAsset Function TriggerItemDrop
struct Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics
{
	struct InventoryItemDataAsset_eventTriggerItemDrop_Parms
	{
		TArray<FString> ReadProperties;
		FScriptDelegate Callback;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Trigger Drop" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReadProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadProperties;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReadProperties_Inner = { "ReadProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReadProperties = { "ReadProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventTriggerItemDrop_Parms, ReadProperties), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemDataAsset_eventTriggerItemDrop_Parms, Callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_ItemResultsCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576704677
void Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryItemDataAsset_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryItemDataAsset_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReadProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReadProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemDataAsset, nullptr, "TriggerItemDrop", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::InventoryItemDataAsset_eventTriggerItemDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::InventoryItemDataAsset_eventTriggerItemDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItemDataAsset::execTriggerItemDrop)
{
	P_GET_TARRAY(FString,Z_Param_ReadProperties);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TriggerItemDrop(Z_Param_ReadProperties,FItemResultsCallback(Z_Param_Callback));
	P_NATIVE_END;
}
// End Class UInventoryItemDataAsset Function TriggerItemDrop

// Begin Class UInventoryItemDataAsset
void UInventoryItemDataAsset::StaticRegisterNativesUInventoryItemDataAsset()
{
	UClass* Class = UInventoryItemDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPromoItem", &UInventoryItemDataAsset::execAddPromoItem },
		{ "ExchangeItemsFor", &UInventoryItemDataAsset::execExchangeItemsFor },
		{ "GetName", &UInventoryItemDataAsset::execGetName },
		{ "GetPrice", &UInventoryItemDataAsset::execGetPrice },
		{ "GetQuantity", &UInventoryItemDataAsset::execGetQuantity },
		{ "HasPrice", &UInventoryItemDataAsset::execHasPrice },
		{ "StartPurchase", &UInventoryItemDataAsset::execStartPurchase },
		{ "TriggerItemDrop", &UInventoryItemDataAsset::execTriggerItemDrop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemDataAsset);
UClass* Z_Construct_UClass_UInventoryItemDataAsset_NoRegister()
{
	return UInventoryItemDataAsset::StaticClass();
}
struct Z_Construct_UClass_UInventoryItemDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryItemDataAsset.h" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "ID" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDetailsArray_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Inventory Item Data" },
		{ "DisplayName", "Details" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/InventoryItemDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDetailsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDetailsArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_AddPromoItem, "AddPromoItem" }, // 985973462
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_ExchangeItemsFor, "ExchangeItemsFor" }, // 1556168294
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_GetName, "GetName" }, // 2184230522
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_GetPrice, "GetPrice" }, // 514234848
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_GetQuantity, "GetQuantity" }, // 4064600660
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_HasPrice, "HasPrice" }, // 441677443
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_StartPurchase, "StartPurchase" }, // 2616453247
		{ &Z_Construct_UFunction_UInventoryItemDataAsset_TriggerItemDrop, "TriggerItemDrop" }, // 1464999803
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryItemDataAsset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemDataAsset, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryItemDataAsset_Statics::NewProp_ItemDetailsArray_Inner = { "ItemDetailsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemDetailWithProperties, METADATA_PARAMS(0, nullptr) }; // 332334729
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryItemDataAsset_Statics::NewProp_ItemDetailsArray = { "ItemDetailsArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemDataAsset, ItemDetailsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDetailsArray_MetaData), NewProp_ItemDetailsArray_MetaData) }; // 332334729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemDataAsset_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemDataAsset_Statics::NewProp_ItemDetailsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemDataAsset_Statics::NewProp_ItemDetailsArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryItemDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemDataAsset_Statics::ClassParams = {
	&UInventoryItemDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryItemDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItemDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryItemDataAsset()
{
	if (!Z_Registration_Info_UClass_UInventoryItemDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemDataAsset.OuterSingleton, Z_Construct_UClass_UInventoryItemDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryItemDataAsset.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UInventoryItemDataAsset>()
{
	return UInventoryItemDataAsset::StaticClass();
}
UInventoryItemDataAsset::UInventoryItemDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemDataAsset);
UInventoryItemDataAsset::~UInventoryItemDataAsset() {}
// End Class UInventoryItemDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemDataAsset, UInventoryItemDataAsset::StaticClass, TEXT("UInventoryItemDataAsset"), &Z_Registration_Info_UClass_UInventoryItemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemDataAsset), 1679960569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_45566508(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
