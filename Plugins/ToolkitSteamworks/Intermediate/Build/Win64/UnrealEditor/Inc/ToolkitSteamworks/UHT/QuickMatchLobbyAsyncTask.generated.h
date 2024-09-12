// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuickMatchLobbyAsyncTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UQuickMatchLobbyAsyncTask;
enum class UEChatRoomEnterResponse : uint8;
enum class UEResult : uint8;
#ifdef TOOLKITSTEAMWORKS_QuickMatchLobbyAsyncTask_generated_h
#error "QuickMatchLobbyAsyncTask.generated.h already included, missing '#pragma once' in QuickMatchLobbyAsyncTask.h"
#endif
#define TOOLKITSTEAMWORKS_QuickMatchLobbyAsyncTask_generated_h

#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_15_DELEGATE \
TOOLKITSTEAMWORKS_API void FQuickMatchTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& QuickMatchTaskDelegate, int64 lobbyId, UEResult CreateResult, UEChatRoomEnterResponse EnterResponse);


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSteamQuickMatchLobby);


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuickMatchLobbyAsyncTask(); \
	friend struct Z_Construct_UClass_UQuickMatchLobbyAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UQuickMatchLobbyAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UQuickMatchLobbyAsyncTask)


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickMatchLobbyAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuickMatchLobbyAsyncTask(UQuickMatchLobbyAsyncTask&&); \
	UQuickMatchLobbyAsyncTask(const UQuickMatchLobbyAsyncTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickMatchLobbyAsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickMatchLobbyAsyncTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickMatchLobbyAsyncTask) \
	NO_API virtual ~UQuickMatchLobbyAsyncTask();


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_17_PROLOG
#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UQuickMatchLobbyAsyncTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_QuickMatchLobbyAsyncTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
