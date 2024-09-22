// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AchievementDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAchievementStatus;
struct FDateTime;
struct FUserAchievementStatus;
#ifdef TOOLKITSTEAMWORKS_AchievementDataAsset_generated_h
#error "AchievementDataAsset.generated.h already included, missing '#pragma once' in AchievementDataAsset.h"
#endif
#define TOOLKITSTEAMWORKS_AchievementDataAsset_generated_h

#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetStatusForUser); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetGlobalPercent); \
	DECLARE_FUNCTION(execGetUnlockTime); \
	DECLARE_FUNCTION(execSetIsAchieved); \
	DECLARE_FUNCTION(execGetIsAchieved); \
	DECLARE_FUNCTION(execGetIsHidden); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementDataAsset(); \
	friend struct Z_Construct_UClass_UAchievementDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAchievementDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UAchievementDataAsset)


#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAchievementDataAsset(UAchievementDataAsset&&); \
	UAchievementDataAsset(const UAchievementDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementDataAsset) \
	NO_API virtual ~UAchievementDataAsset();


#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_14_PROLOG
#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UAchievementDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_AchievementDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
