// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniEngineEditorSettings_generated_h
#error "HoudiniEngineEditorSettings.generated.h already included, missing '#pragma once' in HoudiniEngineEditorSettings.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniEngineEditorSettings_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserPackageRules_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FUserPackageRules>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserCategoryRules_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FUserCategoryRules>();

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniEngineEditorSettings(); \
	friend struct Z_Construct_UClass_UHoudiniEngineEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UHoudiniEngineEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniEngineEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("HoudiniEngine");} \



#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniEngineEditorSettings(UHoudiniEngineEditorSettings&&); \
	UHoudiniEngineEditorSettings(const UHoudiniEngineEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniEngineEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniEngineEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniEngineEditorSettings) \
	NO_API virtual ~UHoudiniEngineEditorSettings();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_79_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniEngineEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineEditorSettings_h


#define FOREACH_ENUM_EHOUDINIENGINEEDITORSETTINGUSECUSTOMLOCATION(op) \
	op(EHoudiniEngineEditorSettingUseCustomLocation::Project) \
	op(EHoudiniEngineEditorSettingUseCustomLocation::Disabled) \
	op(EHoudiniEngineEditorSettingUseCustomLocation::Enabled) 

enum class EHoudiniEngineEditorSettingUseCustomLocation : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineEditorSettingUseCustomLocation> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineEditorSettingUseCustomLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
