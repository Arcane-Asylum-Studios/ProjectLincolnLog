// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniGeoFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniGeoFactory_generated_h
#error "HoudiniGeoFactory.generated.h already included, missing '#pragma once' in HoudiniGeoFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniGeoFactory_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniGeoFactory(); \
	friend struct Z_Construct_UClass_UHoudiniGeoFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniGeoFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniGeoFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniGeoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniGeoFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniGeoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniGeoFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniGeoFactory(UHoudiniGeoFactory&&); \
	UHoudiniGeoFactory(const UHoudiniGeoFactory&); \
public: \
	NO_API virtual ~UHoudiniGeoFactory();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniGeoFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
