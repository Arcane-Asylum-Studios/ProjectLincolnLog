// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniAssetFactory_generated_h
#error "HoudiniAssetFactory.generated.h already included, missing '#pragma once' in HoudiniAssetFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniAssetFactory_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetFactory(); \
	friend struct Z_Construct_UClass_UHoudiniAssetFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniAssetFactory(UHoudiniAssetFactory&&); \
	UHoudiniAssetFactory(const UHoudiniAssetFactory&); \
public: \
	NO_API virtual ~UHoudiniAssetFactory();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniAssetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
