// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameterButton_generated_h
#error "HoudiniParameterButton.generated.h already included, missing '#pragma once' in HoudiniParameterButton.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterButton_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterButton(); \
	friend struct Z_Construct_UClass_UHoudiniParameterButton_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameterButton, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameterButton)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameterButton(UHoudiniParameterButton&&); \
	UHoudiniParameterButton(const UHoudiniParameterButton&); \
public: \
	NO_API virtual ~UHoudiniParameterButton();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameterButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
