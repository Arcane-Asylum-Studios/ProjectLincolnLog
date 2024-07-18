// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPublicAPIAssetWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UHoudiniPublicAPIInput;
 struct FHoudiniParameterTuple;
class AActor;
class AHoudiniAssetActor;
class UHoudiniAssetComponent;
class UHoudiniPDGAssetLink;
class UHoudiniPublicAPIAssetWrapper;
class UHoudiniPublicAPIInput;
class UObject;
class UTOPNetwork;
enum class EHoudiniAssetState : uint8;
enum class EHoudiniEngineBakeOption : uint8;
enum class EHoudiniLandscapeOutputBakeType : uint8;
enum class EHoudiniOutputType : uint8;
enum class EHoudiniProxyRefineRequestResult : uint8;
enum class EHoudiniProxyRefineResult : uint8;
enum class EHoudiniPublicAPIRampInterpolationType : uint8;
enum class EPDGBakePackageReplaceModeOption : uint8;
enum class EPDGBakeSelectionOption : uint8;
struct FDirectoryPath;
struct FHoudiniPublicAPIColorRampPoint;
struct FHoudiniPublicAPIFloatRampPoint;
struct FHoudiniPublicAPIOutputObjectIdentifier;
struct FLinearColor;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIAssetWrapper_generated_h
#error "HoudiniPublicAPIAssetWrapper.generated.h already included, missing '#pragma once' in HoudiniPublicAPIAssetWrapper.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIAssetWrapper_generated_h

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniPublicAPIRampPoint>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHoudiniPublicAPIRampPoint Super;


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniPublicAPIFloatRampPoint>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHoudiniPublicAPIRampPoint Super;


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniPublicAPIColorRampPoint>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniParameterTuple>();

