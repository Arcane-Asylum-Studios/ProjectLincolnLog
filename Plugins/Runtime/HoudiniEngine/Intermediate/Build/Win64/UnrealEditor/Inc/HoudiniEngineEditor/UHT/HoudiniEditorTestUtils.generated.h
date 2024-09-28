// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/HoudiniEditorTestUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniPublicAPIAssetWrapper;
#ifdef HOUDINIENGINEEDITOR_HoudiniEditorTestUtils_generated_h
#error "HoudiniEditorTestUtils.generated.h already included, missing '#pragma once' in HoudiniEditorTestUtils.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEditorTestUtils_generated_h

#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostProcessingCallback); \
	DECLARE_FUNCTION(execPostCookCallback); \
	DECLARE_FUNCTION(execPostInstantiationCallback); \
	DECLARE_FUNCTION(execPreInstantiationCallback);


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniEditorTestObject(); \
	friend struct Z_Construct_UClass_UHoudiniEditorTestObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniEditorTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniEditorTestObject)


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniEditorTestObject(UHoudiniEditorTestObject&&); \
	UHoudiniEditorTestObject(const UHoudiniEditorTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniEditorTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniEditorTestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniEditorTestObject) \
	NO_API virtual ~UHoudiniEditorTestObject();


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_377_PROLOG
#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_INCLASS_NO_PURE_DECLS \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h_380_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniEditorTestObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_Tests_HoudiniEditorTestUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
