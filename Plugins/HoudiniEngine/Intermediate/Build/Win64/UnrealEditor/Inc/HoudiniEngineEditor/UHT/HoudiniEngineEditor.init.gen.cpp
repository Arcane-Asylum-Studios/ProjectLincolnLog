// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineEditor_init() {}
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoudiniEngineEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_HoudiniEngineEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoudiniEngineEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x0C99295B,
				0xFAAFAE50,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoudiniEngineEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HoudiniEngineEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoudiniEngineEditor(Z_Construct_UPackage__Script_HoudiniEngineEditor, TEXT("/Script/HoudiniEngineEditor"), Z_Registration_Info_UPackage__Script_HoudiniEngineEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0C99295B, 0xFAAFAE50));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
