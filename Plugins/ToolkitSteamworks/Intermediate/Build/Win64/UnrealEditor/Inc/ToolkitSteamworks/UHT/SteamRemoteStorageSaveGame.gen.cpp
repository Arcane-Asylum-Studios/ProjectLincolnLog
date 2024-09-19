// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/SteamRemoteStorageSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemoteStorageSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_USteamRemoteStorageSaveGame();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_USteamRemoteStorageSaveGame_NoRegister();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UEResult();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Delegate FSteamFileReadAsyncCallback
struct Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics
{
	struct _Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms
	{
		UEResult result;
		USteamRemoteStorageSaveGame* instance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms, result), Z_Construct_UEnum_ToolkitSteamworks_UEResult, METADATA_PARAMS(0, nullptr) }; // 3704618157
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms, instance), Z_Construct_UClass_USteamRemoteStorageSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::NewProp_result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::NewProp_result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::NewProp_instance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolkitSteamworks, nullptr, "SteamFileReadAsyncCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamFileReadAsyncCallback_DelegateWrapper(const FScriptDelegate& SteamFileReadAsyncCallback, UEResult result, USteamRemoteStorageSaveGame* instance)
{
	struct _Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms
	{
		UEResult result;
		USteamRemoteStorageSaveGame* instance;
	};
	_Script_ToolkitSteamworks_eventSteamFileReadAsyncCallback_Parms Parms;
	Parms.result=result;
	Parms.instance=instance;
	SteamFileReadAsyncCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSteamFileReadAsyncCallback

// Begin Delegate FSteamFileWriteAsyncCallback
struct Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics
{
	struct _Script_ToolkitSteamworks_eventSteamFileWriteAsyncCallback_Parms
	{
		UEResult result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventSteamFileWriteAsyncCallback_Parms, result), Z_Construct_UEnum_ToolkitSteamworks_UEResult, METADATA_PARAMS(0, nullptr) }; // 3704618157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::NewProp_result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::NewProp_result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolkitSteamworks, nullptr, "SteamFileWriteAsyncCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventSteamFileWriteAsyncCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventSteamFileWriteAsyncCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamFileWriteAsyncCallback_DelegateWrapper(const FScriptDelegate& SteamFileWriteAsyncCallback, UEResult result)
{
	struct _Script_ToolkitSteamworks_eventSteamFileWriteAsyncCallback_Parms
	{
		UEResult result;
	};
	_Script_ToolkitSteamworks_eventSteamFileWriteAsyncCallback_Parms Parms;
	Parms.result=result;
	SteamFileWriteAsyncCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSteamFileWriteAsyncCallback

// Begin Class USteamRemoteStorageSaveGame Function SteamFileRead
struct Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics
{
	struct SteamRemoteStorageSaveGame_eventSteamFileRead_Parms
	{
		FString fileName;
		USteamRemoteStorageSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|SteamRemoteStorageSaveGame" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileRead_Parms, fileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileRead_Parms, ReturnValue), Z_Construct_UClass_USteamRemoteStorageSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRemoteStorageSaveGame, nullptr, "SteamFileRead", nullptr, nullptr, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::SteamRemoteStorageSaveGame_eventSteamFileRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::SteamRemoteStorageSaveGame_eventSteamFileRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamRemoteStorageSaveGame::execSteamFileRead)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamRemoteStorageSaveGame**)Z_Param__Result=USteamRemoteStorageSaveGame::SteamFileRead(Z_Param_fileName);
	P_NATIVE_END;
}
// End Class USteamRemoteStorageSaveGame Function SteamFileRead

// Begin Class USteamRemoteStorageSaveGame Function SteamFileReadAsync
struct Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics
{
	struct SteamRemoteStorageSaveGame_eventSteamFileReadAsync_Parms
	{
		FString fileName;
		FScriptDelegate callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|SteamRemoteStorageSaveGame" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileReadAsync_Parms, fileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileReadAsync_Parms, callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileReadAsyncCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4040847666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::NewProp_callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRemoteStorageSaveGame, nullptr, "SteamFileReadAsync", nullptr, nullptr, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::SteamRemoteStorageSaveGame_eventSteamFileReadAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::SteamRemoteStorageSaveGame_eventSteamFileReadAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamRemoteStorageSaveGame::execSteamFileReadAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamRemoteStorageSaveGame::SteamFileReadAsync(Z_Param_fileName,FSteamFileReadAsyncCallback(Z_Param_callback));
	P_NATIVE_END;
}
// End Class USteamRemoteStorageSaveGame Function SteamFileReadAsync

// Begin Class USteamRemoteStorageSaveGame Function SteamFileWrite
struct Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics
{
	struct SteamRemoteStorageSaveGame_eventSteamFileWrite_Parms
	{
		FString fileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|SteamRemoteStorageSaveGame" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileWrite_Parms, fileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamRemoteStorageSaveGame_eventSteamFileWrite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamRemoteStorageSaveGame_eventSteamFileWrite_Parms), &Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRemoteStorageSaveGame, nullptr, "SteamFileWrite", nullptr, nullptr, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::SteamRemoteStorageSaveGame_eventSteamFileWrite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::SteamRemoteStorageSaveGame_eventSteamFileWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamRemoteStorageSaveGame::execSteamFileWrite)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SteamFileWrite(Z_Param_fileName);
	P_NATIVE_END;
}
// End Class USteamRemoteStorageSaveGame Function SteamFileWrite

// Begin Class USteamRemoteStorageSaveGame Function SteamFileWriteAsync
struct Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics
{
	struct SteamRemoteStorageSaveGame_eventSteamFileWriteAsync_Parms
	{
		FString fileName;
		FScriptDelegate callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|SteamRemoteStorageSaveGame" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileWriteAsync_Parms, fileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamRemoteStorageSaveGame_eventSteamFileWriteAsync_Parms, callback), Z_Construct_UDelegateFunction_ToolkitSteamworks_SteamFileWriteAsyncCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3888746470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::NewProp_callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRemoteStorageSaveGame, nullptr, "SteamFileWriteAsync", nullptr, nullptr, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::SteamRemoteStorageSaveGame_eventSteamFileWriteAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::SteamRemoteStorageSaveGame_eventSteamFileWriteAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamRemoteStorageSaveGame::execSteamFileWriteAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SteamFileWriteAsync(Z_Param_fileName,FSteamFileWriteAsyncCallback(Z_Param_callback));
	P_NATIVE_END;
}
// End Class USteamRemoteStorageSaveGame Function SteamFileWriteAsync

// Begin Class USteamRemoteStorageSaveGame
void USteamRemoteStorageSaveGame::StaticRegisterNativesUSteamRemoteStorageSaveGame()
{
	UClass* Class = USteamRemoteStorageSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SteamFileRead", &USteamRemoteStorageSaveGame::execSteamFileRead },
		{ "SteamFileReadAsync", &USteamRemoteStorageSaveGame::execSteamFileReadAsync },
		{ "SteamFileWrite", &USteamRemoteStorageSaveGame::execSteamFileWrite },
		{ "SteamFileWriteAsync", &USteamRemoteStorageSaveGame::execSteamFileWriteAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamRemoteStorageSaveGame);
UClass* Z_Construct_UClass_USteamRemoteStorageSaveGame_NoRegister()
{
	return USteamRemoteStorageSaveGame::StaticClass();
}
struct Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemoteStorageSaveGame.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorageSaveGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileRead, "SteamFileRead" }, // 2886682515
		{ &Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileReadAsync, "SteamFileReadAsync" }, // 344176543
		{ &Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWrite, "SteamFileWrite" }, // 68622070
		{ &Z_Construct_UFunction_USteamRemoteStorageSaveGame_SteamFileWriteAsync, "SteamFileWriteAsync" }, // 2010727034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamRemoteStorageSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics::ClassParams = {
	&USteamRemoteStorageSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamRemoteStorageSaveGame()
{
	if (!Z_Registration_Info_UClass_USteamRemoteStorageSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamRemoteStorageSaveGame.OuterSingleton, Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamRemoteStorageSaveGame.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<USteamRemoteStorageSaveGame>()
{
	return USteamRemoteStorageSaveGame::StaticClass();
}
USteamRemoteStorageSaveGame::USteamRemoteStorageSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamRemoteStorageSaveGame);
USteamRemoteStorageSaveGame::~USteamRemoteStorageSaveGame() {}
// End Class USteamRemoteStorageSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamRemoteStorageSaveGame, USteamRemoteStorageSaveGame::StaticClass, TEXT("USteamRemoteStorageSaveGame"), &Z_Registration_Info_UClass_USteamRemoteStorageSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamRemoteStorageSaveGame), 1992274103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_131706054(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
