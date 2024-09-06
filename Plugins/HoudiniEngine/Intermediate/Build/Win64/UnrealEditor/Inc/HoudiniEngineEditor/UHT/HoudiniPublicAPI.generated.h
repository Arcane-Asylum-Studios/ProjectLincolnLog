// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPublicAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniAsset;
class UHoudiniPublicAPIAssetWrapper;
class UHoudiniPublicAPIInput;
class ULevel;
class UObject;
enum class EHoudiniEngineBakeOption : uint8;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPI_generated_h
#error "HoudiniPublicAPI.generated.h already included, missing '#pragma once' in HoudiniPublicAPI.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPI_generated_h

#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UHoudiniPublicAPIInput* CreateEmptyInput_Implementation(TSubclassOf<UHoudiniPublicAPIInput> InInputClass, UObject* InOuter); \
	virtual void ResumeAssetCooking_Implementation(); \
	virtual void PauseAssetCooking_Implementation(); \
	virtual bool IsAssetCookingPaused_Implementation() const; \
	virtual bool InstantiateAssetWithExistingWrapper_Implementation(UHoudiniPublicAPIAssetWrapper* InWrapper, UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake); \
	virtual UHoudiniPublicAPIAssetWrapper* InstantiateAsset_Implementation(UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake); \
	virtual void RestartSession_Implementation(); \
	virtual void StopSession_Implementation(); \
	virtual void CreateSession_Implementation(); \
	virtual bool IsSessionValid_Implementation() const; \
	DECLARE_FUNCTION(execCreateEmptyInput); \
	DECLARE_FUNCTION(execResumeAssetCooking); \
	DECLARE_FUNCTION(execPauseAssetCooking); \
	DECLARE_FUNCTION(execIsAssetCookingPaused); \
	DECLARE_FUNCTION(execInstantiateAssetWithExistingWrapper); \
	DECLARE_FUNCTION(execInstantiateAsset); \
	DECLARE_FUNCTION(execRestartSession); \
	DECLARE_FUNCTION(execStopSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execIsSessionValid);


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPI(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPI_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPI, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPI)


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPI(UHoudiniPublicAPI&&); \
	UHoudiniPublicAPI(const UHoudiniPublicAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPI) \
	NO_API virtual ~UHoudiniPublicAPI();


#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_77_PROLOG
#define FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h


#define FOREACH_ENUM_EHOUDINIPUBLICAPIRAMPINTERPOLATIONTYPE(op) \
	op(EHoudiniPublicAPIRampInterpolationType::InValid) \
	op(EHoudiniPublicAPIRampInterpolationType::CONSTANT) \
	op(EHoudiniPublicAPIRampInterpolationType::LINEAR) \
	op(EHoudiniPublicAPIRampInterpolationType::CATMULL_ROM) \
	op(EHoudiniPublicAPIRampInterpolationType::MONOTONE_CUBIC) \
	op(EHoudiniPublicAPIRampInterpolationType::BEZIER) \
	op(EHoudiniPublicAPIRampInterpolationType::BSPLINE) \
	op(EHoudiniPublicAPIRampInterpolationType::HERMITE) 

enum class EHoudiniPublicAPIRampInterpolationType : uint8;
template<> struct TIsUEnumClass<EHoudiniPublicAPIRampInterpolationType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPIRampInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
