// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPointCacheFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDININIAGARAEDITOR_HoudiniPointCacheFactory_generated_h
#error "HoudiniPointCacheFactory.generated.h already included, missing '#pragma once' in HoudiniPointCacheFactory.h"
#endif
#define HOUDININIAGARAEDITOR_HoudiniPointCacheFactory_generated_h

#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPointCacheFactory(); \
	friend struct Z_Construct_UClass_UHoudiniPointCacheFactory_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPointCacheFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniNiagaraEditor"), HOUDININIAGARAEDITOR_API) \
	DECLARE_SERIALIZER(UHoudiniPointCacheFactory)


#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOUDININIAGARAEDITOR_API UHoudiniPointCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPointCacheFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOUDININIAGARAEDITOR_API, UHoudiniPointCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPointCacheFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPointCacheFactory(UHoudiniPointCacheFactory&&); \
	UHoudiniPointCacheFactory(const UHoudiniPointCacheFactory&); \
public: \
	HOUDININIAGARAEDITOR_API virtual ~UHoudiniPointCacheFactory();


#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_37_PROLOG
#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_40_INCLASS \
	FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<class UHoudiniPointCacheFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
