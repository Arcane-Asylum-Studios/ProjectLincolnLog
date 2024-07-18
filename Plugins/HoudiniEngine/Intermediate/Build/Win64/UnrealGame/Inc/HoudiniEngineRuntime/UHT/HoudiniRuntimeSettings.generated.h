// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniRuntimeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniRuntimeSettings_generated_h
#error "HoudiniRuntimeSettings.generated.h already included, missing '#pragma once' in HoudiniRuntimeSettings.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniRuntimeSettings_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniStaticMeshGenerationProperties>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniRuntimeSettings(); \
	friend struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UHoudiniRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniRuntimeSettings(UHoudiniRuntimeSettings&&); \
	UHoudiniRuntimeSettings(const UHoudiniRuntimeSettings&); \
public:


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_148_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_151_INCLASS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h


#define FOREACH_ENUM_EHOUDINIRUNTIMESETTINGSSESSIONTYPE(op) \
	op(HRSST_InProcess) \
	op(HRSST_Socket) \
	op(HRSST_NamedPipe) \
	op(HRSST_None) \
	op(HRSST_MemoryBuffer) 
#define FOREACH_ENUM_EHOUDINIRUNTIMESETTINGSRECOMPUTEFLAG(op) \
	op(HRSRF_Always) \
	op(HRSRF_OnlyIfMissing) \
	op(HRSRF_Never) 
#define FOREACH_ENUM_EHOUDINIEXECUTABLETYPE(op) \
	op(HRSHE_Houdini) \
	op(HRSHE_HoudiniFX) \
	op(HRSHE_HoudiniCore) \
	op(HRSHE_HoudiniIndie) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
