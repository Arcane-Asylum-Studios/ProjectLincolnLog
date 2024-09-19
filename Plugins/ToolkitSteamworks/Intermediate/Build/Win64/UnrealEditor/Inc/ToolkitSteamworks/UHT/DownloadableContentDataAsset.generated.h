// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DownloadableContentDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef TOOLKITSTEAMWORKS_DownloadableContentDataAsset_generated_h
#error "DownloadableContentDataAsset.generated.h already included, missing '#pragma once' in DownloadableContentDataAsset.h"
#endif
#define TOOLKITSTEAMWORKS_DownloadableContentDataAsset_generated_h

#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestUninstall); \
	DECLARE_FUNCTION(execRequestInstall); \
	DECLARE_FUNCTION(execGetEarliestPurchaseTime); \
	DECLARE_FUNCTION(execGetDownloadProgress); \
	DECLARE_FUNCTION(execGetInstallDirectory); \
	DECLARE_FUNCTION(execGetIsInstalled); \
	DECLARE_FUNCTION(execGetIsSubscribed); \
	DECLARE_FUNCTION(execGetIsAvailable); \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDownloadableContentDataAsset(); \
	friend struct Z_Construct_UClass_UDownloadableContentDataAsset_Statics; \
public: \
	DECLARE_CLASS(UDownloadableContentDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UDownloadableContentDataAsset)


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadableContentDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDownloadableContentDataAsset(UDownloadableContentDataAsset&&); \
	UDownloadableContentDataAsset(const UDownloadableContentDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadableContentDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadableContentDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadableContentDataAsset) \
	NO_API virtual ~UDownloadableContentDataAsset();


#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_14_PROLOG
#define FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UDownloadableContentDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLogFork_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_DownloadableContentDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
