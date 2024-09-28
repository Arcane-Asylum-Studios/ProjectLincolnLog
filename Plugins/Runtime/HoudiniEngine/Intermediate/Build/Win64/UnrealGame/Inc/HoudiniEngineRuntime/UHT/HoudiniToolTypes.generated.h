// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniToolTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniToolTypes_generated_h
#error "HoudiniToolTypes.generated.h already included, missing '#pragma once' in HoudiniToolTypes.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniToolTypes_generated_h

#define FID_ProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCategoryRules_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FCategoryRules>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLog_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniToolTypes_h


#define FOREACH_ENUM_EHOUDINITOOLTYPE(op) \
	op(EHoudiniToolType::HTOOLTYPE_GENERATOR) \
	op(EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE) \
	op(EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI) \
	op(EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH) 

enum class EHoudiniToolType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolType>();

#define FOREACH_ENUM_EHOUDINITOOLSELECTIONTYPE(op) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_ALL) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY) 

enum class EHoudiniToolSelectionType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolSelectionType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
