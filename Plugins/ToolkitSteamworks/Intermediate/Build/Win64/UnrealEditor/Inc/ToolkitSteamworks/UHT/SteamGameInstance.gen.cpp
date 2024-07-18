// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/SteamGameInstance.h"
#include "ToolkitSteamworks/Public/HeathenTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UInventoryItemDataAsset_NoRegister();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_USteamGameInstance();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_USteamGameInstance_NoRegister();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_DlcInstalledEvent__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_FavoritesListAccountsUpdatedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_FavoritesListChangedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_FriendRichPresenceUpdateCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_GameConnectedFriendChatMsgCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_GameLobbyJoinRequestedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_GameOverlayActivatedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_GameOverlayActivatedCallbackLegacy__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_GameRichPresenceJoinRequestedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_GetTicketForWebApiResponseCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyChatMsgCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyChatUpdateCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyDataUpdateCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyEnterCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyGameCreatedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyInviteCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_MicroTxnAuthorizationResponseCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_PersonaStateChangeCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamInventoryDefinitionUpdateCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamInventoryResultReadyCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamServerConnectFailureCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamServersConnectedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamServersDisconnectedCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_UserAchievementStored__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_UserStatsReceived__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_UserStatsUnloaded__DelegateSignature();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetailWithProperties();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FSteamworksInitializationResponse();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Class USteamGameInstance Function ClearItemDetails
struct Z_Construct_UFunction_USteamGameInstance_ClearItemDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Game Instance" },
		{ "DisplayName", "Clear Inventory Item Details" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_ClearItemDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "ClearItemDetails", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_ClearItemDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_ClearItemDetails_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamGameInstance_ClearItemDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_ClearItemDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execClearItemDetails)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearItemDetails();
	P_NATIVE_END;
}
// End Class USteamGameInstance Function ClearItemDetails

// Begin Class USteamGameInstance Function GetSteamGameInstance
struct Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics
{
	struct SteamGameInstance_eventGetSteamGameInstance_Parms
	{
		USteamGameInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventGetSteamGameInstance_Parms, ReturnValue), Z_Construct_UClass_USteamGameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "GetSteamGameInstance", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::SteamGameInstance_eventGetSteamGameInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::SteamGameInstance_eventGetSteamGameInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execGetSteamGameInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamGameInstance**)Z_Param__Result=USteamGameInstance::GetSteamGameInstance();
	P_NATIVE_END;
}
// End Class USteamGameInstance Function GetSteamGameInstance

// Begin Class USteamGameInstance Function InitializeRelayNetworkAccess
struct Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Game Instance" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "InitializeRelayNetworkAccess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execInitializeRelayNetworkAccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRelayNetworkAccess();
	P_NATIVE_END;
}
// End Class USteamGameInstance Function InitializeRelayNetworkAccess

