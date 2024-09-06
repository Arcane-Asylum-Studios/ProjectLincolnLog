// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineTaskInfo.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniEngineTaskInfo_generated_h
#error "HoudiniEngineTaskInfo.generated.h already included, missing '#pragma once' in HoudiniEngineTaskInfo.h"
#endif
#define HOUDINIENGINE_HoudiniEngineTaskInfo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineTaskInfo_h


#define FOREACH_ENUM_EHOUDINIENGINETASKSTATE(op) \
	op(EHoudiniEngineTaskState::None) \
	op(EHoudiniEngineTaskState::Working) \
	op(EHoudiniEngineTaskState::Success) \
	op(EHoudiniEngineTaskState::FinishedWithError) \
	op(EHoudiniEngineTaskState::FinishedWithFatalError) \
	op(EHoudiniEngineTaskState::Aborted) 

enum class EHoudiniEngineTaskState : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineTaskState> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
