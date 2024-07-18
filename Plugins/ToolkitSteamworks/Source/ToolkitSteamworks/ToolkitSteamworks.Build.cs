/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

using UnrealBuildTool;
using System.IO;

public class ToolkitSteamworks : ModuleRules
{
	public ToolkitSteamworks(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        if (Directory.Exists(Target.UEThirdPartySourceDirectory + "Steamworks/"))
        {
            PublicDefinitions.Add("STEAM_SDK_INSTALLED");
        }

		PublicDefinitions.Add("STEAM_MAJOR=1");
        PublicDefinitions.Add("STEAM_MINOR=57");

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
                "Slate",
				"SlateCore",
                "SteamShared",
            }
		);

        AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
    }
}