#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_258_DELEGATE \
static void FOnHoudiniAssetStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetStateChange, UHoudiniPublicAPIAssetWrapper* InAssetWrapper);


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_259_DELEGATE \
static void FOnHoudiniAssetPostCook_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetPostCook, UHoudiniPublicAPIAssetWrapper* InAssetWrapper, bool bInCookSuccess);


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_260_DELEGATE \
static void FOnHoudiniAssetPostBake_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetPostBake, UHoudiniPublicAPIAssetWrapper* InAssetWrapper, bool bInBakeSuccess);


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_261_DELEGATE \
static void FOnHoudiniAssetProxyMeshesRefinedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetProxyMeshesRefinedDelegate, const UHoudiniPublicAPIAssetWrapper* InAssetWrapper, const EHoudiniProxyRefineResult InResult);


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearHoudiniAssetObject_Implementation(); \
	virtual bool GetPDGBakingReplacementMode_Implementation(EPDGBakePackageReplaceModeOption& OutBakingReplacementMode) const; \
	virtual bool SetPDGBakingReplacementMode_Implementation(const EPDGBakePackageReplaceModeOption InBakingReplacementMode); \
	virtual bool GetPDGRecenterBakedActors_Implementation() const; \
	virtual bool SetPDGRecenterBakedActors_Implementation(bool bInRecenterBakedActors); \
	virtual bool GetPDGBakeSelection_Implementation(EPDGBakeSelectionOption& OutBakeSelection); \
	virtual bool SetPDGBakeSelection_Implementation(const EPDGBakeSelectionOption InBakeSelection); \
	virtual bool GetPDGBakeMethod_Implementation(EHoudiniEngineBakeOption& OutBakeMethod); \
	virtual bool SetPDGBakeMethod_Implementation(const EHoudiniEngineBakeOption InBakeMethod); \
	virtual bool IsPDGAutoBakeNodesWithFailedWorkItemsEnabled_Implementation() const; \
	virtual bool SetPDGAutoBakeNodesWithFailedWorkItemsEnabled_Implementation(bool bInEnabled); \
	virtual bool IsPDGAutoBakeEnabled_Implementation() const; \
	virtual bool SetPDGAutoBakeEnabled_Implementation(bool bInAutoBakeEnabled); \
	virtual bool PDGBakeAllOutputsWithSettings_Implementation(const EHoudiniEngineBakeOption InBakeOption, const EPDGBakeSelectionOption InBakeSelection, const EPDGBakePackageReplaceModeOption InBakeReplacementMode, bool bInRecenterBakedActors); \
	virtual bool PDGBakeAllOutputs_Implementation(); \
	virtual bool PDGCookNode_Implementation(const FString& InNetworkRelativePath, const FString& InNodeRelativePath); \
	virtual bool PDGCookOutputsForNetwork_Implementation(const FString& InNetworkRelativePath); \
	virtual bool PDGDirtyNode_Implementation(const FString& InNetworkRelativePath, const FString& InNodeRelativePath); \
	virtual bool PDGDirtyNetwork_Implementation(const FString& InNetworkRelativePath); \
	virtual bool PDGDirtyAllNetworks_Implementation(); \
	virtual bool GetPDGTOPNodePaths_Implementation(const FString& InNetworkRelativePath, TArray<FString>& OutTOPNodePaths) const; \
	virtual bool GetPDGTOPNetworkPaths_Implementation(TArray<FString>& OutTOPNetworkPaths) const; \
	virtual bool HasPDGAssetLink_Implementation() const; \
	virtual EHoudiniProxyRefineRequestResult RefineAllCurrentProxyOutputs_Implementation(bool bInSilent); \
	virtual bool IsOutputCurrentProxyAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual bool HasAnyCurrentProxyOutputAt_Implementation(const int32 InIndex) const; \
	virtual bool HasAnyCurrentProxyOutput_Implementation() const; \
	virtual bool BakeOutputObjectAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FName InBakeName, const EHoudiniLandscapeOutputBakeType InLandscapeBakeType); \
	virtual bool SetOutputBakeNameFallbackAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FString& InBakeName); \
	virtual bool GetOutputBakeNameFallbackAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, FString& OutBakeName) const; \
	virtual UObject* GetOutputComponentAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual UObject* GetOutputObjectAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual bool GetOutputIdentifiersAt_Implementation(const int32 InIndex, TArray<FHoudiniPublicAPIOutputObjectIdentifier>& OutIdentifiers) const; \
	virtual EHoudiniOutputType GetOutputTypeAt_Implementation(const int32 InIndex) const; \
	virtual int32 GetNumOutputs_Implementation() const; \
	virtual bool GetInputParameters_Implementation(TMap<FName,UHoudiniPublicAPIInput*>& OutInputs); \
	virtual bool SetInputParameters_Implementation(TMap<FName,UHoudiniPublicAPIInput*> const& InInputs); \
	virtual bool GetInputParameter_Implementation(FName const& InParameterName, UHoudiniPublicAPIInput*& OutInput); \
	virtual bool SetInputParameter_Implementation(FName const& InParameterName, const UHoudiniPublicAPIInput* InInput); \
	virtual bool GetInputsAtIndices_Implementation(TMap<int32,UHoudiniPublicAPIInput*>& OutInputs); \
	virtual bool SetInputsAtIndices_Implementation(TMap<int32,UHoudiniPublicAPIInput*> const& InInputs); \
	virtual bool GetInputAtIndex_Implementation(const int32 InNodeInputIndex, UHoudiniPublicAPIInput*& OutInput); \
	virtual bool SetInputAtIndex_Implementation(const int32 InNodeInputIndex, const UHoudiniPublicAPIInput* InInput); \
	virtual int32 GetNumNodeInputs_Implementation() const; \
	virtual UHoudiniPublicAPIInput* CreateEmptyInput_Implementation(TSubclassOf<UHoudiniPublicAPIInput> InInputClass); \
	virtual bool SetParameterTuples_Implementation(TMap<FName,FHoudiniParameterTuple> const& InParameterTuples); \
	virtual bool GetParameterTuples_Implementation(TMap<FName,FHoudiniParameterTuple>& OutParameterTuples) const; \
	virtual bool TriggerButtonParameter_Implementation(FName InButtonParameterName); \
	virtual bool GetColorRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint>& OutRampPoints) const; \
	virtual bool SetColorRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint> const& InRampPoints, bool bInMarkChanged); \
	virtual bool GetColorRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, FLinearColor& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const; \
	virtual bool SetColorRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, FLinearColor const& InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged); \
	virtual bool GetFloatRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint>& OutRampPoints) const; \
	virtual bool SetFloatRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint> const& InRampPoints, bool bInMarkChanged); \
	virtual bool GetFloatRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, float& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const; \
	virtual bool SetFloatRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, const float InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged); \
	virtual bool GetRampParameterNumPoints_Implementation(FName InParameterTupleName, int32& OutNumPoints) const; \
	virtual bool SetRampParameterNumPoints_Implementation(FName InParameterTupleName, const int32 InNumPoints) const; \
	virtual bool GetAssetRefParameterValue_Implementation(FName InParameterTupleName, UObject*& OutValue, int32 InAtIndex) const; \
	virtual bool SetAssetRefParameterValue_Implementation(FName InParameterTupleName, UObject* InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetStringParameterValue_Implementation(FName InParameterTupleName, FString& OutValue, int32 InAtIndex) const; \
	virtual bool SetStringParameterValue_Implementation(FName InParameterTupleName, const FString& InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetBoolParameterValue_Implementation(FName InParameterTupleName, bool& OutValue, int32 InAtIndex) const; \
	virtual bool SetBoolParameterValue_Implementation(FName InParameterTupleName, bool InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetIntParameterValue_Implementation(FName InParameterTupleName, int32& OutValue, int32 InAtIndex) const; \
	virtual bool SetIntParameterValue_Implementation(FName InParameterTupleName, int32 InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetColorParameterValue_Implementation(FName InParameterTupleName, FLinearColor& OutValue) const; \
	virtual bool SetColorParameterValue_Implementation(FName InParameterTupleName, FLinearColor const& InValue, bool bInMarkChanged); \
	virtual bool GetFloatParameterValue_Implementation(FName InParameterTupleName, float& OutValue, int32 InAtIndex) const; \
	virtual bool SetFloatParameterValue_Implementation(FName InParameterTupleName, float InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual TArray<AActor*> GetBakedOutputActors_Implementation(); \
	virtual bool GetReplacePreviousBake_Implementation() const; \
	virtual bool SetReplacePreviousBake_Implementation(bool bInReplacePreviousBake); \
	virtual bool GetRecenterBakedActors_Implementation() const; \
	virtual bool SetRecenterBakedActors_Implementation(bool bInRecenterBakedActors); \
	virtual bool GetRemoveOutputAfterBake_Implementation() const; \
	virtual bool SetRemoveOutputAfterBake_Implementation(bool bInRemoveOutputAfterBake); \
	virtual bool GetBakeMethod_Implementation(EHoudiniEngineBakeOption& OutBakeMethod); \
	virtual bool SetBakeMethod_Implementation(const EHoudiniEngineBakeOption InBakeMethod); \
	virtual bool IsAutoBakeEnabled_Implementation() const; \
	virtual bool SetAutoBakeEnabled_Implementation(bool bInAutoBakeEnabled); \
	virtual bool BakeAllOutputsWithSettings_Implementation(EHoudiniEngineBakeOption InBakeOption, bool bInReplacePreviousBake, bool bInRemoveTempOutputsOnSuccess, bool bInRecenterBakedActors); \
	virtual bool BakeAllOutputs_Implementation(); \
	virtual bool IsCookOnAssetInputCookEnabled_Implementation() const; \
	virtual bool SetCookOnAssetInputCook_Implementation(bool bInSetEnabled); \
	virtual bool IsCookOnTransformChangeEnabled_Implementation() const; \
	virtual bool SetCookOnTransformChange_Implementation(bool bInSetEnabled); \
	virtual bool IsCookOnParameterOrInputChangesEnabled_Implementation() const; \
	virtual bool SetCookOnParameterOrInputChanges_Implementation(bool bInSetEnabled); \
	virtual bool IsDoNotGenerateOutputsEnabled_Implementation() const; \
	virtual bool SetDoNotGenerateOutputs_Implementation(bool bInSetEnabled); \
	virtual bool IsAutoCookingEnabled_Implementation() const; \
	virtual bool SetAutoCookingEnabled_Implementation(bool bInSetEnabled); \
	virtual bool Recook_Implementation(); \
	virtual bool Rebuild_Implementation(); \
	virtual bool DeleteInstantiatedAsset_Implementation(); \
	virtual bool SetBakeFolder_Implementation(FDirectoryPath const& InDirectoryPath) const; \
	virtual bool GetBakeFolder_Implementation(FDirectoryPath& OutDirectoryPath) const; \
	virtual bool SetTemporaryCookFolder_Implementation(FDirectoryPath const& InDirectoryPath) const; \
	virtual bool GetTemporaryCookFolder_Implementation(FDirectoryPath& OutDirectoryPath) const; \
	virtual UHoudiniAssetComponent* GetHoudiniAssetComponent_Implementation() const; \
	virtual AHoudiniAssetActor* GetHoudiniAssetActor_Implementation() const; \
	virtual bool WrapHoudiniAssetObject_Implementation(UObject* InHoudiniAssetObjectToWrap); \
	DECLARE_FUNCTION(execHandleOnHoudiniProxyMeshesRefinedGlobal); \
	DECLARE_FUNCTION(execHandleOnHoudiniPDGAssetLinkPostBake); \
	DECLARE_FUNCTION(execHandleOnHoudiniPDGAssetLinkTOPNetPostCook); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentPostBake); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentPostCook); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentStateChange); \
	DECLARE_FUNCTION(execBindToPDGAssetLink); \
	DECLARE_FUNCTION(execClearHoudiniAssetObject); \
	DECLARE_FUNCTION(execGetPDGBakingReplacementMode); \
	DECLARE_FUNCTION(execSetPDGBakingReplacementMode); \
	DECLARE_FUNCTION(execGetPDGRecenterBakedActors); \
	DECLARE_FUNCTION(execSetPDGRecenterBakedActors); \
	DECLARE_FUNCTION(execGetPDGBakeSelection); \
	DECLARE_FUNCTION(execSetPDGBakeSelection); \
	DECLARE_FUNCTION(execGetPDGBakeMethod); \
	DECLARE_FUNCTION(execSetPDGBakeMethod); \
	DECLARE_FUNCTION(execIsPDGAutoBakeNodesWithFailedWorkItemsEnabled); \
	DECLARE_FUNCTION(execSetPDGAutoBakeNodesWithFailedWorkItemsEnabled); \
	DECLARE_FUNCTION(execIsPDGAutoBakeEnabled); \
	DECLARE_FUNCTION(execSetPDGAutoBakeEnabled); \
	DECLARE_FUNCTION(execPDGBakeAllOutputsWithSettings); \
	DECLARE_FUNCTION(execPDGBakeAllOutputs); \
	DECLARE_FUNCTION(execPDGCookNode); \
	DECLARE_FUNCTION(execPDGCookOutputsForNetwork); \
	DECLARE_FUNCTION(execPDGDirtyNode); \
	DECLARE_FUNCTION(execPDGDirtyNetwork); \
	DECLARE_FUNCTION(execPDGDirtyAllNetworks); \
	DECLARE_FUNCTION(execGetPDGTOPNodePaths); \
	DECLARE_FUNCTION(execGetPDGTOPNetworkPaths); \
	DECLARE_FUNCTION(execHasPDGAssetLink); \
	DECLARE_FUNCTION(execRefineAllCurrentProxyOutputs); \
	DECLARE_FUNCTION(execIsOutputCurrentProxyAt); \
	DECLARE_FUNCTION(execHasAnyCurrentProxyOutputAt); \
	DECLARE_FUNCTION(execHasAnyCurrentProxyOutput); \
	DECLARE_FUNCTION(execBakeOutputObjectAt); \
	DECLARE_FUNCTION(execSetOutputBakeNameFallbackAt); \
	DECLARE_FUNCTION(execGetOutputBakeNameFallbackAt); \
	DECLARE_FUNCTION(execGetOutputComponentAt); \
	DECLARE_FUNCTION(execGetOutputObjectAt); \
	DECLARE_FUNCTION(execGetOutputIdentifiersAt); \
	DECLARE_FUNCTION(execGetOutputTypeAt); \
	DECLARE_FUNCTION(execGetNumOutputs); \
	DECLARE_FUNCTION(execGetInputParameters); \
	DECLARE_FUNCTION(execSetInputParameters); \
	DECLARE_FUNCTION(execGetInputParameter); \
	DECLARE_FUNCTION(execSetInputParameter); \
	DECLARE_FUNCTION(execGetInputsAtIndices); \
	DECLARE_FUNCTION(execSetInputsAtIndices); \
	DECLARE_FUNCTION(execGetInputAtIndex); \
	DECLARE_FUNCTION(execSetInputAtIndex); \
	DECLARE_FUNCTION(execGetNumNodeInputs); \
	DECLARE_FUNCTION(execCreateEmptyInput); \
	DECLARE_FUNCTION(execSetParameterTuples); \
	DECLARE_FUNCTION(execGetParameterTuples); \
	DECLARE_FUNCTION(execTriggerButtonParameter); \
	DECLARE_FUNCTION(execGetColorRampParameterPoints); \
	DECLARE_FUNCTION(execSetColorRampParameterPoints); \
	DECLARE_FUNCTION(execGetColorRampParameterPointValue); \
	DECLARE_FUNCTION(execSetColorRampParameterPointValue); \
	DECLARE_FUNCTION(execGetFloatRampParameterPoints); \
	DECLARE_FUNCTION(execSetFloatRampParameterPoints); \
	DECLARE_FUNCTION(execGetFloatRampParameterPointValue); \
	DECLARE_FUNCTION(execSetFloatRampParameterPointValue); \
	DECLARE_FUNCTION(execGetRampParameterNumPoints); \
	DECLARE_FUNCTION(execSetRampParameterNumPoints); \
	DECLARE_FUNCTION(execGetAssetRefParameterValue); \
	DECLARE_FUNCTION(execSetAssetRefParameterValue); \
	DECLARE_FUNCTION(execGetStringParameterValue); \
	DECLARE_FUNCTION(execSetStringParameterValue); \
	DECLARE_FUNCTION(execGetBoolParameterValue); \
	DECLARE_FUNCTION(execSetBoolParameterValue); \
	DECLARE_FUNCTION(execGetIntParameterValue); \
	DECLARE_FUNCTION(execSetIntParameterValue); \
	DECLARE_FUNCTION(execGetColorParameterValue); \
	DECLARE_FUNCTION(execSetColorParameterValue); \
	DECLARE_FUNCTION(execGetFloatParameterValue); \
	DECLARE_FUNCTION(execSetFloatParameterValue); \
	DECLARE_FUNCTION(execGetBakedOutputActors); \
	DECLARE_FUNCTION(execGetReplacePreviousBake); \
	DECLARE_FUNCTION(execSetReplacePreviousBake); \
	DECLARE_FUNCTION(execGetRecenterBakedActors); \
	DECLARE_FUNCTION(execSetRecenterBakedActors); \
	DECLARE_FUNCTION(execGetRemoveOutputAfterBake); \
	DECLARE_FUNCTION(execSetRemoveOutputAfterBake); \
	DECLARE_FUNCTION(execGetBakeMethod); \
	DECLARE_FUNCTION(execSetBakeMethod); \
	DECLARE_FUNCTION(execIsAutoBakeEnabled); \
	DECLARE_FUNCTION(execSetAutoBakeEnabled); \
	DECLARE_FUNCTION(execBakeAllOutputsWithSettings); \
	DECLARE_FUNCTION(execBakeAllOutputs); \
	DECLARE_FUNCTION(execIsCookOnAssetInputCookEnabled); \
	DECLARE_FUNCTION(execSetCookOnAssetInputCook); \
	DECLARE_FUNCTION(execIsCookOnTransformChangeEnabled); \
	DECLARE_FUNCTION(execSetCookOnTransformChange); \
	DECLARE_FUNCTION(execIsCookOnParameterOrInputChangesEnabled); \
	DECLARE_FUNCTION(execSetCookOnParameterOrInputChanges); \
	DECLARE_FUNCTION(execIsDoNotGenerateOutputsEnabled); \
	DECLARE_FUNCTION(execSetDoNotGenerateOutputs); \
	DECLARE_FUNCTION(execIsAutoCookingEnabled); \
	DECLARE_FUNCTION(execSetAutoCookingEnabled); \
	DECLARE_FUNCTION(execRecook); \
	DECLARE_FUNCTION(execRebuild); \
	DECLARE_FUNCTION(execDeleteInstantiatedAsset); \
	DECLARE_FUNCTION(execSetBakeFolder); \
	DECLARE_FUNCTION(execGetBakeFolder); \
	DECLARE_FUNCTION(execSetTemporaryCookFolder); \
	DECLARE_FUNCTION(execGetTemporaryCookFolder); \
	DECLARE_FUNCTION(execGetHoudiniAssetComponent); \
	DECLARE_FUNCTION(execGetHoudiniAssetActor); \
	DECLARE_FUNCTION(execGetHoudiniAssetObject); \
	DECLARE_FUNCTION(execWrapHoudiniAssetObject); \
	DECLARE_FUNCTION(execCanWrapHoudiniObject); \
	DECLARE_FUNCTION(execCreateEmptyWrapper); \
	DECLARE_FUNCTION(execCreateWrapper);


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_CALLBACK_WRAPPERS
#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetWrapper(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetWrapper, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetWrapper)


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPIAssetWrapper(UHoudiniPublicAPIAssetWrapper&&); \
	UHoudiniPublicAPIAssetWrapper(const UHoudiniPublicAPIAssetWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetWrapper) \
	NO_API virtual ~UHoudiniPublicAPIAssetWrapper();


#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_248_PROLOG
#define FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_CALLBACK_WRAPPERS \
	FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_INCLASS_NO_PURE_DECLS \
	FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIAssetWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projectlincolnlogs_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
