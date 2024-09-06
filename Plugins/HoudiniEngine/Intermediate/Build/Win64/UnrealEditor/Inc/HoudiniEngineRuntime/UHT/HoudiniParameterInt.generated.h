// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterInt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameterInt_generated_h
#error "HoudiniParameterInt.generated.h already included, missing '#pragma once' in HoudiniParameterInt.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterInt_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterInt(); \
	friend struct Z_Construct_UClass_UHoudiniParameterInt_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameterInt, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameterInt)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterInt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterInt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterInt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameterInt(UHoudiniParameterInt&&); \
	UHoudiniParameterInt(const UHoudiniParameterInt&); \
public: \
	NO_API virtual ~UHoudiniParameterInt();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_36_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameterInt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterInt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
