// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniSplineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniSplineComponent_generated_h
#error "HoudiniSplineComponent.generated.h already included, missing '#pragma once' in HoudiniSplineComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniSplineComponent_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniSplineComponent, NO_API)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniSplineComponent(); \
	friend struct Z_Construct_UClass_UHoudiniSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniSplineComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniSplineComponent) \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHoudiniSplineComponent*>(this); }


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniSplineComponent(UHoudiniSplineComponent&&); \
	UHoudiniSplineComponent(const UHoudiniSplineComponent&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniSplineComponent>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_281_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniSplineComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
