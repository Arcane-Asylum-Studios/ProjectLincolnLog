// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorageSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamRemoteStorageSaveGame;
enum class UEResult : uint8;
#ifdef TOOLKITSTEAMWORKS_SteamRemoteStorageSaveGame_generated_h
#error "SteamRemoteStorageSaveGame.generated.h already included, missing '#pragma once' in SteamRemoteStorageSaveGame.h"
#endif
#define TOOLKITSTEAMWORKS_SteamRemoteStorageSaveGame_generated_h

#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_15_DELEGATE \
TOOLKITSTEAMWORKS_API void FSteamFileReadAsyncCallback_DelegateWrapper(const FScriptDelegate& SteamFileReadAsyncCallback, UEResult result, USteamRemoteStorageSaveGame* instance);


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_16_DELEGATE \
TOOLKITSTEAMWORKS_API void FSteamFileWriteAsyncCallback_DelegateWrapper(const FScriptDelegate& SteamFileWriteAsyncCallback, UEResult result);


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSteamFileReadAsync); \
	DECLARE_FUNCTION(execSteamFileRead); \
	DECLARE_FUNCTION(execSteamFileWriteAsync); \
	DECLARE_FUNCTION(execSteamFileWrite);


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamRemoteStorageSaveGame(); \
	friend struct Z_Construct_UClass_USteamRemoteStorageSaveGame_Statics; \
public: \
	DECLARE_CLASS(USteamRemoteStorageSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(USteamRemoteStorageSaveGame)


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamRemoteStorageSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamRemoteStorageSaveGame(USteamRemoteStorageSaveGame&&); \
	USteamRemoteStorageSaveGame(const USteamRemoteStorageSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamRemoteStorageSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRemoteStorageSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRemoteStorageSaveGame) \
	NO_API virtual ~USteamRemoteStorageSaveGame();


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_18_PROLOG
#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class USteamRemoteStorageSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamRemoteStorageSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
