// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterMultiParm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameterMultiParm_generated_h
#error "HoudiniParameterMultiParm.generated.h already included, missing '#pragma once' in HoudiniParameterMultiParm.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterMultiParm_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterMultiParm(); \
	friend struct Z_Construct_UClass_UHoudiniParameterMultiParm_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameterMultiParm, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameterMultiParm)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterMultiParm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterMultiParm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterMultiParm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterMultiParm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameterMultiParm(UHoudiniParameterMultiParm&&); \
	UHoudiniParameterMultiParm(const UHoudiniParameterMultiParm&); \
public: \
	NO_API virtual ~UHoudiniParameterMultiParm();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameterMultiParm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h


#define FOREACH_ENUM_EHOUDINIMULTIPARMMODIFICATIONTYPE(op) \
	op(EHoudiniMultiParmModificationType::None) \
	op(EHoudiniMultiParmModificationType::Inserted) \
	op(EHoudiniMultiParmModificationType::Removed) \
	op(EHoudiniMultiParmModificationType::Modified) 

enum class EHoudiniMultiParmModificationType : uint8;
template<> struct TIsUEnumClass<EHoudiniMultiParmModificationType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
