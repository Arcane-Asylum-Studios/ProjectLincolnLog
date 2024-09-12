// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CreateLobbyAsyncTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCreateLobbyAsyncTask;
class UObject;
enum class UELobbyType : uint8;
enum class UEResult : uint8;
#ifdef TOOLKITSTEAMWORKS_CreateLobbyAsyncTask_generated_h
#error "CreateLobbyAsyncTask.generated.h already included, missing '#pragma once' in CreateLobbyAsyncTask.h"
#endif
#define TOOLKITSTEAMWORKS_CreateLobbyAsyncTask_generated_h

#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_15_DELEGATE \
TOOLKITSTEAMWORKS_API void FCreateLobbyTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateLobbyTaskDelegate, UEResult Result, int64 LobbyID);


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSteamCreateLobby);


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateLobbyAsyncTask(); \
	friend struct Z_Construct_UClass_UCreateLobbyAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UCreateLobbyAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UCreateLobbyAsyncTask)


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateLobbyAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCreateLobbyAsyncTask(UCreateLobbyAsyncTask&&); \
	UCreateLobbyAsyncTask(const UCreateLobbyAsyncTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateLobbyAsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateLobbyAsyncTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateLobbyAsyncTask) \
	NO_API virtual ~UCreateLobbyAsyncTask();


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_18_PROLOG
#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UCreateLobbyAsyncTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_CreateLobbyAsyncTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
