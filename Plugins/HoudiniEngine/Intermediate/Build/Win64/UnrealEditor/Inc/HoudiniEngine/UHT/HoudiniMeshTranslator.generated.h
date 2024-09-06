// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniMeshTranslator.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniMeshTranslator_generated_h
#error "HoudiniMeshTranslator.generated.h already included, missing '#pragma once' in HoudiniMeshTranslator.h"
#endif
#define HOUDINIENGINE_HoudiniMeshTranslator_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMeshTranslator_h


#define FOREACH_ENUM_EHOUDINISPLITTYPE(op) \
	op(EHoudiniSplitType::Invalid) \
	op(EHoudiniSplitType::Normal) \
	op(EHoudiniSplitType::LOD) \
	op(EHoudiniSplitType::RenderedComplexCollider) \
	op(EHoudiniSplitType::InvisibleComplexCollider) \
	op(EHoudiniSplitType::RenderedUCXCollider) \
	op(EHoudiniSplitType::InvisibleUCXCollider) \
	op(EHoudiniSplitType::RenderedSimpleCollider) \
	op(EHoudiniSplitType::InvisibleSimpleCollider) 

enum class EHoudiniSplitType : uint8;
template<> struct TIsUEnumClass<EHoudiniSplitType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSplitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
