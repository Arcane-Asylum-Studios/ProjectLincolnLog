// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLiveLink_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoudiniLiveLink;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoudiniLiveLink()
	{
		if (!Z_Registration_Info_UPackage__Script_HoudiniLiveLink.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoudiniLiveLink",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA12A49E1,
				0x770F8171,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoudiniLiveLink.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HoudiniLiveLink.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoudiniLiveLink(Z_Construct_UPackage__Script_HoudiniLiveLink, TEXT("/Script/HoudiniLiveLink"), Z_Registration_Info_UPackage__Script_HoudiniLiveLink, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA12A49E1, 0x770F8171));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
