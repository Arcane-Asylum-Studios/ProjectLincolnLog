// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineTask.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniEngineTask_generated_h
#error "HoudiniEngineTask.generated.h already included, missing '#pragma once' in HoudiniEngineTask.h"
#endif
#define HOUDINIENGINE_HoudiniEngineTask_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTask_h


#define FOREACH_ENUM_EHOUDINIENGINETASKTYPE(op) \
	op(EHoudiniEngineTaskType::None) \
	op(EHoudiniEngineTaskType::AssetInstantiation) \
	op(EHoudiniEngineTaskType::AssetCooking) \
	op(EHoudiniEngineTaskType::AssetDeletion) \
	op(EHoudiniEngineTaskType::AssetProcess) 

enum class EHoudiniEngineTaskType : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineTaskType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
