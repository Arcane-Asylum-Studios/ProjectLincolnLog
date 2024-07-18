// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterChoice.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameterChoice_generated_h
#error "HoudiniParameterChoice.generated.h already included, missing '#pragma once' in HoudiniParameterChoice.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterChoice_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterChoice(); \
	friend struct Z_Construct_UClass_UHoudiniParameterChoice_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameterChoice, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameterChoice)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterChoice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterChoice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterChoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterChoice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameterChoice(UHoudiniParameterChoice&&); \
	UHoudiniParameterChoice(const UHoudiniParameterChoice&); \
public: \
	NO_API virtual ~UHoudiniParameterChoice();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_36_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameterChoice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterChoice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
