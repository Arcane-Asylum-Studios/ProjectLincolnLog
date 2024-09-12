// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryItemDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemCount;
struct FItemPrice;
#ifdef TOOLKITSTEAMWORKS_InventoryItemDataAsset_generated_h
#error "InventoryItemDataAsset.generated.h already included, missing '#pragma once' in InventoryItemDataAsset.h"
#endif
#define TOOLKITSTEAMWORKS_InventoryItemDataAsset_generated_h

#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartPurchase); \
	DECLARE_FUNCTION(execExchangeItemsFor); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execAddPromoItem); \
	DECLARE_FUNCTION(execGetPrice); \
	DECLARE_FUNCTION(execHasPrice); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetQuantity);


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItemDataAsset(); \
	friend struct Z_Construct_UClass_UInventoryItemDataAsset_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItemDataAsset)


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItemDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryItemDataAsset(UInventoryItemDataAsset&&); \
	UInventoryItemDataAsset(const UInventoryItemDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItemDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemDataAsset) \
	NO_API virtual ~UInventoryItemDataAsset();


#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_14_PROLOG
#define FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UInventoryItemDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_monke_Desktop_GitRepos_ProjectLincolnLog_ProjectLincolnLogMonkeybean_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_InventoryItemDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
