// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/AchievementDataAsset.h"
#include "ToolkitSteamworks/Public/HeathenTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UAchievementDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UAchievementDataAsset_NoRegister();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_IconLoadCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementStatus();
TOOLKITSTEAMWORKS_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStatus();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Class UAchievementDataAsset Function GetDescription
struct Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics
{
	struct AchievementDataAsset_eventGetDescription_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Description" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::AchievementDataAsset_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::AchievementDataAsset_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDescription();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetDescription

// Begin Class UAchievementDataAsset Function GetDisplayName
struct Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics
{
	struct AchievementDataAsset_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Name" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::AchievementDataAsset_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::AchievementDataAsset_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetDisplayName

// Begin Class UAchievementDataAsset Function GetGlobalPercent
struct Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics
{
	struct AchievementDataAsset_eventGetGlobalPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Global Percent" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetGlobalPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetGlobalPercent", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::AchievementDataAsset_eventGetGlobalPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::AchievementDataAsset_eventGetGlobalPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetGlobalPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGlobalPercent();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetGlobalPercent

// Begin Class UAchievementDataAsset Function GetIcon
struct Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics
{
	struct AchievementDataAsset_eventGetIcon_Parms
	{
		FScriptDelegate callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Icon" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetIcon_Parms, callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_IconLoadCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 587368268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::NewProp_callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::AchievementDataAsset_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::AchievementDataAsset_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetIcon)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetIcon(FIconLoadCallback(Z_Param_callback));
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetIcon

// Begin Class UAchievementDataAsset Function GetIsAchieved
struct Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics
{
	struct AchievementDataAsset_eventGetIsAchieved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Is Achieved" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AchievementDataAsset_eventGetIsAchieved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementDataAsset_eventGetIsAchieved_Parms), &Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetIsAchieved", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::AchievementDataAsset_eventGetIsAchieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::AchievementDataAsset_eventGetIsAchieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetIsAchieved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAchieved();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetIsAchieved

// Begin Class UAchievementDataAsset Function GetIsHidden
struct Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics
{
	struct AchievementDataAsset_eventGetIsHidden_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Is Hidden" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AchievementDataAsset_eventGetIsHidden_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementDataAsset_eventGetIsHidden_Parms), &Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetIsHidden", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::AchievementDataAsset_eventGetIsHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::AchievementDataAsset_eventGetIsHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetIsHidden)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsHidden();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetIsHidden

// Begin Class UAchievementDataAsset Function GetStatus
struct Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics
{
	struct AchievementDataAsset_eventGetStatus_Parms
	{
		FAchievementStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Status" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FAchievementStatus, METADATA_PARAMS(0, nullptr) }; // 3550557124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::AchievementDataAsset_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::AchievementDataAsset_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAchievementStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetStatus

// Begin Class UAchievementDataAsset Function GetStatusForUser
struct Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics
{
	struct AchievementDataAsset_eventGetStatusForUser_Parms
	{
		int64 user;
		FUserAchievementStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Status for User" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetStatusForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetStatusForUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FUserAchievementStatus, METADATA_PARAMS(0, nullptr) }; // 4188508693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetStatusForUser", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::AchievementDataAsset_eventGetStatusForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::AchievementDataAsset_eventGetStatusForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetStatusForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUserAchievementStatus*)Z_Param__Result=P_THIS->GetStatusForUser(Z_Param_user);
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetStatusForUser

// Begin Class UAchievementDataAsset Function GetUnlockTime
struct Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics
{
	struct AchievementDataAsset_eventGetUnlockTime_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Get Unlock Time" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementDataAsset_eventGetUnlockTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "GetUnlockTime", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::AchievementDataAsset_eventGetUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::AchievementDataAsset_eventGetUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execGetUnlockTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetUnlockTime();
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function GetUnlockTime

// Begin Class UAchievementDataAsset Function SetIsAchieved
struct Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics
{
	struct AchievementDataAsset_eventSetIsAchieved_Parms
	{
		bool bNewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "Set Is Achieved" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((AchievementDataAsset_eventSetIsAchieved_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementDataAsset_eventSetIsAchieved_Parms), &Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AchievementDataAsset_eventSetIsAchieved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementDataAsset_eventSetIsAchieved_Parms), &Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_bNewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementDataAsset, nullptr, "SetIsAchieved", nullptr, nullptr, Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::AchievementDataAsset_eventSetIsAchieved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::AchievementDataAsset_eventSetIsAchieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementDataAsset::execSetIsAchieved)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetIsAchieved(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UAchievementDataAsset Function SetIsAchieved

// Begin Class UAchievementDataAsset
void UAchievementDataAsset::StaticRegisterNativesUAchievementDataAsset()
{
	UClass* Class = UAchievementDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDescription", &UAchievementDataAsset::execGetDescription },
		{ "GetDisplayName", &UAchievementDataAsset::execGetDisplayName },
		{ "GetGlobalPercent", &UAchievementDataAsset::execGetGlobalPercent },
		{ "GetIcon", &UAchievementDataAsset::execGetIcon },
		{ "GetIsAchieved", &UAchievementDataAsset::execGetIsAchieved },
		{ "GetIsHidden", &UAchievementDataAsset::execGetIsHidden },
		{ "GetStatus", &UAchievementDataAsset::execGetStatus },
		{ "GetStatusForUser", &UAchievementDataAsset::execGetStatusForUser },
		{ "GetUnlockTime", &UAchievementDataAsset::execGetUnlockTime },
		{ "SetIsAchieved", &UAchievementDataAsset::execSetIsAchieved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAchievementDataAsset);
UClass* Z_Construct_UClass_UAchievementDataAsset_NoRegister()
{
	return UAchievementDataAsset::StaticClass();
}
struct Z_Construct_UClass_UAchievementDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementDataAsset.h" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiName_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Achievement Data" },
		{ "DisplayName", "API Name" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/AchievementDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetDescription, "GetDescription" }, // 391905791
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetDisplayName, "GetDisplayName" }, // 3525801373
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetGlobalPercent, "GetGlobalPercent" }, // 87384320
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetIcon, "GetIcon" }, // 2254530735
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetIsAchieved, "GetIsAchieved" }, // 117869710
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetIsHidden, "GetIsHidden" }, // 3163817959
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetStatus, "GetStatus" }, // 3520351974
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetStatusForUser, "GetStatusForUser" }, // 351882013
		{ &Z_Construct_UFunction_UAchievementDataAsset_GetUnlockTime, "GetUnlockTime" }, // 803415492
		{ &Z_Construct_UFunction_UAchievementDataAsset_SetIsAchieved, "SetIsAchieved" }, // 375083719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAchievementDataAsset_Statics::NewProp_ApiName = { "ApiName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAchievementDataAsset, ApiName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiName_MetaData), NewProp_ApiName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementDataAsset_Statics::NewProp_ApiName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAchievementDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAchievementDataAsset_Statics::ClassParams = {
	&UAchievementDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAchievementDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAchievementDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAchievementDataAsset()
{
	if (!Z_Registration_Info_UClass_UAchievementDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAchievementDataAsset.OuterSingleton, Z_Construct_UClass_UAchievementDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAchievementDataAsset.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UAchievementDataAsset>()
{
	return UAchievementDataAsset::StaticClass();
}
UAchievementDataAsset::UAchievementDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementDataAsset);
UAchievementDataAsset::~UAchievementDataAsset() {}
// End Class UAchievementDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAchievementDataAsset, UAchievementDataAsset::StaticClass, TEXT("UAchievementDataAsset"), &Z_Registration_Info_UClass_UAchievementDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAchievementDataAsset), 2811663800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_3517966376(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
