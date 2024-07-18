// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterFolder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameterFolder_generated_h
#error "HoudiniParameterFolder.generated.h already included, missing '#pragma once' in HoudiniParameterFolder.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterFolder_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterFolder(); \
	friend struct Z_Construct_UClass_UHoudiniParameterFolder_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameterFolder, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameterFolder)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterFolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterFolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameterFolder(UHoudiniParameterFolder&&); \
	UHoudiniParameterFolder(const UHoudiniParameterFolder&); \
public: \
	NO_API virtual ~UHoudiniParameterFolder();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_45_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameterFolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h


#define FOREACH_ENUM_EHOUDINIFOLDERPARAMETERTYPE(op) \
	op(EHoudiniFolderParameterType::Invalid) \
	op(EHoudiniFolderParameterType::Collapsible) \
	op(EHoudiniFolderParameterType::Simple) \
	op(EHoudiniFolderParameterType::Tabs) \
	op(EHoudiniFolderParameterType::Radio) \
	op(EHoudiniFolderParameterType::Other) 

enum class EHoudiniFolderParameterType : uint8;
template<> struct TIsUEnumClass<EHoudiniFolderParameterType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniFolderParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
