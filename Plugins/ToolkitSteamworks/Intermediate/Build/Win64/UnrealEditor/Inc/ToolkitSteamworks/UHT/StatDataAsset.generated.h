// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLKITSTEAMWORKS_StatDataAsset_generated_h
#error "StatDataAsset.generated.h already included, missing '#pragma once' in StatDataAsset.h"
#endif
#define TOOLKITSTEAMWORKS_StatDataAsset_generated_h

#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetIntValueForUser); \
	DECLARE_FUNCTION(execSetFloatValueForUser); \
	DECLARE_FUNCTION(execSetIntValue); \
	DECLARE_FUNCTION(execSetFloatValue); \
	DECLARE_FUNCTION(execServerGetIntValueForUser); \
	DECLARE_FUNCTION(execServerGetFloatValueForUser); \
	DECLARE_FUNCTION(execGetIntValueForUser); \
	DECLARE_FUNCTION(execGetFloatValueForUser); \
	DECLARE_FUNCTION(execGetIntValue); \
	DECLARE_FUNCTION(execGetFloatValue);


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatDataAsset(); \
	friend struct Z_Construct_UClass_UStatDataAsset_Statics; \
public: \
	DECLARE_CLASS(UStatDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UStatDataAsset)


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatDataAsset(UStatDataAsset&&); \
	UStatDataAsset(const UStatDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatDataAsset) \
	NO_API virtual ~UStatDataAsset();


#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_14_PROLOG
#define FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UStatDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projectlincolnlogs_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_StatDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
