// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPackageParams.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniPackageParams_generated_h
#error "HoudiniPackageParams.generated.h already included, missing '#pragma once' in HoudiniPackageParams.h"
#endif
#define HOUDINIENGINE_HoudiniPackageParams_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPackageParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h


#define FOREACH_ENUM_EPACKAGEMODE(op) \
	op(EPackageMode::CookToLevel_Invalid) \
	op(EPackageMode::CookToTemp) \
	op(EPackageMode::Bake) 

enum class EPackageMode : int8;
template<> struct TIsUEnumClass<EPackageMode> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageMode>();

#define FOREACH_ENUM_EPACKAGEREPLACEMODE(op) \
	op(EPackageReplaceMode::CreateNewAssets) \
	op(EPackageReplaceMode::ReplaceExistingAssets) 

enum class EPackageReplaceMode : int8;
template<> struct TIsUEnumClass<EPackageReplaceMode> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageReplaceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
