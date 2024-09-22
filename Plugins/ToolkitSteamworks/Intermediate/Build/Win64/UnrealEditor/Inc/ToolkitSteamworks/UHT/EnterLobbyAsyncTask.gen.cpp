// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolkitSteamworks/Public/EnterLobbyAsyncTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnterLobbyAsyncTask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UEnterLobbyAsyncTask();
TOOLKITSTEAMWORKS_API UClass* Z_Construct_UClass_UEnterLobbyAsyncTask_NoRegister();
TOOLKITSTEAMWORKS_API UEnum* Z_Construct_UEnum_ToolkitSteamworks_UEChatRoomEnterResponse();
TOOLKITSTEAMWORKS_API UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ToolkitSteamworks();
// End Cross Module References

// Begin Delegate FEnterLobbyTaskDelegate
struct Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics
{
	struct _Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms
	{
		int64 lobbyId;
		bool blocked;
		UEChatRoomEnterResponse response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnterLobbyAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_lobbyId;
	static void NewProp_blocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_blocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_response_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_lobbyId = { "lobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms, lobbyId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_blocked_SetBit(void* Obj)
{
	((_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms*)Obj)->blocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_blocked = { "blocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms), &Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_blocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_response_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms, response), Z_Construct_UEnum_ToolkitSteamworks_UEChatRoomEnterResponse, METADATA_PARAMS(0, nullptr) }; // 3514202894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_lobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_blocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_response_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::NewProp_response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolkitSteamworks, nullptr, "EnterLobbyTaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEnterLobbyTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& EnterLobbyTaskDelegate, int64 lobbyId, bool blocked, UEChatRoomEnterResponse response)
{
	struct _Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms
	{
		int64 lobbyId;
		bool blocked;
		UEChatRoomEnterResponse response;
	};
	_Script_ToolkitSteamworks_eventEnterLobbyTaskDelegate_Parms Parms;
	Parms.lobbyId=lobbyId;
	Parms.blocked=blocked ? true : false;
	Parms.response=response;
	EnterLobbyTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEnterLobbyTaskDelegate

// Begin Class UEnterLobbyAsyncTask Function SteamEnterLobby
struct Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics
{
	struct EnterLobbyAsyncTask_eventSteamEnterLobby_Parms
	{
		UObject* WorldContextObject;
		int64 LobbyId;
		UEnterLobbyAsyncTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Heathen's Toolkit|Steamworks|Matchmaking" },
		{ "DisplayName", "Join Lobby - Steam ID Task" },
		{ "ModuleRelativePath", "Public/EnterLobbyAsyncTask.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnterLobbyAsyncTask_eventSteamEnterLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnterLobbyAsyncTask_eventSteamEnterLobby_Parms, LobbyId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnterLobbyAsyncTask_eventSteamEnterLobby_Parms, ReturnValue), Z_Construct_UClass_UEnterLobbyAsyncTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterLobbyAsyncTask, nullptr, "SteamEnterLobby", nullptr, nullptr, Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::EnterLobbyAsyncTask_eventSteamEnterLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::EnterLobbyAsyncTask_eventSteamEnterLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnterLobbyAsyncTask::execSteamEnterLobby)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnterLobbyAsyncTask**)Z_Param__Result=UEnterLobbyAsyncTask::SteamEnterLobby(Z_Param_WorldContextObject,Z_Param_LobbyId);
	P_NATIVE_END;
}
// End Class UEnterLobbyAsyncTask Function SteamEnterLobby

// Begin Class UEnterLobbyAsyncTask Function SteamEnterLobbyHex
struct Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics
{
	struct EnterLobbyAsyncTask_eventSteamEnterLobbyHex_Parms
	{
		UObject* WorldContextObject;
		FString Hex;
		UEnterLobbyAsyncTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Heathen's Toolkit|Steamworks|Matchmaking" },
		{ "DisplayName", "Join Lobby - Hex ID Task" },
		{ "ModuleRelativePath", "Public/EnterLobbyAsyncTask.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnterLobbyAsyncTask_eventSteamEnterLobbyHex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::NewProp_Hex = { "Hex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnterLobbyAsyncTask_eventSteamEnterLobbyHex_Parms, Hex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnterLobbyAsyncTask_eventSteamEnterLobbyHex_Parms, ReturnValue), Z_Construct_UClass_UEnterLobbyAsyncTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::NewProp_Hex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterLobbyAsyncTask, nullptr, "SteamEnterLobbyHex", nullptr, nullptr, Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::EnterLobbyAsyncTask_eventSteamEnterLobbyHex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::EnterLobbyAsyncTask_eventSteamEnterLobbyHex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnterLobbyAsyncTask::execSteamEnterLobbyHex)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Hex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnterLobbyAsyncTask**)Z_Param__Result=UEnterLobbyAsyncTask::SteamEnterLobbyHex(Z_Param_WorldContextObject,Z_Param_Hex);
	P_NATIVE_END;
}
// End Class UEnterLobbyAsyncTask Function SteamEnterLobbyHex

// Begin Class UEnterLobbyAsyncTask
void UEnterLobbyAsyncTask::StaticRegisterNativesUEnterLobbyAsyncTask()
{
	UClass* Class = UEnterLobbyAsyncTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SteamEnterLobby", &UEnterLobbyAsyncTask::execSteamEnterLobby },
		{ "SteamEnterLobbyHex", &UEnterLobbyAsyncTask::execSteamEnterLobbyHex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnterLobbyAsyncTask);
UClass* Z_Construct_UClass_UEnterLobbyAsyncTask_NoRegister()
{
	return UEnterLobbyAsyncTask::StaticClass();
}
struct Z_Construct_UClass_UEnterLobbyAsyncTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnterLobbyAsyncTask.h" },
		{ "ModuleRelativePath", "Public/EnterLobbyAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnterLobbyAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobby, "SteamEnterLobby" }, // 3543608469
		{ &Z_Construct_UFunction_UEnterLobbyAsyncTask_SteamEnterLobbyHex, "SteamEnterLobbyHex" }, // 656258877
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnterLobbyAsyncTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnterLobbyAsyncTask, Completed), Z_Construct_UDelegateFunction_ToolkitSteamworks_EnterLobbyTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 2536727084
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolkitSteamworks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::ClassParams = {
	&UEnterLobbyAsyncTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnterLobbyAsyncTask()
{
	if (!Z_Registration_Info_UClass_UEnterLobbyAsyncTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnterLobbyAsyncTask.OuterSingleton, Z_Construct_UClass_UEnterLobbyAsyncTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnterLobbyAsyncTask.OuterSingleton;
}
template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<UEnterLobbyAsyncTask>()
{
	return UEnterLobbyAsyncTask::StaticClass();
}
UEnterLobbyAsyncTask::UEnterLobbyAsyncTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnterLobbyAsyncTask);
UEnterLobbyAsyncTask::~UEnterLobbyAsyncTask() {}
// End Class UEnterLobbyAsyncTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnterLobbyAsyncTask, UEnterLobbyAsyncTask::StaticClass, TEXT("UEnterLobbyAsyncTask"), &Z_Registration_Info_UClass_UEnterLobbyAsyncTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnterLobbyAsyncTask), 838009444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_456120549(TEXT("/Script/ToolkitSteamworks"),
	Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
