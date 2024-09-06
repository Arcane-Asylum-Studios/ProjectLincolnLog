// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEditorNodeSyncSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef HOUDINIENGINEEDITOR_HoudiniEditorNodeSyncSubsystem_generated_h
#error "HoudiniEditorNodeSyncSubsystem.generated.h already included, missing '#pragma once' in HoudiniEditorNodeSyncSubsystem.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEditorNodeSyncSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniNodeSyncOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniNodeSyncOptions>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendContentBrowserSelection); \
	DECLARE_FUNCTION(execSendWorldSelection); \
	DECLARE_FUNCTION(execFetchFromHoudini); \
	DECLARE_FUNCTION(execSendToHoudini);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniEditorNodeSyncSubsystem(); \
	friend struct Z_Construct_UClass_UHoudiniEditorNodeSyncSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHoudiniEditorNodeSyncSubsystem, UAssetEditorUISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniEditorNodeSyncSubsystem)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniEditorNodeSyncSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniEditorNodeSyncSubsystem(UHoudiniEditorNodeSyncSubsystem&&); \
	UHoudiniEditorNodeSyncSubsystem(const UHoudiniEditorNodeSyncSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniEditorNodeSyncSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniEditorNodeSyncSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniEditorNodeSyncSubsystem) \
	NO_API virtual ~UHoudiniEditorNodeSyncSubsystem();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_140_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniEditorNodeSyncSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniEditorNodeSyncSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
