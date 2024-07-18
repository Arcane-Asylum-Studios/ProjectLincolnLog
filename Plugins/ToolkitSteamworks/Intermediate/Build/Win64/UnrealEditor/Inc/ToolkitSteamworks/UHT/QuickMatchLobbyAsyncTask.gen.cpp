// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/QuickMatchLobbyAsyncTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickMatchLobbyAsyncTask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UQuickMatchLobbyAsyncTask();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UQuickMatchLobbyAsyncTask_NoRegister();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UEChatRoomEnterResponse();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UEResult();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Delegate FQuickMatchTaskDelegate
struct Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics
{
	struct _Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms
	{
		int64 lobbyId;
		UEResult CreateResult;
		UEChatRoomEnterResponse EnterResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuickMatchLobbyAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_lobbyId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CreateResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CreateResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnterResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_lobbyId = { "lobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms, lobbyId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_CreateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_CreateResult = { "CreateResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms, CreateResult), Z_Construct_UEnum_ToolkitSteamworks_UEResult, METADATA_PARAMS(0, nullptr) }; // 3704618157
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_EnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_EnterResponse = { "EnterResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms, EnterResponse), Z_Construct_UEnum_ToolkitSteamworks_UEChatRoomEnterResponse, METADATA_PARAMS(0, nullptr) }; // 3514202894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_lobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_CreateResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_CreateResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_EnterResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::NewProp_EnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolkitSteamworks, nullptr, "QuickMatchTaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FQuickMatchTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuickMatchTaskDelegate, int64 lobbyId, UEResult CreateResult, UEChatRoomEnterResponse EnterResponse)
{
	struct _Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms
	{
		int64 lobbyId;
		UEResult CreateResult;
		UEChatRoomEnterResponse EnterResponse;
	};
	_Script_ToolkitSteamworks_eventQuickMatchTaskDelegate_Parms Parms;
	Parms.lobbyId=lobbyId;
	Parms.CreateResult=CreateResult;
	Parms.EnterResponse=EnterResponse;
	QuickMatchTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FQuickMatchTaskDelegate

// Begin Class UQuickMatchLobbyAsyncTask Function SteamQuickMatchLobby
struct Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics
{
	struct QuickMatchLobbyAsyncTask_eventSteamQuickMatchLobby_Parms
	{
		UObject* WorldContextObject;
		UQuickMatchLobbyAsyncTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Heathen's Toolkit|Steamworks|Matchmaking" },
		{ "DisplayName", "Quick Match - Task" },
		{ "ModuleRelativePath", "Public/QuickMatchLobbyAsyncTask.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuickMatchLobbyAsyncTask_eventSteamQuickMatchLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuickMatchLobbyAsyncTask_eventSteamQuickMatchLobby_Parms, ReturnValue), Z_Construct_UClass_UQuickMatchLobbyAsyncTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickMatchLobbyAsyncTask, nullptr, "SteamQuickMatchLobby", nullptr, nullptr, Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::QuickMatchLobbyAsyncTask_eventSteamQuickMatchLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::QuickMatchLobbyAsyncTask_eventSteamQuickMatchLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickMatchLobbyAsyncTask::execSteamQuickMatchLobby)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuickMatchLobbyAsyncTask**)Z_Param__Result=UQuickMatchLobbyAsyncTask::SteamQuickMatchLobby(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UQuickMatchLobbyAsyncTask Function SteamQuickMatchLobby

// Begin Class UQuickMatchLobbyAsyncTask
void UQuickMatchLobbyAsyncTask::StaticRegisterNativesUQuickMatchLobbyAsyncTask()
{
	UClass* Class = UQuickMatchLobbyAsyncTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SteamQuickMatchLobby", &UQuickMatchLobbyAsyncTask::execSteamQuickMatchLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickMatchLobbyAsyncTask);
UClass* Z_Construct_UClass_UQuickMatchLobbyAsyncTask_NoRegister()
{
	return UQuickMatchLobbyAsyncTask::StaticClass();
}
struct Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "QuickMatchLobbyAsyncTask.h" },
		{ "ModuleRelativePath", "Public/QuickMatchLobbyAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedNew_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuickMatchLobbyAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinedExisting_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuickMatchLobbyAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuickMatchLobbyAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreatedNew;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinedExisting;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickMatchLobbyAsyncTask_SteamQuickMatchLobby, "SteamQuickMatchLobby" }, // 1500207839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickMatchLobbyAsyncTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::NewProp_CreatedNew = { "CreatedNew", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickMatchLobbyAsyncTask, CreatedNew), Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedNew_MetaData), NewProp_CreatedNew_MetaData) }; // 928227281
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::NewProp_JoinedExisting = { "JoinedExisting", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickMatchLobbyAsyncTask, JoinedExisting), Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinedExisting_MetaData), NewProp_JoinedExisting_MetaData) }; // 928227281
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickMatchLobbyAsyncTask, Failed), Z_Construct_UDelegateFunction_ToolkitSteamworks_QuickMatchTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failed_MetaData), NewProp_Failed_MetaData) }; // 928227281
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::NewProp_CreatedNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::NewProp_JoinedExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::NewProp_Failed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::ClassParams = {
	&UQuickMatchLobbyAsyncTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuickMatchLobbyAsyncTask()
{
	if (!Z_Registration_Info_UClass_UQuickMatchLobbyAsyncTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickMatchLobbyAsyncTask.OuterSingleton, Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuickMatchLobbyAsyncTask.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UQuickMatchLobbyAsyncTask>()
{
	return UQuickMatchLobbyAsyncTask::StaticClass();
}
UQuickMatchLobbyAsyncTask::UQuickMatchLobbyAsyncTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickMatchLobbyAsyncTask);
UQuickMatchLobbyAsyncTask::~UQuickMatchLobbyAsyncTask() {}
// End Class UQuickMatchLobbyAsyncTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuickMatchLobbyAsyncTask, UQuickMatchLobbyAsyncTask::StaticClass, TEXT("UQuickMatchLobbyAsyncTask"), &Z_Registration_Info_UClass_UQuickMatchLobbyAsyncTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickMatchLobbyAsyncTask), 2222832950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_176602731(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
