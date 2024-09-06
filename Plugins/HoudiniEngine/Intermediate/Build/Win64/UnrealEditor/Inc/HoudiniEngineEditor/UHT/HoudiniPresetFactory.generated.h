// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPresetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniPresetFactory_generated_h
#error "HoudiniPresetFactory.generated.h already included, missing '#pragma once' in HoudiniPresetFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPresetFactory_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPresetFactory(); \
	friend struct Z_Construct_UClass_UHoudiniPresetFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPresetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPresetFactory)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPresetFactory(UHoudiniPresetFactory&&); \
	UHoudiniPresetFactory(const UHoudiniPresetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPresetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPresetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPresetFactory) \
	NO_API virtual ~UHoudiniPresetFactory();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_47_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPresetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
