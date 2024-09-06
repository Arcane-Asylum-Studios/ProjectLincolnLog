// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPublicAPIProcessHDANode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UHoudiniPublicAPIInput;
 struct FHoudiniParameterTuple;
class UHoudiniAsset;
class UHoudiniPublicAPIAssetWrapper;
class UHoudiniPublicAPIProcessHDANode;
class ULevel;
class UObject;
enum class EHoudiniEngineBakeOption : uint8;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIProcessHDANode_generated_h
#error "HoudiniPublicAPIProcessHDANode.generated.h already included, missing '#pragma once' in HoudiniPublicAPIProcessHDANode.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIProcessHDANode_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_42_DELEGATE \
HOUDINIENGINEEDITOR_API void FOnProcessHDANodeOutputPinDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProcessHDANodeOutputPinDelegate, UHoudiniPublicAPIAssetWrapper* AssetWrapper, bool bCookSuccess, bool bBakeSuccess);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePostAutoBake); \
	DECLARE_FUNCTION(execHandlePostProcessing); \
	DECLARE_FUNCTION(execHandlePreProcess); \
	DECLARE_FUNCTION(execHandlePostAutoCook); \
	DECLARE_FUNCTION(execHandlePostInstantiation); \
	DECLARE_FUNCTION(execHandlePreInstantiation); \
	DECLARE_FUNCTION(execHandleComplete); \
	DECLARE_FUNCTION(execHandleFailure); \
	DECLARE_FUNCTION(execProcessHDA);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIProcessHDANode(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIProcessHDANode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIProcessHDANode)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPIProcessHDANode(UHoudiniPublicAPIProcessHDANode&&); \
	UHoudiniPublicAPIProcessHDANode(const UHoudiniPublicAPIProcessHDANode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIProcessHDANode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIProcessHDANode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIProcessHDANode) \
	NO_API virtual ~UHoudiniPublicAPIProcessHDANode();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_48_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIProcessHDANode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
