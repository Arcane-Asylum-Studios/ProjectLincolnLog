// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/LeaderboardDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_ULeaderboardDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_ULeaderboardDataAsset_NoRegister();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UELeaderboardDataRequest();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_LeaderboardEntriesDownloaded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Class ULeaderboardDataAsset Function GetDisplayName
struct Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics
{
	struct LeaderboardDataAsset_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "Get Name" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardDataAsset, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::LeaderboardDataAsset_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::LeaderboardDataAsset_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardDataAsset::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class ULeaderboardDataAsset Function GetDisplayName

// Begin Class ULeaderboardDataAsset Function GetEntries
struct Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics
{
	struct LeaderboardDataAsset_eventGetEntries_Parms
	{
		UELeaderboardDataRequest requestType;
		int32 start;
		int32 end;
		int32 detailCount;
		FScriptDelegate callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "Get Entries" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_requestType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_requestType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_start;
	static const UECodeGen_Private::FIntPropertyParams NewProp_end;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_requestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_requestType = { "requestType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntries_Parms, requestType), Z_Construct_UEnum_ToolkitSteamworks_UELeaderboardDataRequest, METADATA_PARAMS(0, nullptr) }; // 757122581
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntries_Parms, start), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntries_Parms, end), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_detailCount = { "detailCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntries_Parms, detailCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntries_Parms, callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_LeaderboardEntriesDownloaded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2343712724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_requestType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_requestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_end,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_detailCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::NewProp_callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardDataAsset, nullptr, "GetEntries", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::LeaderboardDataAsset_eventGetEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::LeaderboardDataAsset_eventGetEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardDataAsset::execGetEntries)
{
	P_GET_ENUM(UELeaderboardDataRequest,Z_Param_requestType);
	P_GET_PROPERTY(FIntProperty,Z_Param_start);
	P_GET_PROPERTY(FIntProperty,Z_Param_end);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailCount);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEntries(UELeaderboardDataRequest(Z_Param_requestType),Z_Param_start,Z_Param_end,Z_Param_detailCount,FLeaderboardEntriesDownloaded(Z_Param_callback));
	P_NATIVE_END;
}
// End Class ULeaderboardDataAsset Function GetEntries

// Begin Class ULeaderboardDataAsset Function GetEntriesForUsers
struct Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics
{
	struct LeaderboardDataAsset_eventGetEntriesForUsers_Parms
	{
		TArray<int64> users;
		int32 detailCount;
		FScriptDelegate callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "Get Entries for Users" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_users_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_users;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_users_Inner = { "users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_users = { "users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntriesForUsers_Parms, users), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_detailCount = { "detailCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntriesForUsers_Parms, detailCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntriesForUsers_Parms, callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_LeaderboardEntriesDownloaded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2343712724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_users_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_detailCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::NewProp_callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardDataAsset, nullptr, "GetEntriesForUsers", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::LeaderboardDataAsset_eventGetEntriesForUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::LeaderboardDataAsset_eventGetEntriesForUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardDataAsset::execGetEntriesForUsers)
{
	P_GET_TARRAY(int64,Z_Param_users);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailCount);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEntriesForUsers(Z_Param_users,Z_Param_detailCount,FLeaderboardEntriesDownloaded(Z_Param_callback));
	P_NATIVE_END;
}
// End Class ULeaderboardDataAsset Function GetEntriesForUsers

// Begin Class ULeaderboardDataAsset Function GetEntryCount
struct Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics
{
	struct LeaderboardDataAsset_eventGetEntryCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "Get Entry Count" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetEntryCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardDataAsset, nullptr, "GetEntryCount", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::LeaderboardDataAsset_eventGetEntryCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::LeaderboardDataAsset_eventGetEntryCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardDataAsset::execGetEntryCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetEntryCount();
	P_NATIVE_END;
}
// End Class ULeaderboardDataAsset Function GetEntryCount

// Begin Class ULeaderboardDataAsset Function GetUserEntry
struct Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics
{
	struct LeaderboardDataAsset_eventGetUserEntry_Parms
	{
		int32 detailCount;
		FScriptDelegate callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "Get User Entry" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::NewProp_detailCount = { "detailCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetUserEntry_Parms, detailCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardDataAsset_eventGetUserEntry_Parms, callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_LeaderboardEntriesDownloaded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2343712724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::NewProp_detailCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::NewProp_callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardDataAsset, nullptr, "GetUserEntry", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::LeaderboardDataAsset_eventGetUserEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::LeaderboardDataAsset_eventGetUserEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardDataAsset::execGetUserEntry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_detailCount);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntry(Z_Param_detailCount,FLeaderboardEntriesDownloaded(Z_Param_callback));
	P_NATIVE_END;
}
// End Class ULeaderboardDataAsset Function GetUserEntry

// Begin Class ULeaderboardDataAsset
void ULeaderboardDataAsset::StaticRegisterNativesULeaderboardDataAsset()
{
	UClass* Class = ULeaderboardDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &ULeaderboardDataAsset::execGetDisplayName },
		{ "GetEntries", &ULeaderboardDataAsset::execGetEntries },
		{ "GetEntriesForUsers", &ULeaderboardDataAsset::execGetEntriesForUsers },
		{ "GetEntryCount", &ULeaderboardDataAsset::execGetEntryCount },
		{ "GetUserEntry", &ULeaderboardDataAsset::execGetUserEntry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardDataAsset);
UClass* Z_Construct_UClass_ULeaderboardDataAsset_NoRegister()
{
	return ULeaderboardDataAsset::StaticClass();
}
struct Z_Construct_UClass_ULeaderboardDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeaderboardDataAsset.h" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiName_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "API Name" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Leaderboard Data" },
		{ "DisplayName", "ID" },
		{ "Keywords", "Heathen Toolkit Steamworks Leaderboard" },
		{ "ModuleRelativePath", "Public/LeaderboardDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardDataAsset_GetDisplayName, "GetDisplayName" }, // 2347131563
		{ &Z_Construct_UFunction_ULeaderboardDataAsset_GetEntries, "GetEntries" }, // 933420617
		{ &Z_Construct_UFunction_ULeaderboardDataAsset_GetEntriesForUsers, "GetEntriesForUsers" }, // 2584390703
		{ &Z_Construct_UFunction_ULeaderboardDataAsset_GetEntryCount, "GetEntryCount" }, // 981171485
		{ &Z_Construct_UFunction_ULeaderboardDataAsset_GetUserEntry, "GetUserEntry" }, // 3989328670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULeaderboardDataAsset_Statics::NewProp_ApiName = { "ApiName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeaderboardDataAsset, ApiName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiName_MetaData), NewProp_ApiName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ULeaderboardDataAsset_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULeaderboardDataAsset, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardDataAsset_Statics::NewProp_ApiName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardDataAsset_Statics::NewProp_LeaderboardId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULeaderboardDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardDataAsset_Statics::ClassParams = {
	&ULeaderboardDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULeaderboardDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeaderboardDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeaderboardDataAsset()
{
	if (!Z_Registration_Info_UClass_ULeaderboardDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardDataAsset.OuterSingleton, Z_Construct_UClass_ULeaderboardDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeaderboardDataAsset.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<ULeaderboardDataAsset>()
{
	return ULeaderboardDataAsset::StaticClass();
}
ULeaderboardDataAsset::ULeaderboardDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardDataAsset);
ULeaderboardDataAsset::~ULeaderboardDataAsset() {}
// End Class ULeaderboardDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardDataAsset, ULeaderboardDataAsset::StaticClass, TEXT("ULeaderboardDataAsset"), &Z_Registration_Info_UClass_ULeaderboardDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardDataAsset), 1297263573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_367730779(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
