// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamGameInstance;
struct FItemDetailWithProperties;
struct FSteamworksInitializationResponse;
#ifdef TOOLKITSTEAMWORKS_SteamGameInstance_generated_h
#error "SteamGameInstance.generated.h already included, missing '#pragma once' in SteamGameInstance.h"
#endif
#define TOOLKITSTEAMWORKS_SteamGameInstance_generated_h

#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateItemDetails); \
	DECLARE_FUNCTION(execClearItemDetails); \
	DECLARE_FUNCTION(execInitializeRelayNetworkAccess); \
	DECLARE_FUNCTION(execInitializeSteamAPI); \
	DECLARE_FUNCTION(execGetSteamGameInstance);


#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamGameInstance(); \
	friend struct Z_Construct_UClass_USteamGameInstance_Statics; \
public: \
	DECLARE_CLASS(USteamGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(USteamGameInstance)


#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamGameInstance(USteamGameInstance&&); \
	USteamGameInstance(const USteamGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamGameInstance) \
	NO_API virtual ~USteamGameInstance();


#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_51_PROLOG
#define FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_INCLASS_NO_PURE_DECLS \
	FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class USteamGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLogFORK_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_SteamGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
