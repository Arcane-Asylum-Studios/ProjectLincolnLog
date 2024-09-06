// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineToolTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniEngineToolTypes_generated_h
#error "HoudiniEngineToolTypes.generated.h already included, missing '#pragma once' in HoudiniEngineToolTypes.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEngineToolTypes_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics; \
	HOUDINIENGINEEDITOR_API static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniToolDirectory>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics; \
	HOUDINIENGINEEDITOR_API static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniToolCategory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h


#define FOREACH_ENUM_EHOUDINITOOLCATEGORYTYPE(op) \
	op(EHoudiniToolCategoryType::Package) \
	op(EHoudiniToolCategoryType::User) 

enum class EHoudiniToolCategoryType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolCategoryType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolCategoryType>();

#define FOREACH_ENUM_EHOUDINIPACKAGETOOLTYPE(op) \
	op(EHoudiniPackageToolType::HoudiniAsset) \
	op(EHoudiniPackageToolType::Preset) 

enum class EHoudiniPackageToolType : uint8;
template<> struct TIsUEnumClass<EHoudiniPackageToolType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPackageToolType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
