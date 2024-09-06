// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameter_generated_h
#error "HoudiniParameter.generated.h already included, missing '#pragma once' in HoudiniParameter.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameter_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameter(); \
	friend struct Z_Construct_UClass_UHoudiniParameter_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameter)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameter(UHoudiniParameter&&); \
	UHoudiniParameter(const UHoudiniParameter&); \
public: \
	NO_API virtual ~UHoudiniParameter();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_84_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_90_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameter_h


#define FOREACH_ENUM_EHOUDINIPARAMETERTYPE(op) \
	op(EHoudiniParameterType::Invalid) \
	op(EHoudiniParameterType::Button) \
	op(EHoudiniParameterType::ButtonStrip) \
	op(EHoudiniParameterType::Color) \
	op(EHoudiniParameterType::ColorRamp) \
	op(EHoudiniParameterType::File) \
	op(EHoudiniParameterType::FileDir) \
	op(EHoudiniParameterType::FileGeo) \
	op(EHoudiniParameterType::FileImage) \
	op(EHoudiniParameterType::Float) \
	op(EHoudiniParameterType::FloatRamp) \
	op(EHoudiniParameterType::Folder) \
	op(EHoudiniParameterType::FolderList) \
	op(EHoudiniParameterType::Input) \
	op(EHoudiniParameterType::Int) \
	op(EHoudiniParameterType::IntChoice) \
	op(EHoudiniParameterType::Label) \
	op(EHoudiniParameterType::MultiParm) \
	op(EHoudiniParameterType::Separator) \
	op(EHoudiniParameterType::String) \
	op(EHoudiniParameterType::StringChoice) \
	op(EHoudiniParameterType::StringAssetRef) \
	op(EHoudiniParameterType::Toggle) 

enum class EHoudiniParameterType : uint8;
template<> struct TIsUEnumClass<EHoudiniParameterType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterType>();

#define FOREACH_ENUM_EHOUDINIPARAMETERCHOICELISTTYPE(op) \
	op(EHoudiniParameterChoiceListType::None) \
	op(EHoudiniParameterChoiceListType::Normal) \
	op(EHoudiniParameterChoiceListType::Mini) \
	op(EHoudiniParameterChoiceListType::Replace) \
	op(EHoudiniParameterChoiceListType::Toggle) 

enum class EHoudiniParameterChoiceListType : uint8;
template<> struct TIsUEnumClass<EHoudiniParameterChoiceListType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterChoiceListType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
