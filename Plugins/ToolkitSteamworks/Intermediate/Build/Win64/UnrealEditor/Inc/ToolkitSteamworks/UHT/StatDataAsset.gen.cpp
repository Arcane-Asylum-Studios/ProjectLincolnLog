// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/StatDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UStatDataAsset();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UStatDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Class UStatDataAsset Function GetFloatValue
struct Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics
{
	struct StatDataAsset_eventGetFloatValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Get Float Value" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "GetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::StatDataAsset_eventGetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::StatDataAsset_eventGetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_GetFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_GetFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execGetFloatValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatValue();
	P_NATIVE_END;
}
// End Class UStatDataAsset Function GetFloatValue

// Begin Class UStatDataAsset Function GetFloatValueForUser
struct Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics
{
	struct StatDataAsset_eventGetFloatValueForUser_Parms
	{
		int64 user;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Get Float Value for User" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventGetFloatValueForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventGetFloatValueForUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "GetFloatValueForUser", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::StatDataAsset_eventGetFloatValueForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::StatDataAsset_eventGetFloatValueForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execGetFloatValueForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatValueForUser(Z_Param_user);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function GetFloatValueForUser

// Begin Class UStatDataAsset Function GetIntValue
struct Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics
{
	struct StatDataAsset_eventGetIntValue_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Get Int Value" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventGetIntValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "GetIntValue", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::StatDataAsset_eventGetIntValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::StatDataAsset_eventGetIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_GetIntValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_GetIntValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execGetIntValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntValue();
	P_NATIVE_END;
}
// End Class UStatDataAsset Function GetIntValue

// Begin Class UStatDataAsset Function GetIntValueForUser
struct Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics
{
	struct StatDataAsset_eventGetIntValueForUser_Parms
	{
		int64 user;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Get Int Value for User" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventGetIntValueForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventGetIntValueForUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "GetIntValueForUser", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::StatDataAsset_eventGetIntValueForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::StatDataAsset_eventGetIntValueForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execGetIntValueForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntValueForUser(Z_Param_user);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function GetIntValueForUser

// Begin Class UStatDataAsset Function ServerGetFloatValueForUser
struct Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics
{
	struct StatDataAsset_eventServerGetFloatValueForUser_Parms
	{
		int64 user;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Get Float Value for User (Server)" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventServerGetFloatValueForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventServerGetFloatValueForUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "ServerGetFloatValueForUser", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::StatDataAsset_eventServerGetFloatValueForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::StatDataAsset_eventServerGetFloatValueForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execServerGetFloatValueForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ServerGetFloatValueForUser(Z_Param_user);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function ServerGetFloatValueForUser

// Begin Class UStatDataAsset Function ServerGetIntValueForUser
struct Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics
{
	struct StatDataAsset_eventServerGetIntValueForUser_Parms
	{
		int64 user;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Get Int Value for User (Server)" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventServerGetIntValueForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventServerGetIntValueForUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "ServerGetIntValueForUser", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::StatDataAsset_eventServerGetIntValueForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::StatDataAsset_eventServerGetIntValueForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execServerGetIntValueForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ServerGetIntValueForUser(Z_Param_user);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function ServerGetIntValueForUser

// Begin Class UStatDataAsset Function SetFloatValue
struct Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics
{
	struct StatDataAsset_eventSetFloatValue_Parms
	{
		float value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Set Float Value" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventSetFloatValue_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatDataAsset_eventSetFloatValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatDataAsset_eventSetFloatValue_Parms), &Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "SetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::StatDataAsset_eventSetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::StatDataAsset_eventSetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_SetFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_SetFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execSetFloatValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFloatValue(Z_Param_value);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function SetFloatValue

// Begin Class UStatDataAsset Function SetFloatValueForUser
struct Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics
{
	struct StatDataAsset_eventSetFloatValueForUser_Parms
	{
		int64 user;
		float value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Set Float Value for User" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventSetFloatValueForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventSetFloatValueForUser_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatDataAsset_eventSetFloatValueForUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatDataAsset_eventSetFloatValueForUser_Parms), &Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "SetFloatValueForUser", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::StatDataAsset_eventSetFloatValueForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::StatDataAsset_eventSetFloatValueForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execSetFloatValueForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFloatValueForUser(Z_Param_user,Z_Param_value);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function SetFloatValueForUser

// Begin Class UStatDataAsset Function SetIntValue
struct Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics
{
	struct StatDataAsset_eventSetIntValue_Parms
	{
		int32 value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Set Int Value" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventSetIntValue_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatDataAsset_eventSetIntValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatDataAsset_eventSetIntValue_Parms), &Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "SetIntValue", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::StatDataAsset_eventSetIntValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::StatDataAsset_eventSetIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_SetIntValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_SetIntValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execSetIntValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetIntValue(Z_Param_value);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function SetIntValue

// Begin Class UStatDataAsset Function SetIntValueForUser
struct Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics
{
	struct StatDataAsset_eventSetIntValueForUser_Parms
	{
		int64 user;
		int32 value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "Set Int Value for User" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_user;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventSetIntValueForUser_Parms, user), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatDataAsset_eventSetIntValueForUser_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatDataAsset_eventSetIntValueForUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatDataAsset_eventSetIntValueForUser_Parms), &Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_user,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatDataAsset, nullptr, "SetIntValueForUser", nullptr, nullptr, Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::StatDataAsset_eventSetIntValueForUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::StatDataAsset_eventSetIntValueForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatDataAsset::execSetIntValueForUser)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_user);
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetIntValueForUser(Z_Param_user,Z_Param_value);
	P_NATIVE_END;
}
// End Class UStatDataAsset Function SetIntValueForUser

// Begin Class UStatDataAsset
void UStatDataAsset::StaticRegisterNativesUStatDataAsset()
{
	UClass* Class = UStatDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFloatValue", &UStatDataAsset::execGetFloatValue },
		{ "GetFloatValueForUser", &UStatDataAsset::execGetFloatValueForUser },
		{ "GetIntValue", &UStatDataAsset::execGetIntValue },
		{ "GetIntValueForUser", &UStatDataAsset::execGetIntValueForUser },
		{ "ServerGetFloatValueForUser", &UStatDataAsset::execServerGetFloatValueForUser },
		{ "ServerGetIntValueForUser", &UStatDataAsset::execServerGetIntValueForUser },
		{ "SetFloatValue", &UStatDataAsset::execSetFloatValue },
		{ "SetFloatValueForUser", &UStatDataAsset::execSetFloatValueForUser },
		{ "SetIntValue", &UStatDataAsset::execSetIntValue },
		{ "SetIntValueForUser", &UStatDataAsset::execSetIntValueForUser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatDataAsset);
UClass* Z_Construct_UClass_UStatDataAsset_NoRegister()
{
	return UStatDataAsset::StaticClass();
}
struct Z_Construct_UClass_UStatDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatDataAsset.h" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiName_MetaData[] = {
		{ "Category", "Heathen's Toolkit|Steamworks|Stats Data" },
		{ "DisplayName", "API Name" },
		{ "Keywords", "Heathen Toolkit Steamworks Stat Achievement" },
		{ "ModuleRelativePath", "Public/StatDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatDataAsset_GetFloatValue, "GetFloatValue" }, // 1725651352
		{ &Z_Construct_UFunction_UStatDataAsset_GetFloatValueForUser, "GetFloatValueForUser" }, // 1157631458
		{ &Z_Construct_UFunction_UStatDataAsset_GetIntValue, "GetIntValue" }, // 3152279787
		{ &Z_Construct_UFunction_UStatDataAsset_GetIntValueForUser, "GetIntValueForUser" }, // 1542900577
		{ &Z_Construct_UFunction_UStatDataAsset_ServerGetFloatValueForUser, "ServerGetFloatValueForUser" }, // 731721827
		{ &Z_Construct_UFunction_UStatDataAsset_ServerGetIntValueForUser, "ServerGetIntValueForUser" }, // 2510328068
		{ &Z_Construct_UFunction_UStatDataAsset_SetFloatValue, "SetFloatValue" }, // 2431901097
		{ &Z_Construct_UFunction_UStatDataAsset_SetFloatValueForUser, "SetFloatValueForUser" }, // 3607623
		{ &Z_Construct_UFunction_UStatDataAsset_SetIntValue, "SetIntValue" }, // 1247194375
		{ &Z_Construct_UFunction_UStatDataAsset_SetIntValueForUser, "SetIntValueForUser" }, // 3142292013
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatDataAsset_Statics::NewProp_ApiName = { "ApiName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataAsset, ApiName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiName_MetaData), NewProp_ApiName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataAsset_Statics::NewProp_ApiName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatDataAsset_Statics::ClassParams = {
	&UStatDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatDataAsset()
{
	if (!Z_Registration_Info_UClass_UStatDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatDataAsset.OuterSingleton, Z_Construct_UClass_UStatDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatDataAsset.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UStatDataAsset>()
{
	return UStatDataAsset::StaticClass();
}
UStatDataAsset::UStatDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatDataAsset);
UStatDataAsset::~UStatDataAsset() {}
// End Class UStatDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatDataAsset, UStatDataAsset::StaticClass, TEXT("UStatDataAsset"), &Z_Registration_Info_UClass_UStatDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatDataAsset), 4256553047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_328588868(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
