// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPresetActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniPresetActorFactory_generated_h
#error "HoudiniPresetActorFactory.generated.h already included, missing '#pragma once' in HoudiniPresetActorFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPresetActorFactory_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPresetActorFactory(); \
	friend struct Z_Construct_UClass_UHoudiniPresetActorFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPresetActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPresetActorFactory)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPresetActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPresetActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPresetActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPresetActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPresetActorFactory(UHoudiniPresetActorFactory&&); \
	UHoudiniPresetActorFactory(const UHoudiniPresetActorFactory&); \
public: \
	NO_API virtual ~UHoudiniPresetActorFactory();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPresetActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
