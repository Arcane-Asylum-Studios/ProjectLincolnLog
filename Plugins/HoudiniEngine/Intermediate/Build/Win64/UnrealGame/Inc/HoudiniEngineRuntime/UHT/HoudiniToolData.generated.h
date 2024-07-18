// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniToolData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniToolData_generated_h
#error "HoudiniToolData.generated.h already included, missing '#pragma once' in HoudiniToolData.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniToolData_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHImageData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHImageData>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveToJSONFile); \
	DECLARE_FUNCTION(execConvertToJSONData); \
	DECLARE_FUNCTION(execPopulateFromJSONFile); \
	DECLARE_FUNCTION(execPopulateFromJSONData);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniToolData(); \
	friend struct Z_Construct_UClass_UHoudiniToolData_Statics; \
public: \
	DECLARE_CLASS(UHoudiniToolData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniToolData)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniToolData(UHoudiniToolData&&); \
	UHoudiniToolData(const UHoudiniToolData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniToolData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniToolData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniToolData) \
	NO_API virtual ~UHoudiniToolData();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_85_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniToolData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
