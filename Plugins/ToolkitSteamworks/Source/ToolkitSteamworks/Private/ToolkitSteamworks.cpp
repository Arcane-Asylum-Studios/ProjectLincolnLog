/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#include "ToolkitSteamworks.h"

#define LOCTEXT_NAMESPACE "FToolkitSteamworksModule"

void FToolkitSteamworksModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FToolkitSteamworksModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FToolkitSteamworksModule, ToolkitSteamworks)