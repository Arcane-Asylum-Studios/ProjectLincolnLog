// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeaderboardDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UELeaderboardDataRequest : uint8;
#ifdef TOOLKITSTEAMWORKS_LeaderboardDataAsset_generated_h
#error "LeaderboardDataAsset.generated.h already included, missing '#pragma once' in LeaderboardDataAsset.h"
#endif
#define TOOLKITSTEAMWORKS_LeaderboardDataAsset_generated_h

#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEntriesForUsers); \
	DECLARE_FUNCTION(execGetEntries); \
	DECLARE_FUNCTION(execGetUserEntry); \
	DECLARE_FUNCTION(execGetEntryCount); \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeaderboardDataAsset(); \
	friend struct Z_Construct_UClass_ULeaderboardDataAsset_Statics; \
public: \
	DECLARE_CLASS(ULeaderboardDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(ULeaderboardDataAsset)


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeaderboardDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULeaderboardDataAsset(ULeaderboardDataAsset&&); \
	ULeaderboardDataAsset(const ULeaderboardDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeaderboardDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardDataAsset) \
	NO_API virtual ~ULeaderboardDataAsset();


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_14_PROLOG
#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class ULeaderboardDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_LeaderboardDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
