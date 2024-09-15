// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/DownloadableContentDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadableContentDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UDownloadableContentDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UDownloadableContentDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Class UDownloadableContentDataAsset Function GetDisplayName
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics
{
	struct DownloadableContentDataAsset_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Name" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DownloadableContentDataAsset_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::DownloadableContentDataAsset_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::DownloadableContentDataAsset_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetDisplayName

// Begin Class UDownloadableContentDataAsset Function GetDownloadProgress
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics
{
	struct DownloadableContentDataAsset_eventGetDownloadProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Download Progress" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DownloadableContentDataAsset_eventGetDownloadProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetDownloadProgress", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::DownloadableContentDataAsset_eventGetDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::DownloadableContentDataAsset_eventGetDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetDownloadProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDownloadProgress();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetDownloadProgress

// Begin Class UDownloadableContentDataAsset Function GetEarliestPurchaseTime
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics
{
	struct DownloadableContentDataAsset_eventGetEarliestPurchaseTime_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Earliest Purchase Time" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DownloadableContentDataAsset_eventGetEarliestPurchaseTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetEarliestPurchaseTime", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::DownloadableContentDataAsset_eventGetEarliestPurchaseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::DownloadableContentDataAsset_eventGetEarliestPurchaseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetEarliestPurchaseTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetEarliestPurchaseTime();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetEarliestPurchaseTime

// Begin Class UDownloadableContentDataAsset Function GetInstallDirectory
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics
{
	struct DownloadableContentDataAsset_eventGetInstallDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Install Directory" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DownloadableContentDataAsset_eventGetInstallDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetInstallDirectory", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::DownloadableContentDataAsset_eventGetInstallDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::DownloadableContentDataAsset_eventGetInstallDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetInstallDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetInstallDirectory();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetInstallDirectory

// Begin Class UDownloadableContentDataAsset Function GetIsAvailable
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics
{
	struct DownloadableContentDataAsset_eventGetIsAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Is Available" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DownloadableContentDataAsset_eventGetIsAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DownloadableContentDataAsset_eventGetIsAvailable_Parms), &Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetIsAvailable", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::DownloadableContentDataAsset_eventGetIsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::DownloadableContentDataAsset_eventGetIsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetIsAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAvailable();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetIsAvailable

// Begin Class UDownloadableContentDataAsset Function GetIsInstalled
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics
{
	struct DownloadableContentDataAsset_eventGetIsInstalled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Is Installed" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DownloadableContentDataAsset_eventGetIsInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DownloadableContentDataAsset_eventGetIsInstalled_Parms), &Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetIsInstalled", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::DownloadableContentDataAsset_eventGetIsInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::DownloadableContentDataAsset_eventGetIsInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetIsInstalled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsInstalled();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetIsInstalled

// Begin Class UDownloadableContentDataAsset Function GetIsSubscribed
struct Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics
{
	struct DownloadableContentDataAsset_eventGetIsSubscribed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Get Is Subscribed" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DownloadableContentDataAsset_eventGetIsSubscribed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DownloadableContentDataAsset_eventGetIsSubscribed_Parms), &Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "GetIsSubscribed", nullptr, nullptr, Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::DownloadableContentDataAsset_eventGetIsSubscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::DownloadableContentDataAsset_eventGetIsSubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execGetIsSubscribed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsSubscribed();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function GetIsSubscribed

// Begin Class UDownloadableContentDataAsset Function RequestInstall
struct Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Request Install" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "RequestInstall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execRequestInstall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInstall();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function RequestInstall

// Begin Class UDownloadableContentDataAsset Function RequestUninstall
struct Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Request Uninstall" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadableContentDataAsset, nullptr, "RequestUninstall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDownloadableContentDataAsset::execRequestUninstall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestUninstall();
	P_NATIVE_END;
}
// End Class UDownloadableContentDataAsset Function RequestUninstall

// Begin Class UDownloadableContentDataAsset
void UDownloadableContentDataAsset::StaticRegisterNativesUDownloadableContentDataAsset()
{
	UClass* Class = UDownloadableContentDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &UDownloadableContentDataAsset::execGetDisplayName },
		{ "GetDownloadProgress", &UDownloadableContentDataAsset::execGetDownloadProgress },
		{ "GetEarliestPurchaseTime", &UDownloadableContentDataAsset::execGetEarliestPurchaseTime },
		{ "GetInstallDirectory", &UDownloadableContentDataAsset::execGetInstallDirectory },
		{ "GetIsAvailable", &UDownloadableContentDataAsset::execGetIsAvailable },
		{ "GetIsInstalled", &UDownloadableContentDataAsset::execGetIsInstalled },
		{ "GetIsSubscribed", &UDownloadableContentDataAsset::execGetIsSubscribed },
		{ "RequestInstall", &UDownloadableContentDataAsset::execRequestInstall },
		{ "RequestUninstall", &UDownloadableContentDataAsset::execRequestUninstall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDownloadableContentDataAsset);
UClass* Z_Construct_UClass_UDownloadableContentDataAsset_NoRegister()
{
	return UDownloadableContentDataAsset::StaticClass();
}
struct Z_Construct_UClass_UDownloadableContentDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DownloadableContentDataAsset.h" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Downloadable Content Data" },
		{ "DisplayName", "Application ID" },
		{ "Keywords", "Heathen Toolkit Steamworks DLC" },
		{ "ModuleRelativePath", "Public/DownloadableContentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetDisplayName, "GetDisplayName" }, // 1933008003
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetDownloadProgress, "GetDownloadProgress" }, // 649587456
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetEarliestPurchaseTime, "GetEarliestPurchaseTime" }, // 57871933
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetInstallDirectory, "GetInstallDirectory" }, // 2174833255
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsAvailable, "GetIsAvailable" }, // 3823951923
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsInstalled, "GetIsInstalled" }, // 2260878964
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_GetIsSubscribed, "GetIsSubscribed" }, // 3627243242
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_RequestInstall, "RequestInstall" }, // 701710384
		{ &Z_Construct_UFunction_UDownloadableContentDataAsset_RequestUninstall, "RequestUninstall" }, // 1388922376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDownloadableContentDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDownloadableContentDataAsset_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDownloadableContentDataAsset, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDownloadableContentDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadableContentDataAsset_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadableContentDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDownloadableContentDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadableContentDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDownloadableContentDataAsset_Statics::ClassParams = {
	&UDownloadableContentDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDownloadableContentDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadableContentDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadableContentDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDownloadableContentDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDownloadableContentDataAsset()
{
	if (!Z_Registration_Info_UClass_UDownloadableContentDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDownloadableContentDataAsset.OuterSingleton, Z_Construct_UClass_UDownloadableContentDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDownloadableContentDataAsset.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UDownloadableContentDataAsset>()
{
	return UDownloadableContentDataAsset::StaticClass();
}
UDownloadableContentDataAsset::UDownloadableContentDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDownloadableContentDataAsset);
UDownloadableContentDataAsset::~UDownloadableContentDataAsset() {}
// End Class UDownloadableContentDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDownloadableContentDataAsset, UDownloadableContentDataAsset::StaticClass, TEXT("UDownloadableContentDataAsset"), &Z_Registration_Info_UClass_UDownloadableContentDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDownloadableContentDataAsset), 2357239116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_2836754765(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
