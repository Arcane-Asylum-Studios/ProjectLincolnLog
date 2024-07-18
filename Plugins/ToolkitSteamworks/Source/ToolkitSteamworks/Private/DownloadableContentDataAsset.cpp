/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/
#include "DownloadableContentDataAsset.h"

FString UDownloadableContentDataAsset::GetDisplayName() const
{
    STEAM_CLIENT(FString());
    FString Result = FString("None Found");
    int32 Count = SteamApps()->GetDLCCount();

    for (int32 i = 0; i < Count; ++i)
    {
        AppId_t AppID;
        bool Available;
        FString Name;

        Name.Reserve(512);
        bool Success = SteamApps()->BGetDLCDataByIndex(i, &AppID, &Available, TCHAR_TO_UTF8(*Name), 512);

        if (Success && AppID == StaticCast<uint32>(AppId)) 
        {
            Result = Name;
            break;
        }
    }

    return Result;
}

bool UDownloadableContentDataAsset::GetIsAvailable() const
{
    STEAM_CLIENT(false);
    bool Available;
    int32 Count = SteamApps()->GetDLCCount();

    for (int32 i = 0; i < Count; ++i)
    {
        AppId_t AppID;
        FString Name;

        Name.Reserve(512);
        bool Success = SteamApps()->BGetDLCDataByIndex(i, &AppID, &Available, TCHAR_TO_UTF8(*Name), 512);

        if (Success && AppID == StaticCast<uint32>(AppId))
        {
            break;
        }
    }

    return Available;
}

bool UDownloadableContentDataAsset::GetIsSubscribed() const
{
    STEAM_CLIENT(false);
	return SteamApps()->BIsSubscribedApp(StaticCast<uint32>(AppId));
}

bool UDownloadableContentDataAsset::GetIsInstalled() const
{
    STEAM_CLIENT(false);
    return SteamApps()->BIsDlcInstalled(StaticCast<uint32>(AppId));
}

FString UDownloadableContentDataAsset::GetInstallDirectory() const
{
    STEAM_CLIENT(FString());
    char Path[2048];
    if (SteamApps()->GetAppInstallDir(StaticCast<uint32>(AppId), Path, sizeof(Path)) > 0)
    {
        FString InstallDir(Path);
        InstallDir.TrimStartAndEndInline();
        return InstallDir;
    }
    else
    {
        return FString();
    }
}

float UDownloadableContentDataAsset::GetDownloadProgress() const
{
    STEAM_CLIENT(0.0f);
    uint64 Current = 0;
    uint64 Total = 0;

    bool IsDownloading = SteamApps()->GetDlcDownloadProgress(StaticCast<uint32>(AppId), &Current, &Total);

    if (IsDownloading)
    {
        return static_cast<float>(Current) / static_cast<float>(Total);
    }
    else
    {
        return 0.0f;
    }
}

FDateTime UDownloadableContentDataAsset::GetEarliestPurchaseTime() const
{
    STEAM_CLIENT(FDateTime());
    int32 UnixTime = SteamApps()->GetEarliestPurchaseUnixTime(StaticCast<uint32>(AppId));
    return FDateTime::FromUnixTimestamp(UnixTime);
}

void UDownloadableContentDataAsset::RequestInstall() const
{
    STEAM_CLIENT(;);
    SteamApps()->InstallDLC(StaticCast<uint32>(AppId));
}

void UDownloadableContentDataAsset::RequestUninstall() const
{
    STEAM_CLIENT(;);
    SteamApps()->UninstallDLC(StaticCast<uint32>(AppId));
}
