// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniAssetActorFactory_generated_h
#error "HoudiniAssetActorFactory.generated.h already included, missing '#pragma once' in HoudiniAssetActorFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniAssetActorFactory_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetActorFactory(); \
	friend struct Z_Construct_UClass_UHoudiniAssetActorFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetActorFactory)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniAssetActorFactory(UHoudiniAssetActorFactory&&); \
	UHoudiniAssetActorFactory(const UHoudiniAssetActorFactory&); \
public: \
	NO_API virtual ~UHoudiniAssetActorFactory();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_43_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniAssetActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
