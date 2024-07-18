// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniGeoPartObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h
#error "HoudiniGeoPartObject.generated.h already included, missing '#pragma once' in HoudiniGeoPartObject.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniObjectInfo>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGeoInfo>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniPartInfo>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniVolumeInfo>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniCurveInfo>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniMeshSocket>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_263_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGeoPartObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h


#define FOREACH_ENUM_EHOUDINIGEOTYPE(op) \
	op(EHoudiniGeoType::Invalid) \
	op(EHoudiniGeoType::Default) \
	op(EHoudiniGeoType::Intermediate) \
	op(EHoudiniGeoType::Input) \
	op(EHoudiniGeoType::Curve) 

enum class EHoudiniGeoType : uint8;
template<> struct TIsUEnumClass<EHoudiniGeoType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>();

#define FOREACH_ENUM_EHOUDINIPARTTYPE(op) \
	op(EHoudiniPartType::Invalid) \
	op(EHoudiniPartType::Mesh) \
	op(EHoudiniPartType::Instancer) \
	op(EHoudiniPartType::Curve) \
	op(EHoudiniPartType::Volume) \
	op(EHoudiniPartType::DataTable) \
	op(EHoudiniPartType::LandscapeSpline) \
	op(EHoudiniPartType::SkeletalMeshShape) \
	op(EHoudiniPartType::SkeletalMeshPose) \
	op(EHoudiniPartType::MotionClip) 

enum class EHoudiniPartType : uint8;
template<> struct TIsUEnumClass<EHoudiniPartType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>();

#define FOREACH_ENUM_EHOUDINIINSTANCERTYPE(op) \
	op(EHoudiniInstancerType::Invalid) \
	op(EHoudiniInstancerType::ObjectInstancer) \
	op(EHoudiniInstancerType::PackedPrimitive) \
	op(EHoudiniInstancerType::AttributeInstancer) \
	op(EHoudiniInstancerType::OldSchoolAttributeInstancer) \
	op(EHoudiniInstancerType::GeometryCollection) \
	op(EHoudiniInstancerType::SkeletalMesh) \
	op(EHoudiniInstancerType::MotionClip) 

enum class EHoudiniInstancerType : uint8;
template<> struct TIsUEnumClass<EHoudiniInstancerType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
