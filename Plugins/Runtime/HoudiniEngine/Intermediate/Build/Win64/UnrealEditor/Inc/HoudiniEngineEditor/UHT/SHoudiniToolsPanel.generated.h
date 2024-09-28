// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SHoudiniToolsPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_SHoudiniToolsPanel_generated_h
#error "SHoudiniToolsPanel.generated.h already included, missing '#pragma once' in SHoudiniToolsPanel.h"
#endif
#define HOUDINIENGINEEDITOR_SHoudiniToolsPanel_generated_h

#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniToolDirectoryProperties(); \
	friend struct Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics; \
public: \
	DECLARE_CLASS(UHoudiniToolDirectoryProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniToolDirectoryProperties)


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniToolDirectoryProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniToolDirectoryProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniToolDirectoryProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniToolDirectoryProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniToolDirectoryProperties(UHoudiniToolDirectoryProperties&&); \
	UHoudiniToolDirectoryProperties(const UHoudiniToolDirectoryProperties&); \
public: \
	NO_API virtual ~UHoudiniToolDirectoryProperties();


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_258_PROLOG
#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_INCLASS \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniToolDirectoryProperties>();

#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniToolHelpers(); \
	friend struct Z_Construct_UClass_UHoudiniToolHelpers_Statics; \
public: \
	DECLARE_CLASS(UHoudiniToolHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniToolHelpers)


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniToolHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniToolHelpers(UHoudiniToolHelpers&&); \
	UHoudiniToolHelpers(const UHoudiniToolHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniToolHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniToolHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniToolHelpers) \
	NO_API virtual ~UHoudiniToolHelpers();


#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_274_PROLOG
#define FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_INCLASS_NO_PURE_DECLS \
	FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniToolHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectLincolnLog_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h


#define FOREACH_ENUM_EHOUDINITOOLSVIEWMODE(op) \
	op(EHoudiniToolsViewMode::TileView) \
	op(EHoudiniToolsViewMode::ListView) 

enum class EHoudiniToolsViewMode;
template<> struct TIsUEnumClass<EHoudiniToolsViewMode> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolsViewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
