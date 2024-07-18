// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPointCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FPointIndexes;
#ifdef HOUDININIAGARA_HoudiniPointCache_generated_h
#error "HoudiniPointCache.generated.h already included, missing '#pragma once' in HoudiniPointCache.h"
#endif
#define HOUDININIAGARA_HoudiniPointCache_generated_h

#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointIndexes_Statics; \
	HOUDININIAGARA_API static class UScriptStruct* StaticStruct();


template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<struct FPointIndexes>();

#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetUseCustomCSVTitleRow); \
	DECLARE_FUNCTION(execGetUseCustomCSVTitleRow); \
	DECLARE_FUNCTION(execGetPointValueIndexes); \
	DECLARE_FUNCTION(execGetSpecialAttributeIndexes); \
	DECLARE_FUNCTION(execGetPointTypes); \
	DECLARE_FUNCTION(execGetLifeValues); \
	DECLARE_FUNCTION(execGetSpawnTimes); \
	DECLARE_FUNCTION(execGetFloatSampleData); \
	DECLARE_FUNCTION(execGetPointType); \
	DECLARE_FUNCTION(execGetPointLifeAtTime); \
	DECLARE_FUNCTION(execGetPointLife); \
	DECLARE_FUNCTION(execGetPointPositionAtTime); \
	DECLARE_FUNCTION(execGetPointInt32ValueAtTime); \
	DECLARE_FUNCTION(execGetPointFloatValueAtTime); \
	DECLARE_FUNCTION(execGetPointQuatValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointQuatValueAtTime); \
	DECLARE_FUNCTION(execGetPointVector4ValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointVector4ValueAtTime); \
	DECLARE_FUNCTION(execGetPointVectorValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointVectorValueAtTime); \
	DECLARE_FUNCTION(execGetPointValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointValueAtTime); \
	DECLARE_FUNCTION(execGetSampleIndexesForPointAtTime); \
	DECLARE_FUNCTION(execGetPointIDsToSpawnAtTime); \
	DECLARE_FUNCTION(execGetLastPointIDToSpawnAtTime); \
	DECLARE_FUNCTION(execGetLastSampleIndexAtTime); \
	DECLARE_FUNCTION(execGetImpulseValue); \
	DECLARE_FUNCTION(execGetVelocityValue); \
	DECLARE_FUNCTION(execGetColorValue); \
	DECLARE_FUNCTION(execGetNormalValue); \
	DECLARE_FUNCTION(execGetPositionValue); \
	DECLARE_FUNCTION(execGetTimeValue); \
	DECLARE_FUNCTION(execGetQuatValueForString); \
	DECLARE_FUNCTION(execGetQuatValue); \
	DECLARE_FUNCTION(execGetVector4ValueForString); \
	DECLARE_FUNCTION(execGetVector4Value); \
	DECLARE_FUNCTION(execGetVectorValueForString); \
	DECLARE_FUNCTION(execGetVectorValue); \
	DECLARE_FUNCTION(execGetFloatValueForString); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetAttributeIndexInArrayFromString); \
	DECLARE_FUNCTION(execGetAttributeIndexFromString); \
	DECLARE_FUNCTION(execGetNumberOfAttributes); \
	DECLARE_FUNCTION(execGetNumberOfSamples); \
	DECLARE_FUNCTION(execGetNumberOfPoints);


#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPointCache(); \
	friend struct Z_Construct_UClass_UHoudiniPointCache_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPointCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniNiagara"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPointCache)


#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPointCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPointCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPointCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPointCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPointCache(UHoudiniPointCache&&); \
	UHoudiniPointCache(const UHoudiniPointCache&); \
public: \
	NO_API virtual ~UHoudiniPointCache();


#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_155_PROLOG
#define FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_INCLASS \
	FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_160_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDININIAGARA_API UClass* StaticClass<class UHoudiniPointCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h


#define FOREACH_ENUM_EHOUDINIATTRIBUTES(op) \
	op(HOUDINI_ATTR_BEGIN) \
	op(POSITION) \
	op(NORMAL) \
	op(TIME) \
	op(POINTID) \
	op(LIFE) \
	op(COLOR) \
	op(ALPHA) \
	op(VELOCITY) \
	op(TYPE) \
	op(IMPULSE) \
	op(AGE) \
	op(HOUDINI_ATTR_SIZE) \
	op(HOUDINI_ATTR_END) 
#define FOREACH_ENUM_EHOUDINIPOINTCACHEFILETYPE(op) \
	op(EHoudiniPointCacheFileType::Invalid) \
	op(EHoudiniPointCacheFileType::CSV) \
	op(EHoudiniPointCacheFileType::JSON) \
	op(EHoudiniPointCacheFileType::BJSON) 

enum class EHoudiniPointCacheFileType : uint8;
template<> struct TIsUEnumClass<EHoudiniPointCacheFileType> { enum { Value = true }; };
template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniPointCacheFileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
