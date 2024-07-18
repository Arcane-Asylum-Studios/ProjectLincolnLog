// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnterLobbyAsyncTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnterLobbyAsyncTask;
class UObject;
enum class UEChatRoomEnterResponse : uint8;
#ifdef TOOLKITSTEAMWORKS_EnterLobbyAsyncTask_generated_h
#error "EnterLobbyAsyncTask.generated.h already included, missing '#pragma once' in EnterLobbyAsyncTask.h"
#endif
#define TOOLKITSTEAMWORKS_EnterLobbyAsyncTask_generated_h

#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_15_DELEGATE \
TOOLKITSTEAMWORKS_API void FEnterLobbyTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& EnterLobbyTaskDelegate, int64 lobbyId, bool blocked, UEChatRoomEnterResponse response);


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSteamEnterLobbyHex); \
	DECLARE_FUNCTION(execSteamEnterLobby);


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnterLobbyAsyncTask(); \
	friend struct Z_Construct_UClass_UEnterLobbyAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UEnterLobbyAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UEnterLobbyAsyncTask)


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnterLobbyAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnterLobbyAsyncTask(UEnterLobbyAsyncTask&&); \
	UEnterLobbyAsyncTask(const UEnterLobbyAsyncTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnterLobbyAsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnterLobbyAsyncTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnterLobbyAsyncTask) \
	NO_API virtual ~UEnterLobbyAsyncTask();


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_17_PROLOG
#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_INCLASS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UEnterLobbyAsyncTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_EnterLobbyAsyncTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