// Begin Class USteamGameInstance Function InitializeSteamAPI
struct Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics
{
	struct SteamGameInstance_eventInitializeSteamAPI_Parms
	{
		FSteamworksInitializationResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Game Instance" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventInitializeSteamAPI_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamworksInitializationResponse, METADATA_PARAMS(0, nullptr) }; // 4242010095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "InitializeSteamAPI", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::SteamGameInstance_eventInitializeSteamAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::SteamGameInstance_eventInitializeSteamAPI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execInitializeSteamAPI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamworksInitializationResponse*)Z_Param__Result=P_THIS->InitializeSteamAPI();
	P_NATIVE_END;
}
// End Class USteamGameInstance Function InitializeSteamAPI

// Begin Class USteamGameInstance Function UpdateItemDetails
struct Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics
{
	struct SteamGameInstance_eventUpdateItemDetails_Parms
	{
		TArray<FItemDetailWithProperties> Details;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Game Instance" },
		{ "DisplayName", "Update Inventory Item Details" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemDetailWithProperties, METADATA_PARAMS(0, nullptr) }; // 332334729
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventUpdateItemDetails_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 332334729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::NewProp_Details,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "UpdateItemDetails", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::SteamGameInstance_eventUpdateItemDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::SteamGameInstance_eventUpdateItemDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execUpdateItemDetails)
{
	P_GET_TARRAY(FItemDetailWithProperties,Z_Param_Details);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateItemDetails(Z_Param_Details);
	P_NATIVE_END;
}
// End Class USteamGameInstance Function UpdateItemDetails

// Begin Class USteamGameInstance
void USteamGameInstance::StaticRegisterNativesUSteamGameInstance()
{
	UClass* Class = USteamGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearItemDetails", &USteamGameInstance::execClearItemDetails },
		{ "GetSteamGameInstance", &USteamGameInstance::execGetSteamGameInstance },
		{ "InitializeRelayNetworkAccess", &USteamGameInstance::execInitializeRelayNetworkAccess },
		{ "InitializeSteamAPI", &USteamGameInstance::execInitializeSteamAPI },
		{ "UpdateItemDetails", &USteamGameInstance::execUpdateItemDetails },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamGameInstance);
UClass* Z_Construct_UClass_USteamGameInstance_NoRegister()
{
	return USteamGameInstance::StaticClass();
}
struct Z_Construct_UClass_USteamGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameInstance.h" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_callbackFrequency_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataAssets_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Inventory Items" },
		{ "Keywords", "Heathen Toolkit Steamworks Inventory" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamUserStatsReceived_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamUserStatsUnloaded_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamUserStatsStored_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamUserAchievementStored_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamDlcInstalled_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServerConnectFailure_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServersDisconnected_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServersConnected_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamFriendChatMsg_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamFriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamPersonaStateChange_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyJoinRequested_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamGameOverlayActivated_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamGameOverlayActivatedLegacy_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryResultReady_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamMicroTxnAuthorizationResponse_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamFavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamFavoritesListChanged_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyChatMsg_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyChatUpdate_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyDataUpdate_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyEnter_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyGameCreated_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyInvite_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamTicketForWebApiResponse_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks" },
		{ "ModuleRelativePath", "Public/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_callbackFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDataAssets;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamUserStatsReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamUserStatsUnloaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamUserStatsStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamUserAchievementStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamDlcInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServerConnectFailure;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersDisconnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamFriendChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamFriendRichPresenceUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamPersonaStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRichPresenceJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamGameOverlayActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamGameOverlayActivatedLegacy;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryResultReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryDefinitionUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamMicroTxnAuthorizationResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamFavoritesListAccountsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamFavoritesListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyChatUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyDataUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyGameCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyInvite;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamTicketForWebApiResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameInstance_ClearItemDetails, "ClearItemDetails" }, // 1475138499
		{ &Z_Construct_UFunction_USteamGameInstance_GetSteamGameInstance, "GetSteamGameInstance" }, // 2565926024
		{ &Z_Construct_UFunction_USteamGameInstance_InitializeRelayNetworkAccess, "InitializeRelayNetworkAccess" }, // 826129194
		{ &Z_Construct_UFunction_USteamGameInstance_InitializeSteamAPI, "InitializeSteamAPI" }, // 551874096
		{ &Z_Construct_UFunction_USteamGameInstance_UpdateItemDetails, "UpdateItemDetails" }, // 550582841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_callbackFrequency = { "callbackFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, callbackFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_callbackFrequency_MetaData), NewProp_callbackFrequency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ItemDataAssets_Inner = { "ItemDataAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventoryItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ItemDataAssets = { "ItemDataAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, ItemDataAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataAssets_MetaData), NewProp_ItemDataAssets_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserStatsReceived = { "SteamUserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamUserStatsReceived), Z_Construct_UDelegateFunction_ToolkitSteamworks_UserStatsReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamUserStatsReceived_MetaData), NewProp_SteamUserStatsReceived_MetaData) }; // 2838181794
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserStatsUnloaded = { "SteamUserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamUserStatsUnloaded), Z_Construct_UDelegateFunction_ToolkitSteamworks_UserStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamUserStatsUnloaded_MetaData), NewProp_SteamUserStatsUnloaded_MetaData) }; // 4078755273
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserStatsStored = { "SteamUserStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamUserStatsStored), Z_Construct_UDelegateFunction_ToolkitSteamworks_UserStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamUserStatsStored_MetaData), NewProp_SteamUserStatsStored_MetaData) }; // 4078755273
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserAchievementStored = { "SteamUserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamUserAchievementStored), Z_Construct_UDelegateFunction_ToolkitSteamworks_UserAchievementStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamUserAchievementStored_MetaData), NewProp_SteamUserAchievementStored_MetaData) }; // 2872874382
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamDlcInstalled = { "SteamDlcInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamDlcInstalled), Z_Construct_UDelegateFunction_ToolkitSteamworks_DlcInstalledEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamDlcInstalled_MetaData), NewProp_SteamDlcInstalled_MetaData) }; // 2623207828
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamServerConnectFailure = { "SteamServerConnectFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamServerConnectFailure), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamServerConnectFailureCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServerConnectFailure_MetaData), NewProp_SteamServerConnectFailure_MetaData) }; // 745101810
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamServersDisconnected = { "SteamServersDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamServersDisconnected), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamServersDisconnectedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServersDisconnected_MetaData), NewProp_SteamServersDisconnected_MetaData) }; // 3397454630
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamServersConnected = { "SteamServersConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamServersConnected), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamServersConnectedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServersConnected_MetaData), NewProp_SteamServersConnected_MetaData) }; // 3066081891
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFriendChatMsg = { "SteamFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamFriendChatMsg), Z_Construct_UDelegateFunction_ToolkitSteamworks_GameConnectedFriendChatMsgCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamFriendChatMsg_MetaData), NewProp_SteamFriendChatMsg_MetaData) }; // 1666262614
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFriendRichPresenceUpdate = { "SteamFriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamFriendRichPresenceUpdate), Z_Construct_UDelegateFunction_ToolkitSteamworks_FriendRichPresenceUpdateCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamFriendRichPresenceUpdate_MetaData), NewProp_SteamFriendRichPresenceUpdate_MetaData) }; // 2678350918
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamPersonaStateChange = { "SteamPersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamPersonaStateChange), Z_Construct_UDelegateFunction_ToolkitSteamworks_PersonaStateChangeCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamPersonaStateChange_MetaData), NewProp_SteamPersonaStateChange_MetaData) }; // 3437678379
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamRichPresenceJoinRequested = { "SteamRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamRichPresenceJoinRequested), Z_Construct_UDelegateFunction_ToolkitSteamworks_GameRichPresenceJoinRequestedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRichPresenceJoinRequested_MetaData), NewProp_SteamRichPresenceJoinRequested_MetaData) }; // 1588061787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyJoinRequested = { "SteamLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyJoinRequested), Z_Construct_UDelegateFunction_ToolkitSteamworks_GameLobbyJoinRequestedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyJoinRequested_MetaData), NewProp_SteamLobbyJoinRequested_MetaData) }; // 925253802
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamGameOverlayActivated = { "SteamGameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamGameOverlayActivated), Z_Construct_UDelegateFunction_ToolkitSteamworks_GameOverlayActivatedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamGameOverlayActivated_MetaData), NewProp_SteamGameOverlayActivated_MetaData) }; // 189396083
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamGameOverlayActivatedLegacy = { "SteamGameOverlayActivatedLegacy", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamGameOverlayActivatedLegacy), Z_Construct_UDelegateFunction_ToolkitSteamworks_GameOverlayActivatedCallbackLegacy__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamGameOverlayActivatedLegacy_MetaData), NewProp_SteamGameOverlayActivatedLegacy_MetaData) }; // 2625622417
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamInventoryResultReady = { "SteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamInventoryResultReady), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamInventoryResultReadyCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryResultReady_MetaData), NewProp_SteamInventoryResultReady_MetaData) }; // 3280696667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamInventoryDefinitionUpdate = { "SteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamInventoryDefinitionUpdateCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryDefinitionUpdate_MetaData), NewProp_SteamInventoryDefinitionUpdate_MetaData) }; // 1273585479
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamMicroTxnAuthorizationResponse = { "SteamMicroTxnAuthorizationResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamMicroTxnAuthorizationResponse), Z_Construct_UDelegateFunction_ToolkitSteamworks_MicroTxnAuthorizationResponseCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamMicroTxnAuthorizationResponse_MetaData), NewProp_SteamMicroTxnAuthorizationResponse_MetaData) }; // 3857516920
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFavoritesListAccountsUpdated = { "SteamFavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamFavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_ToolkitSteamworks_FavoritesListAccountsUpdatedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamFavoritesListAccountsUpdated_MetaData), NewProp_SteamFavoritesListAccountsUpdated_MetaData) }; // 2295103407
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFavoritesListChanged = { "SteamFavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamFavoritesListChanged), Z_Construct_UDelegateFunction_ToolkitSteamworks_FavoritesListChangedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamFavoritesListChanged_MetaData), NewProp_SteamFavoritesListChanged_MetaData) }; // 79534516
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyChatMsg = { "SteamLobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyChatMsg), Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyChatMsgCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyChatMsg_MetaData), NewProp_SteamLobbyChatMsg_MetaData) }; // 4151619057
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyChatUpdate = { "SteamLobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyChatUpdate), Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyChatUpdateCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyChatUpdate_MetaData), NewProp_SteamLobbyChatUpdate_MetaData) }; // 1025929427
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyDataUpdate = { "SteamLobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyDataUpdate), Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyDataUpdateCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyDataUpdate_MetaData), NewProp_SteamLobbyDataUpdate_MetaData) }; // 3189794802
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyEnter = { "SteamLobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyEnter), Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyEnterCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyEnter_MetaData), NewProp_SteamLobbyEnter_MetaData) }; // 1628392813
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyGameCreated = { "SteamLobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyGameCreated), Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyGameCreatedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyGameCreated_MetaData), NewProp_SteamLobbyGameCreated_MetaData) }; // 4156628594
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyInvite = { "SteamLobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamLobbyInvite), Z_Construct_UDelegateFunction_ToolkitSteamworks_LobbyInviteCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLobbyInvite_MetaData), NewProp_SteamLobbyInvite_MetaData) }; // 2776072204
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamTicketForWebApiResponse = { "SteamTicketForWebApiResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, SteamTicketForWebApiResponse), Z_Construct_UDelegateFunction_ToolkitSteamworks_GetTicketForWebApiResponseCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamTicketForWebApiResponse_MetaData), NewProp_SteamTicketForWebApiResponse_MetaData) }; // 3012366380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_callbackFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ItemDataAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ItemDataAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserStatsReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserStatsUnloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserStatsStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamUserAchievementStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamDlcInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamServerConnectFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamServersDisconnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamServersConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFriendChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFriendRichPresenceUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamPersonaStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamRichPresenceJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamGameOverlayActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamGameOverlayActivatedLegacy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamInventoryResultReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamInventoryDefinitionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamMicroTxnAuthorizationResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFavoritesListAccountsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamFavoritesListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyChatUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyDataUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyGameCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamLobbyInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_SteamTicketForWebApiResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamGameInstance_Statics::ClassParams = {
	&USteamGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamGameInstance()
{
	if (!Z_Registration_Info_UClass_USteamGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamGameInstance.OuterSingleton, Z_Construct_UClass_USteamGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamGameInstance.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<USteamGameInstance>()
{
	return USteamGameInstance::StaticClass();
}
USteamGameInstance::USteamGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamGameInstance);
USteamGameInstance::~USteamGameInstance() {}
// End Class USteamGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamGameInstance, USteamGameInstance::StaticClass, TEXT("USteamGameInstance"), &Z_Registration_Info_UClass_USteamGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamGameInstance), 1087074134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_4036216386(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
