// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniMaterialTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniMaterialTranslator_generated_h
#error "HoudiniMaterialTranslator.generated.h already included, missing '#pragma once' in HoudiniMaterialTranslator.h"
#endif
#define HOUDINIENGINE_HoudiniMaterialTranslator_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics; \
	HOUDINIENGINE_API static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniMaterialParameterValue>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniMaterialInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h


#define FOREACH_ENUM_EHOUDINIUNREALMATERIALPARAMETERTYPE(op) \
	op(EHoudiniUnrealMaterialParameterType::Invalid) \
	op(EHoudiniUnrealMaterialParameterType::StandardParameter) \
	op(EHoudiniUnrealMaterialParameterType::Scalar) \
	op(EHoudiniUnrealMaterialParameterType::StaticSwitch) \
	op(EHoudiniUnrealMaterialParameterType::Vector) \
	op(EHoudiniUnrealMaterialParameterType::Texture) 

enum class EHoudiniUnrealMaterialParameterType : uint8;
template<> struct TIsUEnumClass<EHoudiniUnrealMaterialParameterType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniUnrealMaterialParameterType>();

#define FOREACH_ENUM_EHOUDINIUNREALMATERIALPARAMETERDATATYPE(op) \
	op(EHoudiniUnrealMaterialParameterDataType::Invalid) \
	op(EHoudiniUnrealMaterialParameterDataType::Byte) \
	op(EHoudiniUnrealMaterialParameterDataType::Float) \
	op(EHoudiniUnrealMaterialParameterDataType::String) \
	op(EHoudiniUnrealMaterialParameterDataType::Vector) 

enum class EHoudiniUnrealMaterialParameterDataType : uint8;
template<> struct TIsUEnumClass<EHoudiniUnrealMaterialParameterDataType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniUnrealMaterialParameterDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
