// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/CreateLobbyAsyncTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateLobbyAsyncTask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UCreateLobbyAsyncTask();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UCreateLobbyAsyncTask_NoRegister();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UELobbyType();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UEResult();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Delegate FCreateLobbyTaskDelegate
struct Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics
{
	struct _Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms
	{
		UEResult Result;
		int64 LobbyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreateLobbyAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms, Result), Z_Construct_UEnum_ToolkitSteamworks_UEResult, METADATA_PARAMS(0, nullptr) }; // 3704618157
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms, LobbyID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::NewProp_LobbyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolkitSteamworks, nullptr, "CreateLobbyTaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateLobbyTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateLobbyTaskDelegate, UEResult Result, int64 LobbyID)
{
	struct _Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms
	{
		UEResult Result;
		int64 LobbyID;
	};
	_Script_ToolkitSteamworks_eventCreateLobbyTaskDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LobbyID=LobbyID;
	CreateLobbyTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCreateLobbyTaskDelegate

// Begin Class UCreateLobbyAsyncTask Function SteamCreateLobby
struct Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics
{
	struct CreateLobbyAsyncTask_eventSteamCreateLobby_Parms
	{
		UObject* WorldContextObject;
		UELobbyType Type;
		int32 MaxMembers;
		UCreateLobbyAsyncTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Heathen's Toolkit|Steamworks|Matchmaking" },
		{ "DisplayName", "Create Lobby - Task" },
		{ "ModuleRelativePath", "Public/CreateLobbyAsyncTask.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateLobbyAsyncTask_eventSteamCreateLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateLobbyAsyncTask_eventSteamCreateLobby_Parms, Type), Z_Construct_UEnum_ToolkitSteamworks_UELobbyType, METADATA_PARAMS(0, nullptr) }; // 222406512
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateLobbyAsyncTask_eventSteamCreateLobby_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreateLobbyAsyncTask_eventSteamCreateLobby_Parms, ReturnValue), Z_Construct_UClass_UCreateLobbyAsyncTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateLobbyAsyncTask, nullptr, "SteamCreateLobby", nullptr, nullptr, Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::CreateLobbyAsyncTask_eventSteamCreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::CreateLobbyAsyncTask_eventSteamCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCreateLobbyAsyncTask::execSteamCreateLobby)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(UELobbyType,Z_Param_Type);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCreateLobbyAsyncTask**)Z_Param__Result=UCreateLobbyAsyncTask::SteamCreateLobby(Z_Param_WorldContextObject,UELobbyType(Z_Param_Type),Z_Param_MaxMembers);
	P_NATIVE_END;
}
// End Class UCreateLobbyAsyncTask Function SteamCreateLobby

// Begin Class UCreateLobbyAsyncTask
void UCreateLobbyAsyncTask::StaticRegisterNativesUCreateLobbyAsyncTask()
{
	UClass* Class = UCreateLobbyAsyncTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SteamCreateLobby", &UCreateLobbyAsyncTask::execSteamCreateLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateLobbyAsyncTask);
UClass* Z_Construct_UClass_UCreateLobbyAsyncTask_NoRegister()
{
	return UCreateLobbyAsyncTask::StaticClass();
}
struct Z_Construct_UClass_UCreateLobbyAsyncTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CreateLobbyAsyncTask.h" },
		{ "ModuleRelativePath", "Public/CreateLobbyAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreateLobbyAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateLobbyAsyncTask_SteamCreateLobby, "SteamCreateLobby" }, // 2010133601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateLobbyAsyncTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreateLobbyAsyncTask, Completed), Z_Construct_UDelegateFunction_ToolkitSteamworks_CreateLobbyTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 4282295052
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::ClassParams = {
	&UCreateLobbyAsyncTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreateLobbyAsyncTask()
{
	if (!Z_Registration_Info_UClass_UCreateLobbyAsyncTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateLobbyAsyncTask.OuterSingleton, Z_Construct_UClass_UCreateLobbyAsyncTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreateLobbyAsyncTask.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UCreateLobbyAsyncTask>()
{
	return UCreateLobbyAsyncTask::StaticClass();
}
UCreateLobbyAsyncTask::UCreateLobbyAsyncTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateLobbyAsyncTask);
UCreateLobbyAsyncTask::~UCreateLobbyAsyncTask() {}
// End Class UCreateLobbyAsyncTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCreateLobbyAsyncTask, UCreateLobbyAsyncTask::StaticClass, TEXT("UCreateLobbyAsyncTask"), &Z_Registration_Info_UClass_UCreateLobbyAsyncTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateLobbyAsyncTask), 1610599106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_4220489733(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
