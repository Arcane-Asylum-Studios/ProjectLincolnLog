// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngine.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniEngine_generated_h
#error "HoudiniEngine.generated.h already included, missing '#pragma once' in HoudiniEngine.h"
#endif
#define HOUDINIENGINE_HoudiniEngine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngine_h


#define FOREACH_ENUM_EHOUDINISESSIONSTATUS(op) \
	op(EHoudiniSessionStatus::Invalid) \
	op(EHoudiniSessionStatus::NotStarted) \
	op(EHoudiniSessionStatus::Connected) \
	op(EHoudiniSessionStatus::None) \
	op(EHoudiniSessionStatus::Stopped) \
	op(EHoudiniSessionStatus::Failed) \
	op(EHoudiniSessionStatus::Lost) \
	op(EHoudiniSessionStatus::NoLicense) 

enum class EHoudiniSessionStatus : int8;
template<> struct TIsUEnumClass<EHoudiniSessionStatus> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
