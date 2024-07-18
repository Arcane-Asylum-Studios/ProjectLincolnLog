// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniNiagara_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoudiniNiagara;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoudiniNiagara()
	{
		if (!Z_Registration_Info_UPackage__Script_HoudiniNiagara.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoudiniNiagara",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5A3971F3,
				0x8AF4C723,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoudiniNiagara.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HoudiniNiagara.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoudiniNiagara(Z_Construct_UPackage__Script_HoudiniNiagara, TEXT("/Script/HoudiniNiagara"), Z_Registration_Info_UPackage__Script_HoudiniNiagara, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5A3971F3, 0x8AF4C723));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
