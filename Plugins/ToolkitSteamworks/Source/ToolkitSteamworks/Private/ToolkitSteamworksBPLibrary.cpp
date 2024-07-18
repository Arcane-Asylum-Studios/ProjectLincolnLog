/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#include "ToolkitSteamworksBPLibrary.h"
#include "ToolkitSteamworks.h"

UToolkitSteamworksBPLibrary::UToolkitSteamworksBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	
}

bool UToolkitSteamworksBPLibrary::IsSteamInitialized()
{
#if UE_SERVER
    if (SteamGameServer() == nullptr)
        return false;
#else
    if (SteamClient() == nullptr)
        return false;
#endif
    else
        return true;
}

bool UToolkitSteamworksBPLibrary::SteamClientInitialize()
{
    return SteamAPI_Init();
}

bool UToolkitSteamworksBPLibrary::SteamServerInitialize(FString Ip, int32 gamePort, int32 queryPort, UEServerMode mode, FString version)
{
    uint32 uIp = HeathenTools::IPAddress(Ip);
    uint16 gPort = static_cast<uint16>(gamePort);
    uint16 qPort = static_cast<uint16>(queryPort);
    return SteamGameServer_Init(uIp, gPort, qPort, static_cast<EServerMode>(mode), StringCast<ANSICHAR>(*version).Get());
}

void UToolkitSteamworksBPLibrary::SteamRunCallbacks()
{
#if UE_SERVER
    SteamGameServer_RunCallbacks();
#else
    SteamAPI_RunCallbacks();
#endif
}

int32 UToolkitSteamworksBPLibrary::SteamGetAppId()
{
    uint32 id = SteamUtils()->GetAppID();
    return static_cast<int32>(id);
}

void UToolkitSteamworksBPLibrary::SteamShutdown()
{
#if UE_SERVER
    SteamGameServer_Shutdown();
#else
    SteamAPI_Shutdown();
#endif
}

int32 UToolkitSteamworksBPLibrary::SteamGameIdToAppId(int64 GameId)
{
    CGameID game = CGameID(static_cast<uint64>(GameId));
    return static_cast<int32>(game.AppID());
}

int64 UToolkitSteamworksBPLibrary::SteamAppIdToGameId(int32 AppId)
{
    CGameID game = CGameID(AppId);
    return static_cast<int64>(game.m_ulGameID);
}

int64 UToolkitSteamworksBPLibrary::SteamAccountIdToSteamId(int32 AccountId, UEAccountType Type)
{
    CSteamID steamId = CSteamID(static_cast<uint32>(AccountId), EUniverse::k_EUniversePublic, static_cast<EAccountType>(Type));
    return static_cast<int64>(steamId.ConvertToUint64());
}

int32 UToolkitSteamworksBPLibrary::SteamSteamIdToAccountId(int64 SteamId)
{
    CSteamID steam = CSteamID(static_cast<uint64>(SteamId));
    return static_cast<int32>(steam.GetAccountID());
}

FDateTime UToolkitSteamworksBPLibrary::SteamGetServerRealTime()
{
    return FDateTime::FromUnixTimestamp(SteamUtils()->GetServerRealTime());
}

bool UToolkitSteamworksBPLibrary::SteamClientShouldRestart(int32 AppId)
{
#if WITH_EDITOR
    FFileHelper::SaveStringToFile(FString::FromInt(AppId), TEXT("steam_appid.txt"));
    return false;
#else
    return SteamAPI_RestartAppIfNecessary(static_cast<AppId_t>(AppId));
#endif
}

FDLCData UToolkitSteamworksBPLibrary::SteamGetDLCDataByIndex(int32 Index)
{
    STEAM_CLIENT(FDLCData());

    FDLCData result;

    AppId_t appId;
    bool available;
    char name[128];
    if (SteamApps()->BGetDLCDataByIndex(Index, &appId, &available, name, 128))
    {

        result.AppId = static_cast<int32>(appId);
        result.bAvailable = available;
        result.Name = FString(name);
    }

    return result;
}

bool UToolkitSteamworksBPLibrary::SteamIsAppInstalled(int32 appId)
{
	STEAM_CLIENT(false);
	AppId_t app = static_cast<AppId_t>(appId);
	return SteamApps()->BIsAppInstalled(app);
}

bool UToolkitSteamworksBPLibrary::SteamIsCybercafe()
{
	STEAM_CLIENT(false);
	return SteamApps()->BIsCybercafe();
}

bool UToolkitSteamworksBPLibrary::SteamIsDlcInstalled(int32 appId)
{
	STEAM_CLIENT(false);
	AppId_t app = static_cast<AppId_t>(appId);
	return SteamApps()->BIsDlcInstalled(app);
}

bool UToolkitSteamworksBPLibrary::SteamIsLowViolence()
{
	STEAM_CLIENT(false);
	return SteamApps()->BIsLowViolence();
}

bool UToolkitSteamworksBPLibrary::SteamIsSubscribed()
{
	STEAM_CLIENT(false);
	return SteamApps()->BIsSubscribed();
}

bool UToolkitSteamworksBPLibrary::SteamIsSubscribedApp(int32 appId)
{
	STEAM_CLIENT(false);
	AppId_t app = static_cast<AppId_t>(appId);
	return SteamApps()->BIsSubscribedApp(app);
}

bool UToolkitSteamworksBPLibrary::SteamIsSubscribedFromFamilySharing()
{
	STEAM_CLIENT(false);
	return SteamApps()->BIsSubscribedFromFamilySharing();
}

bool UToolkitSteamworksBPLibrary::SteamIsSubscribedFromFreeWeekend()
{
	STEAM_CLIENT(false);
	return SteamApps()->BIsSubscribedFromFreeWeekend();
}

FTimeTrial UToolkitSteamworksBPLibrary::SteamIsTimedTrial()
{
	STEAM_CLIENT(FTimeTrial());
	uint32 played;
	uint32 max;
	bool isTT = SteamApps()->BIsTimedTrial(&max, &played);
	FTimeTrial result;
	result.bIsTrial = isTT;
	result.AllowedSeconds = max;
	result.PlayedSeconds = played;
	return result;
}

bool UToolkitSteamworksBPLibrary::SteamIsVACBanned()
{
	STEAM_CLIENT(false);
	return SteamApps()->BIsVACBanned();
}

int32 UToolkitSteamworksBPLibrary::SteamGetAppBuildId()
{
	STEAM_CLIENT(0);
	return SteamApps()->GetAppBuildId();
}

FString UToolkitSteamworksBPLibrary::SteamGetAppInstallDir(int32 appId)
{
	STEAM_CLIENT(FString());
	AppId_t app = static_cast<AppId_t>(appId);
	char buffer[1024];
	int32 written = SteamApps()->GetAppInstallDir(app, buffer, 1024);

	if (written > 0)
		return FString(buffer, written);
	else
		return FString();
}

int64 UToolkitSteamworksBPLibrary::SteamGetAppOwner()
{
	STEAM_CLIENT(0);
	return static_cast<int64>(SteamApps()->GetAppOwner().ConvertToUint64());
}

TArray<FString> UToolkitSteamworksBPLibrary::SteamGetAvailableGameLanguages()
{
	STEAM_CLIENT(TArray<FString>());

	const char* result = SteamApps()->GetAvailableGameLanguages();
	FString raw(result);
	TArray<FString> languages;
	raw.ParseIntoArray(languages, TEXT(","));

	return languages;
}

FString UToolkitSteamworksBPLibrary::SteamGetCurrentBetaName()
{
	STEAM_CLIENT(FString());
	char buffer[128];
	SteamApps()->GetCurrentBetaName(buffer, 128);
	return FString(buffer);
}

FString UToolkitSteamworksBPLibrary::SteamGetCurrentGameLanguage()
{
	STEAM_CLIENT(FString());
	return FString(SteamApps()->GetCurrentGameLanguage());
}

int32 UToolkitSteamworksBPLibrary::SteamGetDLCCount()
{
	STEAM_CLIENT(0);
	return SteamApps()->GetDLCCount();
}

float UToolkitSteamworksBPLibrary::SteamGetDlcDownloadProgress(int32 appId)
{
	STEAM_CLIENT(0.0f);
	AppId_t app = static_cast<AppId_t>(appId);
	uint64 cur;
	uint64 max;
	SteamApps()->GetDlcDownloadProgress(app, &cur, &max);

	if (max > 0)
		return static_cast<float>(cur) / static_cast<float>(max);
	else
		return 0.0f;
}

FDateTime UToolkitSteamworksBPLibrary::SteamGetEarliestPurchase(int32 appId)
{
	STEAM_CLIENT(FDateTime());
	AppId_t app = static_cast<AppId_t>(appId);

	return FDateTime::FromUnixTimestamp(SteamApps()->GetEarliestPurchaseUnixTime(app));
}

TArray<int32> UToolkitSteamworksBPLibrary::SteamGetInstalledDepots(int32 appId)
{
	STEAM_CLIENT(TArray<int32>());
	AppId_t app = static_cast<AppId_t>(appId);
	DepotId_t depots[64];
	int32 count = SteamApps()->GetInstalledDepots(app, depots, 64);

	if (count <= 0)
		return TArray<int32>();
	else
	{
		TArray<int32> results;
		for (int i = 0; i < count; i++)
			results.Add(static_cast<int32>(depots[i]));

		return results;
	}
}

FString UToolkitSteamworksBPLibrary::SteamGetLaunchCommandLine()
{
	STEAM_CLIENT(FString());
	char commandLine[256];
	int32 count = SteamApps()->GetLaunchCommandLine(commandLine, 256);
	if (count > 0)
		return FString(commandLine);
	else
		return FString();
}

FString UToolkitSteamworksBPLibrary::SteamGetLaunchQueryParam(FString key)
{
	STEAM_CLIENT(FString());
	const char* value = SteamApps()->GetLaunchQueryParam(StringCast<ANSICHAR>(*key).Get());

	return FString(value);
}

void UToolkitSteamworksBPLibrary::SteamInstallDLC(int32 appId)
{
	STEAM_CLIENT(;);

	SteamApps()->InstallDLC(static_cast<AppId_t>(appId));
}

bool UToolkitSteamworksBPLibrary::SteamMarkContentCorrupt(bool missingFilesOnly)
{
	STEAM_CLIENT(false);
	return SteamApps()->MarkContentCorrupt(missingFilesOnly);
}

void UToolkitSteamworksBPLibrary::SteamUninstallDLC(int32 appId)
{
	STEAM_CLIENT(;);
	AppId_t app = static_cast<AppId_t>(appId);
	SteamApps()->UninstallDLC(app);
}

void UToolkitSteamworksBPLibrary::SteamServerAssociateWithClan(int64 clanId, FAssociateWithClanResult callback)
{
	STEAM_SERVER(;);
	FAssociateWithClanResultLinker* linker = new FAssociateWithClanResultLinker(clanId, callback);
}

UEBeginAuthSessionResult UToolkitSteamworksBPLibrary::SteamServerBeginAuthSession(TArray<uint8> authTicket, int64 steamId)
{
	STEAM_SERVER(UEBeginAuthSessionResult::EPC_InvalidTicket);

	// Convert the FString AuthTicket to a byte array (uint8)
	TArray<uint8> TicketData;
	int32 TicketLength = authTicket.Num() * sizeof(uint8); // Get the length dynamically

	TicketData.SetNumUninitialized(TicketLength);
	FMemory::Memcpy(TicketData.GetData(), authTicket.GetData(), TicketLength);

	// Call the actual BeginAuthSession function with the appropriate arguments
	EBeginAuthSessionResult result = SteamGameServer()->BeginAuthSession(TicketData.GetData(), TicketLength, CSteamID(static_cast<uint64>(steamId)));

	return static_cast<UEBeginAuthSessionResult>(result);
}

bool UToolkitSteamworksBPLibrary::SteamServerLoggedOn()
{
	STEAM_SERVER(false);
	return SteamGameServer()->BLoggedOn();
}

bool UToolkitSteamworksBPLibrary::SteamServerSecure()
{
	STEAM_SERVER(false);
	return SteamGameServer()->BSecure();
}

void UToolkitSteamworksBPLibrary::SteamServerCancelAuthTicket(int32 authTicketHandle)
{
	STEAM_SERVER(;);
	SteamGameServer()->CancelAuthTicket(static_cast<HAuthTicket>(authTicketHandle));
}

void UToolkitSteamworksBPLibrary::SteamServerClearAllKeyValues()
{
	STEAM_SERVER(;);
	SteamGameServer()->ClearAllKeyValues();
}

void UToolkitSteamworksBPLibrary::SteamServerComputeNewPlayerCompatibility(int64 userId, FComputeNewPlayerCompatibilityResult callback)
{
	STEAM_SERVER(;);
	FComputeNewPlayerCompatibilityResultLinker* linker = new FComputeNewPlayerCompatibilityResultLinker(userId, callback);
}

void UToolkitSteamworksBPLibrary::SteamServerSetAdvertiseServerActive(bool active)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetAdvertiseServerActive(active);
}

void UToolkitSteamworksBPLibrary::SteamServerEndAuthSession(int64 steamId)
{
	STEAM_SERVER(;);
	SteamGameServer()->EndAuthSession(CSteamID(static_cast<uint64>(steamId)));
}

FAuthTicketData UToolkitSteamworksBPLibrary::SteamServerGetAuthSessionTicket(int64 forSteamId)
{
	STEAM_SERVER(FAuthTicketData());

	TArray<uint8> buffer;
	buffer.SetNumUninitialized(1024);
	uint32 BytesWritten = 0;
	SteamNetworkingIdentity Id{};
	Id.m_eType = ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_SteamID;
	Id.SetSteamID(CSteamID(static_cast<uint64>(forSteamId)));
	
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	HAuthTicket handle = SteamGameServer()->GetAuthSessionTicket(buffer.GetData(), 1024, &BytesWritten, &Id);
#else
	HAuthTicket handle = SteamGameServer()->GetAuthSessionTicket(buffer.GetData(), 1024, &BytesWritten);
#endif

	FAuthTicketData result;
	result.AuthTicketHandle = static_cast<int32>(handle);
	result.Ticket = buffer;

	return result;
}

/// <summary>
/// Currently only working with IPv4
/// </summary>
/// <returns></returns>
FString UToolkitSteamworksBPLibrary::SteamServerGetPublicIP()
{
	STEAM_SERVER(FString());
	SteamIPAddress_t address = SteamGameServer()->GetPublicIP();
	return HeathenTools::IPAddress(address.m_unIPv4);
}

int64 UToolkitSteamworksBPLibrary::SteamServerGetSteamID()
{
	STEAM_SERVER(0);
	return static_cast<int64>(SteamGameServer()->GetSteamID().ConvertToUint64());
}

void UToolkitSteamworksBPLibrary::SteamServerSetServerSettings(FString name, FString description, FString product, FString map, FString modDirectory, bool passwordProtected, bool isDedicated, int maxPlayers, int maxBots, FString gameData, FString gameTags, TMap<FString, FString> keyValues)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetServerName(StringCast<ANSICHAR>(*name).Get());
	SteamGameServer()->SetGameDescription(StringCast<ANSICHAR>(*description).Get());
	SteamGameServer()->SetProduct(StringCast<ANSICHAR>(*product).Get());
	SteamGameServer()->SetMapName(StringCast<ANSICHAR>(*map).Get());
	SteamGameServer()->SetModDir(StringCast<ANSICHAR>(*modDirectory).Get());
	SteamGameServer()->SetPasswordProtected(passwordProtected);
	SteamGameServer()->SetDedicatedServer(isDedicated);
	SteamGameServer()->SetMaxPlayerCount(maxPlayers);
	SteamGameServer()->SetBotPlayerCount(maxBots);
	if (!gameData.IsEmpty())
		SteamGameServer()->SetGameData(StringCast<ANSICHAR>(*gameData).Get());
	if (!gameTags.IsEmpty())
		SteamGameServer()->SetGameTags(StringCast<ANSICHAR>(*gameTags).Get());
	if (keyValues.Num() > 0)
	{
		for (auto& Elem : keyValues)
		{
			SteamGameServer()->SetKeyValue(StringCast<ANSICHAR>(*Elem.Key).Get(), StringCast<ANSICHAR>(*Elem.Value).Get());
		}
	}
}

void UToolkitSteamworksBPLibrary::SteamServerLogOff()
{
	STEAM_SERVER(;);
	SteamGameServer()->LogOff();
}

void UToolkitSteamworksBPLibrary::SteamServerLogOn(FString token)
{
	STEAM_SERVER(;);
	SteamGameServer()->LogOn(StringCast<ANSICHAR>(*token).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerLogOnAnonymous()
{
	STEAM_SERVER(;);
	SteamGameServer()->LogOnAnonymous();
}

bool UToolkitSteamworksBPLibrary::SteamServerRequestUserGroupStatus(int64 userId, int64 groupId)
{
	STEAM_SERVER(false);
	return SteamGameServer()->RequestUserGroupStatus(INT64_TO_STEAMID(userId), INT64_TO_STEAMID(groupId));
}

void UToolkitSteamworksBPLibrary::SteamServerSetBotPlayerCount(int botPlayers)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetBotPlayerCount(botPlayers);
}

void UToolkitSteamworksBPLibrary::SteamServerSetDedicatedServer(bool dedicated)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetDedicatedServer(dedicated);
}

void UToolkitSteamworksBPLibrary::SteamServerSetGameData(FString data)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetGameData(StringCast<ANSICHAR>(*data).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetDescription(FString description)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetGameDescription(StringCast<ANSICHAR>(*description).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetGameTags(FString tags)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetGameTags(StringCast<ANSICHAR>(*tags).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetKeyValue(FString key, FString value)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetKeyValue(StringCast<ANSICHAR>(*key).Get(), StringCast<ANSICHAR>(*value).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetMapName(FString name)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetMapName(StringCast<ANSICHAR>(*name).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetMaxPlayerCount(int32 playersMax)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetMaxPlayerCount(playersMax);
}

void UToolkitSteamworksBPLibrary::SteamServerSetModDirectoryName(FString directoryName)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetModDir(StringCast<ANSICHAR>(*directoryName).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetPasswordProtected(bool isPasswordProtected)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetPasswordProtected(isPasswordProtected);
}

void UToolkitSteamworksBPLibrary::SteamServerSetProduct(FString product)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetProduct(StringCast<ANSICHAR>(*product).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetRegion(FString region)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetRegion(StringCast<ANSICHAR>(*region).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetName(FString name)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetServerName(StringCast<ANSICHAR>(*name).Get());
}

void UToolkitSteamworksBPLibrary::SteamServerSetSpectatorPort(int32 port)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetSpectatorPort(static_cast<uint16>(port));
}

void UToolkitSteamworksBPLibrary::SteamServerSetSpectatorName(FString name)
{
	STEAM_SERVER(;);
	SteamGameServer()->SetSpectatorServerName(StringCast<ANSICHAR>(*name).Get());
}

UEUserHasLicenseForAppResult UToolkitSteamworksBPLibrary::SteamServerUserHasLicenseForApp(int64 user, int32 app)
{
	STEAM_SERVER(UEUserHasLicenseForAppResult::EPC_NoAuth);
	EUserHasLicenseForAppResult result = SteamGameServer()->UserHasLicenseForApp(INT64_TO_STEAMID(user), static_cast<AppId_t>(app));
	return static_cast<UEUserHasLicenseForAppResult>(result);
}

bool UToolkitSteamworksBPLibrary::SteamServerWasRestartRequested()
{
	STEAM_SERVER(false);
	return SteamGameServer()->WasRestartRequested();
}

bool UToolkitSteamworksBPLibrary::SteamServerClearUserAchievement(int64 user, FString apiName)
{
	STEAM_SERVER(false);
	return SteamGameServerStats()->ClearUserAchievement(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get());
}

FServerAchievementStatus UToolkitSteamworksBPLibrary::SteamServerGetUserAchievement(int64 user, FString apiName)
{
	FServerAchievementStatus result = FServerAchievementStatus();
	STEAM_SERVER(result);
	bool achieved;
	result.bSuccess = SteamGameServerStats()->GetUserAchievement(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get(), &achieved);
	result.bAchieved = achieved;
	return result;
}

FServerStatIntValue UToolkitSteamworksBPLibrary::SteamServerGetUserIntStat(int64 user, FString apiName)
{
	FServerStatIntValue result = FServerStatIntValue();
	STEAM_SERVER(result);
	int32 value;
	result.bSuccess = SteamGameServerStats()->GetUserStat(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get(), &value);
	result.Value = value;
	return result;
}

FServerStatFloatValue UToolkitSteamworksBPLibrary::SteamServerGetUserFloatStat(int64 user, FString apiName)
{
	FServerStatFloatValue result = FServerStatFloatValue();
	STEAM_SERVER(result);
	float value;
	result.bSuccess = SteamGameServerStats()->GetUserStat(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get(), &value);
	result.Value = value;
	return result;
}

void UToolkitSteamworksBPLibrary::SteamServerRequestUserStats(int64 user, FGSStatsCallback callback)
{
	FGSStatsReceivedLinker* linker = new FGSStatsReceivedLinker(user, callback);
}

bool UToolkitSteamworksBPLibrary::SteamServerSetUserAchievement(int64 user, FString apiName)
{
	STEAM_SERVER(false);
	return SteamGameServerStats()->SetUserAchievement(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get());
}

bool UToolkitSteamworksBPLibrary::SteamServerSetUserIntStat(int64 user, FString apiName, int32 value)
{
	STEAM_SERVER(false);
	return SteamGameServerStats()->SetUserStat(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get(), value);
}

bool UToolkitSteamworksBPLibrary::SteamServerSetUserFloatStat(int64 user, FString apiName, float value)
{
	STEAM_SERVER(false);
	return SteamGameServerStats()->SetUserStat(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get(), value);
}

void UToolkitSteamworksBPLibrary::SteamServerStoreUserStats(int64 user, FGSStatsCallback callback)
{
	STEAM_SERVER(;);
	SteamGameServerStats()->StoreUserStats(INT64_TO_STEAMID(user));
}

bool UToolkitSteamworksBPLibrary::SteamServerUpdateUserAvgRateStat(int64 user, FString apiName, float value, double length)
{
	STEAM_SERVER(false);
	return SteamGameServerStats()->UpdateUserAvgRateStat(INT64_TO_STEAMID(user), StringCast<ANSICHAR>(*apiName).Get(), value, length);
}

bool UToolkitSteamworksBPLibrary::SteamInitWorkshopForGameServer(int32 workshopDepotID, FString absoluteFolderPath)
{
	STEAM_SERVER(false);
	return SteamGameServerUGC()->BInitWorkshopForGameServer(static_cast<DepotId_t>(workshopDepotID), StringCast<ANSICHAR>(*absoluteFolderPath).Get());
}

void UToolkitSteamworksBPLibrary::SteamSetListenForFriendsMessages(bool enable)
{
	STEAM_CLIENT(;);
	SteamFriends()->SetListenForFriendsMessages(enable);
}

void UToolkitSteamworksBPLibrary::SteamSetPersonaName(FString name, FSetPersonaNameResponseCallback callback)
{
	STEAM_CLIENT(;);
	SetPersonaNameResponseLinker* linker = new SetPersonaNameResponseLinker(name, callback);
}

FString UToolkitSteamworksBPLibrary::SteamGetPersonaName()
{
	STEAM_CLIENT(FString());
	return FString(SteamFriends()->GetPersonaName());
}

UEPersonaState UToolkitSteamworksBPLibrary::SteamGetPersonaState()
{
	STEAM_CLIENT(UEPersonaState::EPC_Offline);
	return static_cast<UEPersonaState>(SteamFriends()->GetPersonaState());
}

UEUserRestrition UToolkitSteamworksBPLibrary::SteamGetUserRestrictions()
{
	STEAM_CLIENT(UEUserRestrition::EPC_Unknown);
	return static_cast<UEUserRestrition>(SteamFriends()->GetUserRestrictions());
}

void UToolkitSteamworksBPLibrary::SteamGetFollowed(FFriendsEnumerateFollowingListCallback Callback)
{
	if (!SteamFriends())
	{
		if (Callback.IsBound())
		{
			TArray<int64> EmptyArray;
			Callback.Execute(UEResult::EPC_Fail, EmptyArray);
		}
		UE_LOG(LogTemp, Warning, TEXT("Steam API is not initialized"));
		return;
	}
	APIFriendsClientFriendsEnumerateFollowingListLinker* Linker = new APIFriendsClientFriendsEnumerateFollowingListLinker(Callback);
}

int64 UToolkitSteamworksBPLibrary::SteamGetCoplayFriend(int32 index)
{
	STEAM_CLIENT(0);
	CSteamID fId = SteamFriends()->GetCoplayFriend(index);
	return static_cast<int64>(fId.ConvertToUint64());
}

int32 UToolkitSteamworksBPLibrary::SteamGetCoplayFriendCount()
{
	STEAM_CLIENT(0);

	return SteamFriends()->GetCoplayFriendCount();
}

TArray<int64> UToolkitSteamworksBPLibrary::SteamGetCoplayFriends()
{
	STEAM_CLIENT(TArray<int64>());

	TArray<int64> friendArray;

	int friendCount = SteamFriends()->GetCoplayFriendCount();
	for (int i = 0; i < friendCount; i++)
	{
		CSteamID fId = SteamFriends()->GetCoplayFriend(i);
		friendArray.Add(static_cast<int64>(fId.ConvertToUint64()));
	}
	return friendArray;
}

int64 UToolkitSteamworksBPLibrary::SteamGetFriendByIndex(int32 index, UEFriendFlags flag)
{
	STEAM_CLIENT(0);

	int eFlag = EFriendFlags::k_EFriendFlagImmediate;
	switch (flag)
	{
	case UEFriendFlags::EPC_None:
		eFlag = EFriendFlags::k_EFriendFlagNone;
		break;
	case UEFriendFlags::EPC_Blocked:
		eFlag = EFriendFlags::k_EFriendFlagBlocked;
		break;
	case UEFriendFlags::EPC_ChatMember:
		eFlag = EFriendFlags::k_EFriendFlagChatMember;
		break;
	case UEFriendFlags::EPC_ClanMember:
		eFlag = EFriendFlags::k_EFriendFlagClanMember;
		break;
	case UEFriendFlags::EPC_FriendshipRequested:
		eFlag = EFriendFlags::k_EFriendFlagFriendshipRequested;
		break;
	case UEFriendFlags::EPC_Ignored:
		eFlag = EFriendFlags::k_EFriendFlagIgnored;
		break;
	case UEFriendFlags::EPC_IgnoredFriend:
		eFlag = EFriendFlags::k_EFriendFlagIgnoredFriend;
		break;
	case UEFriendFlags::EPC_Immediate:
		eFlag = EFriendFlags::k_EFriendFlagImmediate;
		break;
	}
	CSteamID fId = SteamFriends()->GetFriendByIndex(index, eFlag);
	return int64();
}

int32 UToolkitSteamworksBPLibrary::SteamGetFriendCoplayGame(int64 userId)
{
	STEAM_CLIENT(0);

	CSteamID fId(static_cast<uint64>(userId));
	AppId_t appId = SteamFriends()->GetFriendCoplayGame(fId);

	return static_cast<int32>(appId);
}

FDateTime UToolkitSteamworksBPLibrary::SteamGetFriendCoplayTime(int64 userId)
{
	STEAM_CLIENT(FDateTime::MinValue());

	CSteamID fId(static_cast<uint64>(userId));
	return FDateTime::FromUnixTimestamp(SteamFriends()->GetFriendCoplayTime(fId));
}

int32 UToolkitSteamworksBPLibrary::SteamGetFriendCount(UEFriendFlags flag)
{
	STEAM_CLIENT(0);

	int eFlag = EFriendFlags::k_EFriendFlagImmediate;
	switch (flag)
	{
	case UEFriendFlags::EPC_None:
		eFlag = EFriendFlags::k_EFriendFlagNone;
		break;
	case UEFriendFlags::EPC_Blocked:
		eFlag = EFriendFlags::k_EFriendFlagBlocked;
		break;
	case UEFriendFlags::EPC_ChatMember:
		eFlag = EFriendFlags::k_EFriendFlagChatMember;
		break;
	case UEFriendFlags::EPC_ClanMember:
		eFlag = EFriendFlags::k_EFriendFlagClanMember;
		break;
	case UEFriendFlags::EPC_FriendshipRequested:
		eFlag = EFriendFlags::k_EFriendFlagFriendshipRequested;
		break;
	case UEFriendFlags::EPC_Ignored:
		eFlag = EFriendFlags::k_EFriendFlagIgnored;
		break;
	case UEFriendFlags::EPC_IgnoredFriend:
		eFlag = EFriendFlags::k_EFriendFlagIgnoredFriend;
		break;
	case UEFriendFlags::EPC_Immediate:
		eFlag = EFriendFlags::k_EFriendFlagImmediate;
		break;
	}

	return SteamFriends()->GetFriendCount(eFlag);
}

TArray<int64> UToolkitSteamworksBPLibrary::SteamGetFriends(UEFriendFlags flag)
{
	STEAM_CLIENT(TArray<int64>());

	int eFlag = EFriendFlags::k_EFriendFlagImmediate;
	switch (flag)
	{
	case UEFriendFlags::EPC_None:
		eFlag = EFriendFlags::k_EFriendFlagNone;
		break;
	case UEFriendFlags::EPC_Blocked:
		eFlag = EFriendFlags::k_EFriendFlagBlocked;
		break;
	case UEFriendFlags::EPC_ChatMember:
		eFlag = EFriendFlags::k_EFriendFlagChatMember;
		break;
	case UEFriendFlags::EPC_ClanMember:
		eFlag = EFriendFlags::k_EFriendFlagClanMember;
		break;
	case UEFriendFlags::EPC_FriendshipRequested:
		eFlag = EFriendFlags::k_EFriendFlagFriendshipRequested;
		break;
	case UEFriendFlags::EPC_Ignored:
		eFlag = EFriendFlags::k_EFriendFlagIgnored;
		break;
	case UEFriendFlags::EPC_IgnoredFriend:
		eFlag = EFriendFlags::k_EFriendFlagIgnoredFriend;
		break;
	case UEFriendFlags::EPC_Immediate:
		eFlag = EFriendFlags::k_EFriendFlagImmediate;
		break;
	}

	int count = SteamFriends()->GetFriendCount(eFlag);
	TArray<int64> results;

	for (int i = 0; i < count; i++)
	{
		results.Add(STEAMID_TO_INT64(SteamFriends()->GetFriendByIndex(i, eFlag)));
	}

	return results;
}

int32 UToolkitSteamworksBPLibrary::SteamGetFriendCountFromSource(int64 sourceId)
{
	STEAM_CLIENT(0);

	CSteamID sId(static_cast<uint64>(sourceId));
	return SteamFriends()->GetFriendCountFromSource(sId);
}

int64 UToolkitSteamworksBPLibrary::SteamGetFriendFromSourceByIndex(int64 sourceId, int32 index)
{
	STEAM_CLIENT(0);

	CSteamID sId(static_cast<uint64>(sourceId));
	CSteamID fId = SteamFriends()->GetFriendFromSourceByIndex(sId, index);

	return static_cast<int64>(fId.ConvertToUint64());
}

TArray<int64> UToolkitSteamworksBPLibrary::SteamGetFriendFromSource(int64 sourceId)
{
	STEAM_CLIENT(TArray<int64>());

	TArray<int64> friendArray;

	CSteamID sId(static_cast<uint64>(sourceId));
	int count = SteamFriends()->GetFriendCountFromSource(sId);
	for (int i = 0; i < count; i++)
	{
		CSteamID fId = SteamFriends()->GetFriendFromSourceByIndex(sId, i);
		friendArray.Add(static_cast<int64>(fId.ConvertToUint64()));
	}

	return friendArray;
}

FMyGameInfo UToolkitSteamworksBPLibrary::SteamGetFriendGamePlayed(int64 userId)
{
	STEAM_CLIENT(FMyGameInfo());

	CSteamID fId(static_cast<uint64>(userId));
	FriendGameInfo_t friendGameInfo;

	bool inGame = SteamFriends()->GetFriendGamePlayed(fId, &friendGameInfo);

	FMyGameInfo gameInfo;
	gameInfo.bInGame = inGame;

	if (inGame)
	{
		uint8 Octets[4];
		Octets[0] = (friendGameInfo.m_unGameIP >> 24) & 0xFF;
		Octets[1] = (friendGameInfo.m_unGameIP >> 16) & 0xFF;
		Octets[2] = (friendGameInfo.m_unGameIP >> 8) & 0xFF;
		Octets[3] = friendGameInfo.m_unGameIP & 0xFF;

		gameInfo.IpAddress = FString::Printf(TEXT("%d.%d.%d.%d"), Octets[0], Octets[1], Octets[2], Octets[3]);
		gameInfo.GamePort = static_cast<int32>(friendGameInfo.m_usGamePort);
		gameInfo.QueryPort = static_cast<int32>(friendGameInfo.m_usQueryPort);
		gameInfo.GameId = static_cast<int64>(friendGameInfo.m_gameID.ToUint64());
		gameInfo.LobbyId = static_cast<int64>(friendGameInfo.m_steamIDLobby.ConvertToUint64());
	}

	return gameInfo;
}

int32 UToolkitSteamworksBPLibrary::SteamGetFriendGroupIdByIndex(int32 index)
{
	STEAM_CLIENT(0);

	return static_cast<int32>(SteamFriends()->GetFriendsGroupIDByIndex(index));
}

TArray<int32> UToolkitSteamworksBPLibrary::SteamGetFriendGroups()
{
	STEAM_CLIENT(TArray<int32>());

	TArray<int32> results;
	int count = SteamFriends()->GetFriendsGroupCount();
	for (int i = 0; i < count; i++)
	{
		FriendsGroupID_t fGroupId = SteamFriends()->GetFriendsGroupIDByIndex(i);
		results.Add(static_cast<int32>(fGroupId));
	}

	return results;
}

int32 UToolkitSteamworksBPLibrary::SteamGetFriendGroupsCount()
{
	STEAM_CLIENT(0);
	return SteamFriends()->GetFriendsGroupCount();
}

TArray<int64> UToolkitSteamworksBPLibrary::SteamGetFriendGroupMembers(int32 friendGroupId)
{
	STEAM_CLIENT(TArray<int64>());

	FriendsGroupID_t fGroupId = static_cast<FriendsGroupID_t>(friendGroupId);
	int count = SteamFriends()->GetFriendsGroupMembersCount(fGroupId);
	CSteamID* buffer = new CSteamID[count];
	SteamFriends()->GetFriendsGroupMembersList(fGroupId, buffer, count);

	TArray<int64> uArray;

	for (int i = 0; i < count; i++)
	{
		uArray.Add(static_cast<int64>(buffer[i].ConvertToUint64()));
	}

	delete[] buffer;

	return uArray;
}

FString UToolkitSteamworksBPLibrary::SteamGetFriendGroupName(int32 friendGroupId)
{
	STEAM_CLIENT(FString());

	FriendsGroupID_t fGroupId = static_cast<FriendsGroupID_t>(friendGroupId);
	const char* GroupNameBuffer = SteamFriends()->GetFriendsGroupName(fGroupId);

	if (GroupNameBuffer)
	{
		FString GroupName(GroupNameBuffer);
		return GroupName;
	}
	else
		return FString();
}

bool UToolkitSteamworksBPLibrary::SteamHasFriend(int64 steamId, UEFriendFlags flag)
{
	STEAM_CLIENT(false);
	return SteamFriends()->HasFriend(INT64_TO_STEAMID(steamId), HeathenTools::Convert(flag));
}

bool UToolkitSteamworksBPLibrary::SteamInviteUserToGame(int64 userId, FString connectionString)
{
	STEAM_CLIENT(false);
	CSteamID steamId = INT64_TO_STEAMID(userId);
	bool result = SteamFriends()->InviteUserToGame(steamId, StringCast<ANSICHAR>(*connectionString).Get());
	return result;
}

bool UToolkitSteamworksBPLibrary::SteamReplyToFriendMessage(int64 userId, FString message)
{
	STEAM_CLIENT(false);
	CSteamID steamId = INT64_TO_STEAMID(userId);
	return SteamFriends()->ReplyToFriendMessage(steamId, StringCast<ANSICHAR>(*message).Get());
}

void UToolkitSteamworksBPLibrary::SteamRequestFriendRichPresence(int64 userId)
{
	STEAM_CLIENT(;);
	CSteamID steamId = INT64_TO_STEAMID(userId);

	SteamFriends()->RequestFriendRichPresence(steamId);
}

bool UToolkitSteamworksBPLibrary::SteamRequestUserInformation(int64 userId, bool nameOnly)
{
	STEAM_CLIENT(false);
	CSteamID steamId = INT64_TO_STEAMID(userId);

	return SteamFriends()->RequestUserInformation(steamId, nameOnly);
}

void UToolkitSteamworksBPLibrary::SteamSetInGameVoiceSpeaking(bool speaking)
{
	STEAM_CLIENT(;);
	SteamFriends()->SetInGameVoiceSpeaking(CSteamID(), speaking);
}

void UToolkitSteamworksBPLibrary::SteamSetPlayedWithUser(int64 userId)
{
	STEAM_CLIENT(;);
	CSteamID steamId = INT64_TO_STEAMID(userId);
	SteamFriends()->SetPlayedWith(steamId);
}

FString UToolkitSteamworksBPLibrary::SteamGetFriendPersonaName(int64 id)
{
	STEAM_CLIENT(FString());
	return FString(SteamFriends()->GetFriendPersonaName(INT64_TO_STEAMID(id)));
}

FString UToolkitSteamworksBPLibrary::SteamGetPlayerNickname(int64 id)
{
	STEAM_CLIENT(FString());
	return FString(SteamFriends()->GetPlayerNickname(INT64_TO_STEAMID(id)));
}

void UToolkitSteamworksBPLibrary::SteamGetMySteamAvatar(FAvatarLoadCallback Callback)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamGameInstance->GetAvatarBySteamId(SteamUser()->GetSteamID(), Callback);
}

bool UToolkitSteamworksBPLibrary::SteamIsValidSteamUserId(int64 id)
{
	return INT64_TO_STEAMID(id).IsValid();
}

void UToolkitSteamworksBPLibrary::SteamGetUserSteamAvatar(int64 id, FAvatarLoadCallback Callback)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamGameInstance->GetAvatarBySteamId(INT64_TO_STEAMID(id), Callback);
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayByName(FString dialog)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlay(StringCast<ANSICHAR>(*dialog).Get());
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlay(UEOverlayDialog dialog)
{
	STEAM_CLIENT_INSTANCE(;);
	switch (dialog)
	{
	case UEOverlayDialog::EPC_Achievements:
		SteamFriends()->ActivateGameOverlay("achievements");
		break;
	case UEOverlayDialog::EPC_Community:
		SteamFriends()->ActivateGameOverlay("community");
		break;
	case UEOverlayDialog::EPC_Friends:
		SteamFriends()->ActivateGameOverlay("friends");
		break;
	case UEOverlayDialog::EPC_OfficialGameGroup:
		SteamFriends()->ActivateGameOverlay("officialgamegroup");
		break;
	case UEOverlayDialog::EPC_Players:
		SteamFriends()->ActivateGameOverlay("players");
		break;
	case UEOverlayDialog::EPC_Settings:
		SteamFriends()->ActivateGameOverlay("settings");
		break;
	case UEOverlayDialog::EPC_Stats:
		SteamFriends()->ActivateGameOverlay("stats");
		break;
	}
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayInviteDialog(int64 lobbyId)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlayInviteDialog(INT64_TO_STEAMID(lobbyId));
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayToStore(int32 appId)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlayToStore(static_cast<AppId_t>(appId), EOverlayToStoreFlag::k_EOverlayToStoreFlag_None);
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayAddToCartAndShow(int32 appId)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlayToStore(static_cast<AppId_t>(appId), EOverlayToStoreFlag::k_EOverlayToStoreFlag_AddToCartAndShow);
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayToUser(int64 userId, UEOverlayUserDialog dialog)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlayToUser("", INT64_TO_STEAMID(userId));
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayToWebPage(FString url)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlayToWebPage(StringCast<ANSICHAR>(*url).Get());
}

void UToolkitSteamworksBPLibrary::SteamActivateGameOverlayToWebPageModal(FString url)
{
	STEAM_CLIENT_INSTANCE(;);
	SteamFriends()->ActivateGameOverlayToWebPage(StringCast<ANSICHAR>(*url).Get(), EActivateGameOverlayToWebPageMode::k_EActivateGameOverlayToWebPageMode_Modal);
}

bool UToolkitSteamworksBPLibrary::SteamIsOverlayEnabled()
{
	STEAM_CLIENT_INSTANCE(false);
	return SteamUtils()->IsOverlayEnabled();
}

void UToolkitSteamworksBPLibrary::SteamOverlayNotificationPosition(UEOverlayCorner position)
{
	STEAM_CLIENT_INSTANCE(;);
	return SteamUtils()->SetOverlayNotificationPosition(static_cast<ENotificationPosition>(position));
}

void UToolkitSteamworksBPLibrary::SteamOverlayNotificationInset(int32 horizontal, int32 vertical)
{
	STEAM_CLIENT_INSTANCE(;);
	return SteamUtils()->SetOverlayNotificationInset(horizontal, vertical);
}

bool UToolkitSteamworksBPLibrary::SteamSimpleAddPromoItem(int32 itemDef, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;
	TArray<SteamItemDef_t> steamItemDefs;

	SteamInventoryResult_t handle;
	bool response = SteamInventory()->AddPromoItem(&handle, SteamItemDef_t(itemDef));
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleAddPromoItems(TArray<int32> itemDefs, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;

	TArray<SteamItemDef_t> steamItemDefs;
	for (const int32& itemDef : itemDefs)
	{
		steamItemDefs.Add(static_cast<SteamItemDef_t>(itemDef));
	}

	SteamInventoryResult_t handle;
	bool response = SteamInventory()->AddPromoItems(&handle, steamItemDefs.GetData(), steamItemDefs.Num());
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleConsumeItem(int64 itemInstanceId, int32 quantity, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;

	SteamItemInstanceID_t steamItemInstanceId = SteamItemInstanceID_t(itemInstanceId);
	SteamInventoryResult_t handle;
	bool response = SteamInventory()->ConsumeItem(&handle, steamItemInstanceId, static_cast<uint32>(quantity));
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleDeserializeResult(int64 userId, TArray<uint8> buffer, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;
	request.userId = INT64_TO_STEAMID(userId);

	SteamInventoryResult_t handle;
	bool response = SteamInventory()->DeserializeResult(&handle, buffer.GetData(), buffer.Num());
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleExchangeItems(int32 itemDef, TArray<FItemCount> recipe, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;

	TArray<SteamItemDef_t> generateItems;
	TArray<uint32> generateQuantities;
	TArray<SteamItemInstanceID_t> destroyItems;
	TArray<uint32> destroyQuantities;

	for (const FItemCount& item : recipe)
	{
		if (item.InstanceId > 0)
		{
			generateItems.Add(static_cast<SteamItemDef_t>(item.InstanceId));
			generateQuantities.Add(static_cast<uint32>(item.Quantity));
		}
		else if (item.InstanceId < 0)
		{
			destroyItems.Add(static_cast<SteamItemInstanceID_t>(-item.InstanceId));
			destroyQuantities.Add(static_cast<uint32>(item.Quantity));
		}
	}

	SteamInventoryResult_t handle;

	bool response = SteamInventory()->ExchangeItems(&handle,
		generateItems.GetData(), generateQuantities.GetData(), generateItems.Num(),
		destroyItems.GetData(), destroyQuantities.GetData(), destroyItems.Num());
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleGenerateItems(TArray<FItemCount> items, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;

	TArray<SteamItemDef_t> itemDefs;
	TArray<uint32> quantities;

	for (const FItemCount& item : items)
	{
		itemDefs.Add(static_cast<SteamItemDef_t>(item.InstanceId));
		quantities.Add(static_cast<uint32>(item.Quantity));
	}

	SteamInventoryResult_t handle;
	bool response = SteamInventory()->GenerateItems(&handle, itemDefs.GetData(), quantities.GetData(), itemDefs.Num());
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleGetAllItems(TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);

	// Ensure properly initialized
	if (!readProperties.IsValidIndex(0))
		readProperties = TArray<FString>();

	FItemResultRequest request = FItemResultRequest();
	request.clearAll = true;
	request.properties = readProperties;
	request.callback = callback;
	SteamInventoryResult_t handle;
	bool response = SteamInventory()->GetAllItems(&handle);
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleGrantPromoItems(TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);

	// Ensure properly initialized
	if (!readProperties.IsValidIndex(0))
		readProperties = TArray<FString>();

	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;
	SteamInventoryResult_t handle;
	bool response = SteamInventory()->GrantPromoItems(&handle);
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleTransferItemQuantity(int64 sourceInstanceId, int32 quantity, int64 destinationInstanceId, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;
	SteamInventoryResult_t result;
	SteamItemInstanceID_t sInstance = static_cast<SteamItemInstanceID_t>(sourceInstanceId);
	SteamItemInstanceID_t dInstance = static_cast<SteamItemInstanceID_t>(destinationInstanceId);
	bool response = SteamInventory()->TransferItemQuantity(&result, sInstance, static_cast<uint32>(quantity), dInstance);
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(result, request);
	}
	return response;
}

bool UToolkitSteamworksBPLibrary::SteamSimpleTriggerItemDrop(int32 itemDef, TArray<FString> readProperties, FItemResultsCallback callback)
{
	STEAM_CLIENT_INSTANCE(false);
	FItemResultRequest request = FItemResultRequest();
	request.properties = readProperties;
	request.callback = callback;
	SteamInventoryResult_t handle;
	bool response = SteamInventory()->TriggerItemDrop(&handle, SteamItemDef_t(itemDef));
	if (response)
	{
		SteamGameInstance->InventoryRequests.Add(handle, request);
	}
	return response;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamAddPromoItem(int32 itemDef)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	TArray<SteamItemDef_t> steamItemDefs;
	steamItemDefs.Add(static_cast<SteamItemDef_t>(itemDef));

	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->AddPromoItem(&handle, SteamItemDef_t(itemDef));
	result.ResultHandle = handle;

	return result;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamAddPromoItems(TArray<int32> itemDefs)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	TArray<SteamItemDef_t> steamItemDefs;
	for (const int32& itemDef : itemDefs)
	{
		steamItemDefs.Add(static_cast<SteamItemDef_t>(itemDef));
	}

	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->AddPromoItems(&handle, steamItemDefs.GetData(), steamItemDefs.Num());
	result.ResultHandle = handle;

	return result;
}

bool UToolkitSteamworksBPLibrary::SteamCheckResultSteamID(int32 resultHandle, int64 steamIDExpected)
{
	STEAM_CLIENT(false);

	CSteamID cId = INT64_TO_STEAMID(steamIDExpected);
	return SteamInventory()->CheckResultSteamID(resultHandle, cId);
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamConsumeItem(int64 itemInstanceId, int32 quantity)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	SteamItemInstanceID_t steamItemInstanceId = SteamItemInstanceID_t(itemInstanceId);
	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->ConsumeItem(&handle, steamItemInstanceId, static_cast<uint32>(quantity));
	result.ResultHandle = handle;

	return result;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamDeserializeResult(TArray<uint8> buffer)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	if (buffer.Num() == 0)
		return result;

	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->DeserializeResult(&handle, buffer.GetData(), buffer.Num());
	result.ResultHandle = handle;

	return result;
}

void UToolkitSteamworksBPLibrary::SteamDestroyResult(int32 resultHandle)
{
	SteamInventory()->DestroyResult(SteamInventoryResult_t(resultHandle));
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamExchangeItems(int32 itemDef, TArray<FItemCount> recipe)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	TArray<SteamItemDef_t> generateItems;
	TArray<uint32> generateQuantities;
	TArray<SteamItemInstanceID_t> destroyItems;
	TArray<uint32> destroyQuantities;

	for (const FItemCount& item : recipe)
	{
		if (item.InstanceId > 0)
		{
			generateItems.Add(static_cast<SteamItemDef_t>(item.InstanceId));
			generateQuantities.Add(static_cast<uint32>(item.Quantity));
		}
		else if (item.InstanceId < 0)
		{
			destroyItems.Add(static_cast<SteamItemInstanceID_t>(-item.InstanceId));
			destroyQuantities.Add(static_cast<uint32>(item.Quantity));
		}
	}

	SteamInventoryResult_t handle;

	result.bSuccess = SteamInventory()->ExchangeItems(&handle,
		generateItems.GetData(), generateQuantities.GetData(), generateItems.Num(),
		destroyItems.GetData(), destroyQuantities.GetData(), destroyItems.Num());
	result.ResultHandle = handle;

	return result;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamGenerateItems(TArray<FItemCount> items)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	TArray<SteamItemDef_t> itemDefs;
	TArray<uint32> quantities;

	for (const FItemCount& item : items)
	{
		itemDefs.Add(static_cast<SteamItemDef_t>(item.InstanceId));
		quantities.Add(static_cast<uint32>(item.Quantity));
	}

	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->GenerateItems(&handle, itemDefs.GetData(), quantities.GetData(), itemDefs.Num());
	result.ResultHandle = handle;

	return result;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamGetAllItems()
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->GetAllItems(&handle);
	result.ResultHandle = handle;

	return result;
}

TArray<FString> UToolkitSteamworksBPLibrary::SteamGetItemDefinitionProperties(int32 itemDef)
{
	STEAM_CLIENT(TArray<FString>());

	uint32 bufferSize = 0;
	bool bGetSizeSuccess = SteamInventory()->GetItemDefinitionProperty(SteamItemDef_t(itemDef), NULL, NULL, &bufferSize);

	if (!bGetSizeSuccess || bufferSize == 0)
		return TArray<FString>();

	char* pchValueBuffer = new char[bufferSize];
	bool bGetPropertySuccess = SteamInventory()->GetItemDefinitionProperty(SteamItemDef_t(itemDef), NULL, pchValueBuffer, &bufferSize);

	FString ItemProperty;
	TArray<FString> ResultArray;
	if (bGetPropertySuccess)
	{
		ItemProperty = FString(pchValueBuffer);
		ItemProperty.ParseIntoArray(ResultArray, TEXT(","), true);
	}

	delete[] pchValueBuffer;

	return ResultArray;
}

FString UToolkitSteamworksBPLibrary::SteamGetItemDefinitionProperty(int32 itemDef, FString property)
{
	STEAM_CLIENT(FString());

	uint32 bufferSize = 0;
	bool bGetSizeSuccess = SteamInventory()->GetItemDefinitionProperty(SteamItemDef_t(itemDef), StringCast<ANSICHAR>(*property).Get(), nullptr, &bufferSize);

	if (!bGetSizeSuccess || bufferSize == 0)
	{
		// Handle error or empty property
		return FString();
	}

	char* pchValueBuffer = new char[bufferSize];

	// Call Steamworks SDK to get the item property
	bool bGetPropertySuccess = SteamInventory()->GetItemDefinitionProperty(SteamItemDef_t(itemDef), StringCast<ANSICHAR>(*property).Get(), pchValueBuffer, &bufferSize);

	FString ItemProperty;
	if (bGetPropertySuccess)
	{
		ItemProperty = FString(pchValueBuffer);
	}

	// Free the allocated memory
	delete[] pchValueBuffer;

	return ItemProperty;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamGetItemsByID(TArray<int64> instanceIds)
{
	FInventoryResult result = FInventoryResult();
	STEAM_CLIENT(result);

	TArray<SteamItemInstanceID_t> steamInstanceIds;
	for (const int64& instanceId : instanceIds)
	{
		SteamItemInstanceID_t steamInstanceId = static_cast<SteamItemInstanceID_t>(instanceId);
		steamInstanceIds.Add(steamInstanceId);
	}

	SteamInventoryResult_t handle;
	result.bSuccess = SteamInventory()->GetItemsByID(&handle, steamInstanceIds.GetData(), steamInstanceIds.Num());
	result.ResultHandle = static_cast<int32>(handle);
	return result;
}

FItemPrice UToolkitSteamworksBPLibrary::SteamGetItemPrice(int32 itemDef)
{
	STEAM_CLIENT(FItemPrice());
	FItemPrice price = FItemPrice();
	uint64 nCur;
	uint64 nBase;
	SteamInventory()->GetItemPrice(SteamItemDef_t(itemDef), &nCur, &nBase);
	price.BasePrice = static_cast<int64>(nBase);
	price.CurrentPrice = static_cast<int64>(nCur);
	return price;
}

TArray<FItemWithPrice> UToolkitSteamworksBPLibrary::SteamGetItemsWithPrices()
{
	STEAM_CLIENT(TArray<FItemWithPrice>());
	uint32 count = SteamInventory()->GetNumItemsWithPrices();
	SteamItemDef_t* itemDefs = new SteamItemDef_t[count];
	uint64* currentPrices = new uint64[count];
	uint64* basePrices = new uint64[count];

	if (SteamInventory()->GetItemsWithPrices(itemDefs, currentPrices, basePrices, count))
	{
		TArray<FItemWithPrice> result;
		for (uint32 i = 0; i < count; i++)
		{
			FItemWithPrice nItem = FItemWithPrice();
			nItem.ItemDef = itemDefs[i];
			nItem.CurrentPrice = static_cast<int64>(currentPrices[i]);
			nItem.BasePrice = static_cast<int64>(basePrices[i]);
			result.Add(nItem);
		}

		delete[] itemDefs;
		delete[] currentPrices;
		delete[] basePrices;

		return result;
	}
	else
	{
		delete[] itemDefs;
		delete[] currentPrices;
		delete[] basePrices;

		return TArray<FItemWithPrice>();
	}
}

int32 UToolkitSteamworksBPLibrary::SteamGetNumItemsWithPrices()
{
	STEAM_CLIENT(0);
	return static_cast<int32>(SteamInventory()->GetNumItemsWithPrices());
}

FString UToolkitSteamworksBPLibrary::SteamGetResultItemProperty(int32 resultHandle, int32 index, FString propertyName)
{
	STEAM_CLIENT(FString());

	uint32 bufferSize = 0;
	uint32 unItemIndex = static_cast<uint32>(index);
	bool bGetSizeSuccess = SteamInventory()->GetResultItemProperty(resultHandle, unItemIndex, StringCast<ANSICHAR>(*propertyName).Get(), nullptr, &bufferSize);

	if (!bGetSizeSuccess || bufferSize == 0)
	{
		// Handle error or empty property
		return FString();
	}

	char* pchValueBuffer = new char[bufferSize];

	// Call Steamworks SDK to get the item property
	bool bGetPropertySuccess = SteamInventory()->GetResultItemProperty(resultHandle, unItemIndex, StringCast<ANSICHAR>(*propertyName).Get(), pchValueBuffer, &bufferSize);

	FString ItemProperty;
	if (bGetPropertySuccess)
	{
		ItemProperty = FString(pchValueBuffer);
	}

	// Free the allocated memory
	delete[] pchValueBuffer;

	return ItemProperty;
}

TArray<FItemDetail> UToolkitSteamworksBPLibrary::SteamGetResultItems(int32 resultHandle)
{
	TArray<FItemDetail> ItemDetailsArray;
	STEAM_CLIENT(ItemDetailsArray);

	SteamItemDetails_t* pOutItemsArray = nullptr;
	uint32 punOutItemsArraySize = 0;
	bool bSuccess = SteamInventory()->GetResultItems(resultHandle, pOutItemsArray, &punOutItemsArraySize);

	if (!bSuccess || punOutItemsArraySize == 0)
	{
		// Handle error or empty array
		return TArray<FItemDetail>();
	}

	pOutItemsArray = new SteamItemDetails_t[punOutItemsArraySize];
	bSuccess = SteamInventory()->GetResultItems(resultHandle, pOutItemsArray, &punOutItemsArraySize);

	if (bSuccess && punOutItemsArraySize > 0)
	{
		for (uint32 i = 0; i < punOutItemsArraySize; ++i)
		{
			FItemDetail ItemDetail;
			ItemDetail.InstanceId = static_cast<int64>(pOutItemsArray[i].m_itemId);
			ItemDetail.DefinitionId = static_cast<int32>(pOutItemsArray[i].m_iDefinition);
			ItemDetail.Quantity = static_cast<int32>(pOutItemsArray[i].m_unQuantity);
			ItemDetail.Flags = static_cast<int32>(pOutItemsArray[i].m_unFlags);

			ItemDetailsArray.Add(ItemDetail);
		}
	}

	delete[] pOutItemsArray;

	return ItemDetailsArray;
}

TArray<FItemDetailWithProperties> UToolkitSteamworksBPLibrary::SteamGetResultItemsWithProperties(int32 resultHandle, TArray<FString> properties)
{
	TArray<FItemDetailWithProperties> ItemDetailsArray;
	STEAM_CLIENT(ItemDetailsArray);

	SteamItemDetails_t* pOutItemsArray = nullptr;
	uint32 punOutItemsArraySize = 0;
	bool bSuccess = SteamInventory()->GetResultItems(resultHandle, pOutItemsArray, &punOutItemsArraySize);

	if (!bSuccess || punOutItemsArraySize == 0)
	{
		// Handle error or empty array
		return TArray<FItemDetailWithProperties>();
	}

	pOutItemsArray = new SteamItemDetails_t[punOutItemsArraySize];
	bSuccess = SteamInventory()->GetResultItems(resultHandle, pOutItemsArray, &punOutItemsArraySize);

	if (bSuccess && punOutItemsArraySize > 0)
	{
		for (uint32 i = 0; i < punOutItemsArraySize; ++i)
		{
			FItemDetailWithProperties ItemDetail;
			ItemDetail.InstanceId = static_cast<int64>(pOutItemsArray[i].m_itemId);
			ItemDetail.DefinitionId = static_cast<int32>(pOutItemsArray[i].m_iDefinition);
			ItemDetail.Quantity = static_cast<int32>(pOutItemsArray[i].m_unQuantity);
			ItemDetail.Flags = static_cast<int32>(pOutItemsArray[i].m_unFlags);

			if (properties.Num() > 0)
			{
				for (const FString& prop : properties)
				{
					uint32 bufferSize = 0;
					if (SteamInventory()->GetResultItemProperty(resultHandle, i, StringCast<ANSICHAR>(*prop).Get(), NULL, &bufferSize))
					{
						char* pchValueBuffer = new char[bufferSize];
						if (SteamInventory()->GetResultItemProperty(resultHandle, i, StringCast<ANSICHAR>(*prop).Get(), pchValueBuffer, &bufferSize))
						{
							FKeyValuePair pair = FKeyValuePair();
							pair.Key = prop;
							pair.Value = FString(pchValueBuffer);
							ItemDetail.Properties.Add(pair);
						}
						delete[] pchValueBuffer;
					}
				}
			}

			ItemDetailsArray.Add(ItemDetail);
		}
	}

	delete[] pOutItemsArray;

	return ItemDetailsArray;
}

UEResult UToolkitSteamworksBPLibrary::SteamGetResultStatus(int32 resultHandle)
{
	STEAM_CLIENT(UEResult::EPC_IOFailure);

	EResult result = SteamInventory()->GetResultStatus(SteamInventoryResult_t(resultHandle));
	return static_cast<UEResult>(result);
}

FDateTime UToolkitSteamworksBPLibrary::SteamGetResultTimestamp(int32 resultHandle)
{
	STEAM_CLIENT(FDateTime());
	return FDateTime().FromUnixTimestamp(static_cast<int64>(SteamInventory()->GetResultTimestamp(SteamInventoryResult_t(resultHandle))));
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamGrantPromoItems()
{
	STEAM_CLIENT(FInventoryResult());
	FInventoryResult result = FInventoryResult();
	SteamInventoryResult_t handle;
	bool ret = SteamInventory()->GrantPromoItems(&handle);
	result.ResultHandle = static_cast<int32>(handle);
	result.bSuccess = ret;
	return result;
}

bool UToolkitSteamworksBPLibrary::SteamLoadItemDefinitions()
{
	STEAM_CLIENT(false);
	return SteamInventory()->LoadItemDefinitions();
}

void UToolkitSteamworksBPLibrary::SteamRequestEligiblePromoItemDefinitionsIDs(FSteamInventoryEligiblePromoItemDefIDsCallback callback)
{
	STEAM_CLIENT(;);
	SteamInventoryEligiblePromoItemDefIDsLinker* linker = new SteamInventoryEligiblePromoItemDefIDsLinker(callback);
}

void UToolkitSteamworksBPLibrary::SteamRequestPrices(FRequestPricesCallback callback)
{
	STEAM_CLIENT(;);
	SteamInventoryRequestPricesResultLinker* linker = new SteamInventoryRequestPricesResultLinker(callback);
}

TArray<uint8> UToolkitSteamworksBPLibrary::SteamSerializeResult(int32 resultHandle)
{
	STEAM_CLIENT(TArray<uint8>());

	SteamInventoryResult_t rHandle = SteamInventoryResult_t(resultHandle);
	uint32 size;
	if (SteamInventory()->SerializeResult(rHandle, NULL, &size))
	{
		TArray<uint8> buffer;
		buffer.AddUninitialized(static_cast<int32>(size));
		void* outBuffer = buffer.GetData();

		if (SteamInventory()->SerializeResult(rHandle, outBuffer, &size))
			return buffer;
		else
			return TArray<uint8>();
	}
	else
		return TArray<uint8>();
}

void UToolkitSteamworksBPLibrary::SteamStartPurchase(TArray<FItemDefCount> items, FSteamInventoryStartPurchaseResultCallback callback)
{
	STEAM_CLIENT(;);
	SteamInventoryStartPurchaseResultLinker* linker = new SteamInventoryStartPurchaseResultLinker(items, callback);
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamTransferItemQuantity(int64 sourceInstanceId, int32 quantity, int64 destinationInstanceId)
{
	STEAM_CLIENT(FInventoryResult());
	SteamInventoryResult_t result;
	SteamItemInstanceID_t sInstance = static_cast<SteamItemInstanceID_t>(sourceInstanceId);
	SteamItemInstanceID_t dInstance = static_cast<SteamItemInstanceID_t>(destinationInstanceId);
	bool ret = SteamInventory()->TransferItemQuantity(&result, sInstance, static_cast<uint32>(quantity), dInstance);

	FInventoryResult value = FInventoryResult();
	value.ResultHandle = static_cast<int32>(result);
	value.bSuccess = ret;
	return value;
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamTriggerItemDrop(int32 itemDef)
{
	STEAM_CLIENT(FInventoryResult());
	SteamInventoryResult_t result;
	bool ret = SteamInventory()->TriggerItemDrop(&result, SteamItemDef_t(itemDef));

	FInventoryResult value = FInventoryResult();
	value.ResultHandle = static_cast<int32>(result);
	value.bSuccess = ret;
	return value;
}

int64 UToolkitSteamworksBPLibrary::SteamStartUpdateProperties()
{
	SteamInventoryUpdateHandle_t updateHandle = SteamInventory()->StartUpdateProperties();
	return static_cast<int64>(updateHandle);
}

FInventoryResult UToolkitSteamworksBPLibrary::SteamSubmitUpdateProperties(int64 updateHandle)
{
	STEAM_CLIENT(FInventoryResult());
	SteamInventoryUpdateHandle_t handle = static_cast<SteamInventoryUpdateHandle_t>(updateHandle);
	SteamInventoryResult_t result;
	bool ret = SteamInventory()->SubmitUpdateProperties(handle, &result);

	FInventoryResult value = FInventoryResult();
	value.ResultHandle = static_cast<int32>(result);
	value.bSuccess = ret;
	return value;
}

bool UToolkitSteamworksBPLibrary::SteamRemoveProperty(int64 updateHandle, int64 instanceId, FString propertyName)
{
	STEAM_CLIENT(false);
	SteamInventoryUpdateHandle_t handle = static_cast<SteamInventoryUpdateHandle_t>(updateHandle);
	SteamItemInstanceID_t instance = static_cast<SteamItemInstanceID_t>(instanceId);
	return SteamInventory()->RemoveProperty(handle, instance, StringCast<ANSICHAR>(*propertyName).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetPropertyString(int64 updateHandle, int64 instanceId, FString propertyName, FString value)
{
	STEAM_CLIENT(false);
	SteamInventoryUpdateHandle_t handle = static_cast<SteamInventoryUpdateHandle_t>(updateHandle);
	SteamItemInstanceID_t instance = static_cast<SteamItemInstanceID_t>(instanceId);
	return SteamInventory()->SetProperty(handle, instance, StringCast<ANSICHAR>(*propertyName).Get(), StringCast<ANSICHAR>(*value).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetPropertyBool(int64 updateHandle, int64 instanceId, FString propertyName, bool value)
{
	STEAM_CLIENT(false);
	SteamInventoryUpdateHandle_t handle = static_cast<SteamInventoryUpdateHandle_t>(updateHandle);
	SteamItemInstanceID_t instance = static_cast<SteamItemInstanceID_t>(instanceId);
	return SteamInventory()->SetProperty(handle, instance, StringCast<ANSICHAR>(*propertyName).Get(), value);
}

bool UToolkitSteamworksBPLibrary::SteamSetPropertyInt(int64 updateHandle, int64 instanceId, FString propertyName, int64 value)
{
	STEAM_CLIENT(false);
	SteamInventoryUpdateHandle_t handle = static_cast<SteamInventoryUpdateHandle_t>(updateHandle);
	SteamItemInstanceID_t instance = static_cast<SteamItemInstanceID_t>(instanceId);
	return SteamInventory()->SetProperty(handle, instance, StringCast<ANSICHAR>(*propertyName).Get(), value);
}

bool UToolkitSteamworksBPLibrary::SteamSetPropertyFloat(int64 updateHandle, int64 instanceId, FString propertyName, float value)
{
	STEAM_CLIENT(false);
	SteamInventoryUpdateHandle_t handle = static_cast<SteamInventoryUpdateHandle_t>(updateHandle);
	SteamItemInstanceID_t instance = static_cast<SteamItemInstanceID_t>(instanceId);
	return SteamInventory()->SetProperty(handle, instance, StringCast<ANSICHAR>(*propertyName).Get(), value);
}

int32 UToolkitSteamworksBPLibrary::SteamAddFavoriteGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort, FDateTime lastPlayed)
{
	STEAM_CLIENT(0);
	AppId_t app = static_cast<AppId_t>(appId);
	uint32 address = HeathenTools::IPAddress(ip);
	uint16 cPort = static_cast<uint16>(connectionPort);
	uint16 qPort = static_cast<uint16>(queryPort);
	return SteamMatchmaking()->AddFavoriteGame(app, address, cPort, qPort, 0x01, static_cast<uint32>(lastPlayed.ToUnixTimestamp()));
}

int32 UToolkitSteamworksBPLibrary::SteamAddHistoryGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort, FDateTime lastPlayed)
{
	STEAM_CLIENT(0);
	AppId_t app = static_cast<AppId_t>(appId);
	uint32 address = HeathenTools::IPAddress(ip);
	uint16 cPort = static_cast<uint16>(connectionPort);
	uint16 qPort = static_cast<uint16>(queryPort);
	return SteamMatchmaking()->AddFavoriteGame(app, address, cPort, qPort, 0x02, static_cast<uint32>(lastPlayed.ToUnixTimestamp()));
}

void UToolkitSteamworksBPLibrary::SteamAddRequestLobbyListDistanceFilter(UELobbyDistanceFilter filter)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->AddRequestLobbyListDistanceFilter(static_cast<ELobbyDistanceFilter>(filter));
}

void UToolkitSteamworksBPLibrary::SteamAddRequestLobbyListFilterSlotsAvailable(int32 slotsAvailable)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->AddRequestLobbyListFilterSlotsAvailable(slotsAvailable);
}

void UToolkitSteamworksBPLibrary::SteamAddRequestLobbyListNearValueFilter(FString key, int32 valueToBeCloseTo)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->AddRequestLobbyListNearValueFilter(StringCast<ANSICHAR>(*key).Get(), valueToBeCloseTo);
}

void UToolkitSteamworksBPLibrary::SteamAddRequestLobbyListNumericalFilter(FString key, int32 valueToMatch, UELobbyComparison comparisonType)
{
	STEAM_CLIENT(;);
	ELobbyComparison comp;
	switch (comparisonType)
	{
	case UELobbyComparison::EPC_EqualToOrLessThan:
		comp = ELobbyComparison::k_ELobbyComparisonEqualToOrLessThan;
		break;
	case UELobbyComparison::EPC_LessThan:
		comp = ELobbyComparison::k_ELobbyComparisonLessThan;
		break;
	case UELobbyComparison::EPC_Equal:
		comp = ELobbyComparison::k_ELobbyComparisonEqual;
		break;
	case UELobbyComparison::EPC_GreaterThan:
		comp = ELobbyComparison::k_ELobbyComparisonGreaterThan;
		break;
	case UELobbyComparison::EPC_EqualToOrGreaterThan:
		comp = ELobbyComparison::k_ELobbyComparisonEqualToOrGreaterThan;
		break;
	case UELobbyComparison::EPC_NotEqual:
		comp = ELobbyComparison::k_ELobbyComparisonNotEqual;
		break;
	default:
		comp = ELobbyComparison::k_ELobbyComparisonEqual;
		break;
	}
	SteamMatchmaking()->AddRequestLobbyListNumericalFilter(StringCast<ANSICHAR>(*key).Get(), valueToMatch, comp);
}

void UToolkitSteamworksBPLibrary::SteamAddRequestLobbyListResultCountFilter(int32 maxResults)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->AddRequestLobbyListResultCountFilter(maxResults);
}

void UToolkitSteamworksBPLibrary::SteamAddRequestLobbyListStringFilter(FString key, FString valueToMatch, UELobbyComparison comparisonType)
{
	STEAM_CLIENT(;);
	ELobbyComparison comp;
	switch (comparisonType)
	{
	case UELobbyComparison::EPC_EqualToOrLessThan:
		comp = ELobbyComparison::k_ELobbyComparisonEqualToOrLessThan;
		break;
	case UELobbyComparison::EPC_LessThan:
		comp = ELobbyComparison::k_ELobbyComparisonLessThan;
		break;
	case UELobbyComparison::EPC_Equal:
		comp = ELobbyComparison::k_ELobbyComparisonEqual;
		break;
	case UELobbyComparison::EPC_GreaterThan:
		comp = ELobbyComparison::k_ELobbyComparisonGreaterThan;
		break;
	case UELobbyComparison::EPC_EqualToOrGreaterThan:
		comp = ELobbyComparison::k_ELobbyComparisonEqualToOrGreaterThan;
		break;
	case UELobbyComparison::EPC_NotEqual:
		comp = ELobbyComparison::k_ELobbyComparisonNotEqual;
		break;
	default:
		comp = ELobbyComparison::k_ELobbyComparisonEqual;
		break;
	}

	SteamMatchmaking()->AddRequestLobbyListStringFilter(StringCast<ANSICHAR>(*key).Get(), StringCast<ANSICHAR>(*valueToMatch).Get(), comp);
}

void UToolkitSteamworksBPLibrary::SteamCreateLobby(UELobbyType type, int32 maxMembers, FLobbyCreate callback)
{
	STEAM_CLIENT(;);
	FLobbyCreateLinker* linker = new FLobbyCreateLinker(type, maxMembers, callback);
}

bool UToolkitSteamworksBPLibrary::SteamDeleteLobbyData(int64 lobbyId, FString key)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->DeleteLobbyData(INT64_TO_STEAMID(lobbyId), StringCast<ANSICHAR>(*key).Get());
}

FFavoriteGame UToolkitSteamworksBPLibrary::SteamGetFavoriteGame(int32 index)
{
	STEAM_CLIENT(FFavoriteGame());
	AppId_t app;
	uint32 ip;
	uint16 qport;
	uint16 cport;
	uint32 flag;
	uint32 time;

	SteamMatchmaking()->GetFavoriteGame(index, &app, &ip, &cport, &qport, &flag, &time);

	FFavoriteGame result;
	result.AppId = static_cast<int32>(app);
	result.ConnectionPort = static_cast<int32>(cport);
	result.QueryPort = static_cast<int32>(qport);
	result.Ip = HeathenTools::IPAddress(ip);
	result.LastPlayedOnServer = FDateTime::FromUnixTimestamp(time);
	result.bHistory = flag == 0x01;

	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetFavoriteGameCount()
{
	STEAM_CLIENT(0);
	return SteamMatchmaking()->GetFavoriteGameCount();
}

int64 UToolkitSteamworksBPLibrary::SteamGetLobbyByIndex(int32 index)
{
	STEAM_CLIENT(0);
	CSteamID lobby = SteamMatchmaking()->GetLobbyByIndex(index);
	return STEAMID_TO_INT64(lobby);
}

FChatEntry UToolkitSteamworksBPLibrary::SteamGetLobbyChatEntry(int64 lobbyId, int32 index)
{
	STEAM_CLIENT(FChatEntry());
	FChatEntry result;
	CSteamID lobby = INT64_TO_STEAMID(lobbyId);
	CSteamID user = CSteamID();

	const int32 BufferSize = 4096;
	uint8* data = new uint8[BufferSize];
	int32 dataLength = SteamMatchmaking()->GetLobbyChatEntry(lobby, index, &user, data, BufferSize, nullptr);

	result.Data = TArray<uint8>(data, dataLength);
	result.Type = UEChatEntryType::EPC_ChatMsg; //static_cast<UEChatEntryType>(type);
	result.String = BytesToString(data, dataLength);
	result.UserId = STEAMID_TO_INT64(user);

	delete[] data;  // Clean up the allocated memory
	return result;
}

FString UToolkitSteamworksBPLibrary::SteamGetLobbyData(int64 lobbyId, FString key)
{
	STEAM_CLIENT(FString());
	return FString(SteamMatchmaking()->GetLobbyData(INT64_TO_STEAMID(lobbyId), StringCast<ANSICHAR>(*key).Get()));
}

FLobbyData UToolkitSteamworksBPLibrary::SteamGetLobbyDataByIndex(int64 lobbyId, int32 index)
{
	STEAM_CLIENT(FLobbyData());
	FLobbyData result;
	CSteamID lobby = INT64_TO_STEAMID(lobbyId);
	char keyBuffer[255];
	char valueBuffer[8192];
	bool response = SteamMatchmaking()->GetLobbyDataByIndex(lobby, index, keyBuffer, 255, valueBuffer, 8192);

	if (response)
	{
		result.Key = FString(keyBuffer);
		result.Value = FString(valueBuffer);
	}
	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetLobbyDataCount(int64 lobbyId)
{
	STEAM_CLIENT(0);
	return SteamMatchmaking()->GetLobbyDataCount(INT64_TO_STEAMID(lobbyId));
}

FLobbyGameServer UToolkitSteamworksBPLibrary::SteamGetLobbyGameServer(int64 lobbyId)
{
	STEAM_CLIENT(FLobbyGameServer());
	FLobbyGameServer result;
	CSteamID lobby = INT64_TO_STEAMID(lobbyId);
	uint32 ip = 0;
	uint16 port = 0;
	CSteamID serverId = CSteamID();
	bool response = SteamMatchmaking()->GetLobbyGameServer(lobby, &ip, &port, &serverId);

	result.GameServerId = STEAMID_TO_INT64(serverId);
	result.Ip = HeathenTools::IPAddress(ip);
	result.bIsSet = response;
	result.Port = static_cast<int32>(port);

	return result;
}

int64 UToolkitSteamworksBPLibrary::SteamGetLobbyMemberByIndex(int64 lobbyId, int index)
{
	STEAM_CLIENT(0);
	CSteamID userId = SteamMatchmaking()->GetLobbyMemberByIndex(INT64_TO_STEAMID(lobbyId), index);
	return STEAMID_TO_INT64(userId);
}

FString UToolkitSteamworksBPLibrary::SteamGetLobbyMemberData(int64 lobbyId, int64 userId, FString key)
{
	STEAM_CLIENT(FString());
	return FString(SteamMatchmaking()->GetLobbyMemberData(INT64_TO_STEAMID(lobbyId), INT64_TO_STEAMID(userId), StringCast<ANSICHAR>(*key).Get()));
}

int32 UToolkitSteamworksBPLibrary::SteamGetLobbyMemberLimit(int64 lobbyId)
{
	STEAM_CLIENT(0);
	return SteamMatchmaking()->GetLobbyMemberLimit(INT64_TO_STEAMID(lobbyId));
}

int64 UToolkitSteamworksBPLibrary::SteamGetLobbyOwner(int64 lobbyId)
{
	STEAM_CLIENT(0);
	CSteamID ownerId = SteamMatchmaking()->GetLobbyOwner(INT64_TO_STEAMID(lobbyId));
	return STEAMID_TO_INT64(ownerId);
}

bool UToolkitSteamworksBPLibrary::SteamIsLobbyOwner(int64 lobbyId)
{
	CSteamID me = SteamUser()->GetSteamID();
	CSteamID owner = SteamMatchmaking()->GetLobbyOwner(INT64_TO_STEAMID(lobbyId));
	return me == owner;
}

int32 UToolkitSteamworksBPLibrary::SteamGetNumLobbyMembers(int64 lobbyId)
{
	STEAM_CLIENT(0);
	return SteamMatchmaking()->GetNumLobbyMembers(INT64_TO_STEAMID(lobbyId));
}

TArray<int64> UToolkitSteamworksBPLibrary::SteamGetLobbyMembers(int64 lobbyId, bool includeLocalUser)
{
	TArray<int64> result = TArray<int64>();
	STEAM_CLIENT(result);

	CSteamID lobby = INT64_TO_STEAMID(lobbyId);
	CSteamID me = SteamUser()->GetSteamID();
	int count = SteamMatchmaking()->GetNumLobbyMembers(lobby);
	for (int i = 0; i < count; i++)
	{
		CSteamID target = SteamMatchmaking()->GetLobbyMemberByIndex(lobby, i);
		if (includeLocalUser
			|| target != me)
			result.Add(STEAMID_TO_INT64(target));
	}

	return result;
}

bool UToolkitSteamworksBPLibrary::SteamInviteUserToLobby(int64 lobbyId, int64 userId)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->InviteUserToLobby(INT64_TO_STEAMID(lobbyId), INT64_TO_STEAMID(userId));
}

void UToolkitSteamworksBPLibrary::SteamJoinLobby(int64 lobbyId, FLobbyEnter callback)
{
	STEAM_CLIENT(;);
	FLobbyEnterLinker* linker = new FLobbyEnterLinker(lobbyId, callback);
}

void UToolkitSteamworksBPLibrary::SteamJoinLobbyHex(FString Hex, FLobbyEnter callback)
{
	STEAM_CLIENT(;);

	if (!HeathenTools::IsHexadecimal(Hex))
	{
		if (callback.IsBound())
			callback.Execute(0, false, UEChatRoomEnterResponse::EPC_Error);

		UE_LOG(LogTemp, Warning, TEXT("Input string is not a valid hexadecimal number: %s"), *Hex);
		return;
	}

	int Result = FParse::HexNumber(*Hex);

	// Handle overflow or conversion errors
	if (Result == 0 && Hex != TEXT("0"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Hexadecimal string conversion overflow or error."));
		return;
	}

	CSteamID steamId = CSteamID(Result, 393216, EUniverse::k_EUniversePublic, EAccountType::k_EAccountTypeChat);
	FLobbyEnterLinker* linker = new FLobbyEnterLinker(STEAMID_TO_INT64(steamId), callback);
}

void UToolkitSteamworksBPLibrary::SteamLeaveLobby(int64 lobbyId)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->LeaveLobby(INT64_TO_STEAMID(lobbyId));
}

void UToolkitSteamworksBPLibrary::SteamQuickMatch(FLobbyMatch callback)
{
	STEAM_CLIENT(;);
	FLobbyQuickMatchLinker* linker = new FLobbyQuickMatchLinker(callback);
}

bool UToolkitSteamworksBPLibrary::SteamRemoveFavoriteGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->RemoveFavoriteGame(static_cast<AppId_t>(appId), HeathenTools::IPAddress(ip), static_cast<uint16>(connectionPort), static_cast<uint16>(queryPort), 0x01);
}

bool UToolkitSteamworksBPLibrary::SteamRemoveHistoryGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->RemoveFavoriteGame(static_cast<AppId_t>(appId), HeathenTools::IPAddress(ip), static_cast<uint16>(connectionPort), static_cast<uint16>(queryPort), 0x02);
}

bool UToolkitSteamworksBPLibrary::SteamRequestLobbyData(int64 lobbyId)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->RequestLobbyData(INT64_TO_STEAMID(lobbyId));
}

void UToolkitSteamworksBPLibrary::SteamRequestLobbyList(FLobbyMatchList callback)
{
	STEAM_CLIENT(;);
	FLobbyMatchListLinker* linker = new FLobbyMatchListLinker(callback);
}

bool UToolkitSteamworksBPLibrary::SteamSendLobbyChatData(int64 lobbyId, TArray<uint8> data)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->SendLobbyChatMsg(INT64_TO_STEAMID(lobbyId), (const void*)data.GetData(), data.Num());
}

bool UToolkitSteamworksBPLibrary::SteamSendLobbyChatMessage(int64 lobbyId, FString message)
{
	STEAM_CLIENT(false);

	int32 MessageLength = message.Len();
	uint8* ByteArray = new uint8[MessageLength];

	StringToBytes(message, ByteArray, MessageLength);

	bool bResult = SteamMatchmaking()->SendLobbyChatMsg(INT64_TO_STEAMID(lobbyId), ByteArray, MessageLength);

	delete[] ByteArray;
	return bResult;
}

bool UToolkitSteamworksBPLibrary::SteamSetLobbyData(int64 lobbyId, FString key, FString value)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->SetLobbyData(INT64_TO_STEAMID(lobbyId), StringCast<ANSICHAR>(*key).Get(), StringCast<ANSICHAR>(*value).Get());
}

void UToolkitSteamworksBPLibrary::SteamSetLobbyGameHost(int64 lobbyId)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->SetLobbyGameServer(INT64_TO_STEAMID(lobbyId), 0, 0, SteamUser()->GetSteamID());
}

void UToolkitSteamworksBPLibrary::SteamSetLobbyGameServerId(int64 lobbyId, int64 serverId)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->SetLobbyGameServer(INT64_TO_STEAMID(lobbyId), 0, 0, INT64_TO_STEAMID(serverId));
}

void UToolkitSteamworksBPLibrary::SteamSetLobbyGameServerAddress(int64 lobbyId, FString ip, int32 port)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->SetLobbyGameServer(INT64_TO_STEAMID(lobbyId), HeathenTools::IPAddress(ip), static_cast<uint16>(port), CSteamID());
}

void UToolkitSteamworksBPLibrary::SteamSetLobbyGameServer(int64 lobbyId, int64 serverId, FString ip, int32 port)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->SetLobbyGameServer(INT64_TO_STEAMID(lobbyId), HeathenTools::IPAddress(ip), static_cast<uint16>(port), INT64_TO_STEAMID(serverId));
}

bool UToolkitSteamworksBPLibrary::SteamSetLobbyJoinable(int64 lobbyId, bool joinable)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->SetLobbyJoinable(INT64_TO_STEAMID(lobbyId), joinable);
}

void UToolkitSteamworksBPLibrary::SteamSetLobbyMemberData(int64 lobbyId, FString key, FString value)
{
	STEAM_CLIENT(;);
	SteamMatchmaking()->SetLobbyMemberData(INT64_TO_STEAMID(lobbyId), StringCast<ANSICHAR>(*key).Get(), StringCast<ANSICHAR>(*value).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetLobbyMemberLimit(int64 lobbyId, int32 maxMembers)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->SetLobbyMemberLimit(INT64_TO_STEAMID(lobbyId), maxMembers);
}

bool UToolkitSteamworksBPLibrary::SteamSetLobbyOwner(int64 lobbyId, int64 userId)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->SetLobbyOwner(INT64_TO_STEAMID(lobbyId), INT64_TO_STEAMID(userId));
}

bool UToolkitSteamworksBPLibrary::SteamSetLobbyType(int64 lobbyId, UELobbyType type)
{
	STEAM_CLIENT(false);
	return SteamMatchmaking()->SetLobbyType(INT64_TO_STEAMID(lobbyId), static_cast<ELobbyType>(type));
}

void UToolkitSteamworksBPLibrary::SteamServerPingServer(FString address, int32 port, FSteamMatchmakingPingResponse callback)
{
	STEAM_CLIENT(;);
	SteamMatchmakingPingResponseLinker* linker = new SteamMatchmakingPingResponseLinker(address, port, callback);
}

void UToolkitSteamworksBPLibrary::SteamServerPlayerDetails(FString address, int32 port, FSteamMatchmakingPlayersResponse callback)
{
	STEAM_CLIENT(;);
	SteamMatchmakingPlayersResponseLinker* linker = new SteamMatchmakingPlayersResponseLinker(address, port, callback);
}

void UToolkitSteamworksBPLibrary::SteamServerRequestFavoritesServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback)
{
	STEAM_CLIENT(;);

	if (filter.Num() > 0)
	{
		TArray<MatchMakingKeyValuePair_t> pFilter;
		pFilter.Reserve(filter.Num());
		for (int i = 0; i < filter.Num(); i++)
		{
			MatchMakingKeyValuePair_t nEntry(StringCast<ANSICHAR>(*filter[i].Key).Get(), StringCast<ANSICHAR>(*filter[i].Value).Get());
			pFilter.Add(nEntry);
		}

		// Get a pointer to the data in the vector
		MatchMakingKeyValuePair_t* pFilterArray = pFilter.GetData();
		uint32 nFilters = pFilter.Num();

		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestFavoritesServerList(static_cast<AppId_t>(appId), &pFilterArray, nFilters, linker);
	}
	else
	{
		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestFavoritesServerList(static_cast<AppId_t>(appId), NULL, 0, linker);
	}
}

void UToolkitSteamworksBPLibrary::SteamServerRequestFriendsServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback)
{
	STEAM_CLIENT(;);

	if (filter.Num() > 0)
	{
		TArray<MatchMakingKeyValuePair_t> pFilter;
		pFilter.Reserve(filter.Num());
		for (int i = 0; i < filter.Num(); i++)
		{
			MatchMakingKeyValuePair_t nEntry(StringCast<ANSICHAR>(*filter[i].Key).Get(), StringCast<ANSICHAR>(*filter[i].Value).Get());
			pFilter.Add(nEntry);
		}

		// Get a pointer to the data in the vector
		MatchMakingKeyValuePair_t* pFilterArray = pFilter.GetData();
		uint32 nFilters = pFilter.Num();

		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestFriendsServerList(static_cast<AppId_t>(appId), &pFilterArray, nFilters, linker);
	}
	else
	{
		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestFriendsServerList(static_cast<AppId_t>(appId), NULL, 0, linker);
	}
}

void UToolkitSteamworksBPLibrary::SteamServerRequestHistoryServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback)
{
	STEAM_CLIENT(;);

	if (filter.Num() > 0)
	{
		TArray<MatchMakingKeyValuePair_t> pFilter;
		pFilter.Reserve(filter.Num());
		for (int i = 0; i < filter.Num(); i++)
		{
			MatchMakingKeyValuePair_t nEntry(StringCast<ANSICHAR>(*filter[i].Key).Get(), StringCast<ANSICHAR>(*filter[i].Value).Get());
			pFilter.Add(nEntry);
		}

		// Get a pointer to the data in the vector
		MatchMakingKeyValuePair_t* pFilterArray = pFilter.GetData();
		uint32 nFilters = pFilter.Num();

		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestHistoryServerList(static_cast<AppId_t>(appId), &pFilterArray, nFilters, linker);
	}
	else
	{
		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestHistoryServerList(static_cast<AppId_t>(appId), NULL, 0, linker);
	}
}

void UToolkitSteamworksBPLibrary::SteamServerRequestInternetServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback)
{
	STEAM_CLIENT(;);

	if (filter.Num() > 0)
	{
		TArray<MatchMakingKeyValuePair_t> pFilter;
		pFilter.Reserve(filter.Num());
		for (int i = 0; i < filter.Num(); i++)
		{
			MatchMakingKeyValuePair_t nEntry(StringCast<ANSICHAR>(*filter[i].Key).Get(), StringCast<ANSICHAR>(*filter[i].Value).Get());
			pFilter.Add(nEntry);
		}

		// Get a pointer to the data in the vector
		MatchMakingKeyValuePair_t* pFilterArray = pFilter.GetData();
		uint32 nFilters = pFilter.Num();

		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestInternetServerList(static_cast<AppId_t>(appId), &pFilterArray, nFilters, linker);
	}
	else
	{
		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestInternetServerList(static_cast<AppId_t>(appId), NULL, 0, linker);
	}
}

void UToolkitSteamworksBPLibrary::SteamServerRequestLANServerList(int32 appId, FSteamServerListResponce callback)
{
	STEAM_CLIENT(;);


	SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
	linker->listHandle = SteamMatchmakingServers()->RequestLANServerList(static_cast<AppId_t>(appId), linker);
}

void UToolkitSteamworksBPLibrary::SteamServerRequestSpectatorServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback)
{
	STEAM_CLIENT(;);

	if (filter.Num() > 0)
	{
		TArray<MatchMakingKeyValuePair_t> pFilter;
		pFilter.Reserve(filter.Num());
		for (int i = 0; i < filter.Num(); i++)
		{
			MatchMakingKeyValuePair_t nEntry(StringCast<ANSICHAR>(*filter[i].Key).Get(), StringCast<ANSICHAR>(*filter[i].Value).Get());
			pFilter.Add(nEntry);
		}

		// Get a pointer to the data in the vector
		MatchMakingKeyValuePair_t* pFilterArray = pFilter.GetData();
		uint32 nFilters = pFilter.Num();

		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestSpectatorServerList(static_cast<AppId_t>(appId), &pFilterArray, nFilters, linker);
	}
	else
	{
		SteamMatchmakingServerListResponseLinker* linker = new SteamMatchmakingServerListResponseLinker(callback);
		linker->listHandle = SteamMatchmakingServers()->RequestSpectatorServerList(static_cast<AppId_t>(appId), NULL, 0, linker);
	}
}

void UToolkitSteamworksBPLibrary::SteamServerRules(FString address, int32 port, FSteamMatchmakingRulesResponse callback)
{
	STEAM_CLIENT(;);
	SteamMatchmakingRulesResponseLinker* linker = new SteamMatchmakingRulesResponseLinker(address, port, callback);
}

bool UToolkitSteamworksBPLibrary::SteamBeginFileWriteBatch()
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->BeginFileWriteBatch();
}

bool UToolkitSteamworksBPLibrary::SteamEndFileWriteBatch()
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->EndFileWriteBatch();;
}

bool UToolkitSteamworksBPLibrary::SteamFileDelete(FString fileName)
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->FileDelete(StringCast<ANSICHAR>(*fileName).Get());
}

bool UToolkitSteamworksBPLibrary::SteamFileExists(FString fileName)
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->FileExists(StringCast<ANSICHAR>(*fileName).Get());
}

bool UToolkitSteamworksBPLibrary::SteamFileForget(FString fileName)
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->FileForget(StringCast<ANSICHAR>(*fileName).Get());
}

TArray<uint8> UToolkitSteamworksBPLibrary::SteamFileRead(FString fileName)
{
	STEAM_CLIENT(TArray<uint8>());

	if (SteamRemoteStorage()->FileExists(StringCast<ANSICHAR>(*fileName).Get()))
	{
		TArray<uint8> InSaveData;

		int32 fileSize = SteamRemoteStorage()->GetFileSize(StringCast<ANSICHAR>(*fileName).Get());
		InSaveData.SetNumUninitialized(fileSize);
		SteamRemoteStorage()->FileRead(StringCast<ANSICHAR>(*fileName).Get(), InSaveData.GetData(), fileSize);

		return InSaveData;
	}
	else
		return TArray<uint8>();
}

void UToolkitSteamworksBPLibrary::SteamFileReadAsync(FString fileName, FSteamClientFileReadAsyncCallback callback)
{
	STEAM_CLIENT(;);
	RemoteStorageClientFileReadAsyncCompleteLinker* linker = new RemoteStorageClientFileReadAsyncCompleteLinker(fileName, callback);
}

void UToolkitSteamworksBPLibrary::SteamFileShare(FString fileName, FSteamClientFileShareCallback callback)
{
	STEAM_CLIENT(;);
	FSteamClientFileShareLinker* linker = new FSteamClientFileShareLinker(fileName, callback);
}

bool UToolkitSteamworksBPLibrary::SteamFileWrite(FString fileName, TArray<uint8> data)
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->FileWrite(StringCast<ANSICHAR>(*fileName).Get(), data.GetData(), data.Num());
}

void UToolkitSteamworksBPLibrary::SteamFileWriteAsync(FString fileName, TArray<uint8> data, FSteamClientFileWriteAsyncCallback callback)
{
	STEAM_CLIENT(;);
	RemoteStorageClientFileWriteAsyncCompleteLinker* linker = new RemoteStorageClientFileWriteAsyncCompleteLinker(fileName, data, callback);
}

bool UToolkitSteamworksBPLibrary::SteamGetFileCount()
{
	STEAM_CLIENT(false);
	return false;
}

FRemoteStorageFileInfo UToolkitSteamworksBPLibrary::SteamGetFileNameAndSize(int32 index)
{
	FRemoteStorageFileInfo result = FRemoteStorageFileInfo();
	STEAM_CLIENT(result);
	result.FileName = FString(SteamRemoteStorage()->GetFileNameAndSize(index, &(result.FileSize)));
	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetFileSize(FString fileName)
{
	STEAM_CLIENT(0);
	return SteamRemoteStorage()->GetFileSize(StringCast<ANSICHAR>(*fileName).Get());
}

FDateTime UToolkitSteamworksBPLibrary::SteamGetFileTimestamp(FString fileName)
{
	STEAM_CLIENT(FDateTime());
	FDateTime result = FDateTime::FromUnixTimestamp(static_cast<int64>(SteamRemoteStorage()->GetFileTimestamp(StringCast<ANSICHAR>(*fileName).Get())));

	return result;
}

FRemoteStorageQuota UToolkitSteamworksBPLibrary::SteamGetQuota()
{
	FRemoteStorageQuota result = FRemoteStorageQuota();
	STEAM_CLIENT(result);
	uint64 total = 0;
	uint64 available = 0;
	SteamRemoteStorage()->GetQuota(&total, &available);
	result.TotalCapacity = static_cast<int64>(total);
	result.Available = static_cast<int64>(available);
	return result;
}

UERemoteStoragePlatform UToolkitSteamworksBPLibrary::SteamGetSyncPlatforms(FString fileName)
{
	STEAM_CLIENT(UERemoteStoragePlatform::EPC_None);
	return static_cast<UERemoteStoragePlatform>(SteamRemoteStorage()->GetSyncPlatforms(StringCast<ANSICHAR>(*fileName).Get()));
}

FRemoteStorageUGCDetails UToolkitSteamworksBPLibrary::SteamGetUGCDetails(int64 ugcHandle)
{
	FRemoteStorageUGCDetails result = FRemoteStorageUGCDetails();
	AppId_t appId = AppId_t();
	uint32 length = 128;
	char* name = new char[length];
	int32 fileLength = 0;
	CSteamID owner = CSteamID();

	if (SteamRemoteStorage()->GetUGCDetails(static_cast<UGCHandle_t>(ugcHandle), &appId, &name, &fileLength, &owner))
	{
		// Copy the file details
		result.AppId = appId;
		result.FileName = FString(name);
		result.FileSize = fileLength;
		result.OwnerId = STEAMID_TO_INT64(owner);
	}

	delete[] name;

	return result;
}

FRemoteStorageUGCDownloadProgress UToolkitSteamworksBPLibrary::SteamUGCDownloadProgress(int64 ugcHandle)
{
	FRemoteStorageUGCDownloadProgress result = FRemoteStorageUGCDownloadProgress();
	STEAM_CLIENT(result);
	int32 downloaded = 0;
	int32 expected = 0;
	if (SteamRemoteStorage()->GetUGCDownloadProgress(static_cast<UGCHandle_t>(ugcHandle), &downloaded, &expected))
	{
		result.Downloaded = downloaded;
		result.Expected = expected;
	}

	return result;
}

bool UToolkitSteamworksBPLibrary::SteamIsCloudEnabledForAccount()
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->IsCloudEnabledForAccount();
}

bool UToolkitSteamworksBPLibrary::SteamIsCloudEnabledForApp()
{
	STEAM_CLIENT(false);
	return SteamRemoteStorage()->IsCloudEnabledForApp();
}

void UToolkitSteamworksBPLibrary::SteamSetCloudEnabledForApp(bool enabled)
{
	STEAM_CLIENT(;);
	SteamRemoteStorage()->SetCloudEnabledForApp(enabled);
}

bool UToolkitSteamworksBPLibrary::SteamSetSyncPlatforms(FString fileName, UERemoteStoragePlatform platform)
{
	STEAM_CLIENT(false);

	//All is max value of int32, Unreal handles enums as uint8 so we need to convert Unreal all manually to Valve All
	//for all other values the static cast is valid
	ERemoteStoragePlatform input = ERemoteStoragePlatform::k_ERemoteStoragePlatformAll;
	if (platform != UERemoteStoragePlatform::EPC_All)
		input = static_cast<ERemoteStoragePlatform>(platform);

	return SteamRemoteStorage()->SetSyncPlatforms(StringCast<ANSICHAR>(*fileName).Get(), input);
}

void UToolkitSteamworksBPLibrary::SteamAddAppDependency(int64 parentFileId, int32 appId, FAddAppDependencyResultCallback callback)
{
	STEAM_CLIENT(;);
	AddAppDependencyResultLinker* linker = new AddAppDependencyResultLinker(parentFileId, appId, callback);
}

void UToolkitSteamworksBPLibrary::SteamAddDependency(int64 parentFileId, int64 childFileId, FAddUGCDependencyResultCallback callback)
{
	STEAM_CLIENT(;);
	AddUGCDependencyResultLinker* linker = new AddUGCDependencyResultLinker(parentFileId, childFileId, callback);
}

void UToolkitSteamworksBPLibrary::SteamAddExcludedTag(int64 queryHandle, FString tagName)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddExcludedTag(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*tagName).Get());
}

void UToolkitSteamworksBPLibrary::SteamAddItemKeyValueTag(int64 updateHandle, FString tagName, FString tagValue)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddItemKeyValueTag(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*tagName).Get(), StringCast<ANSICHAR>(*tagValue).Get());
}

void UToolkitSteamworksBPLibrary::SteamAddItemPreviewFile(int64 updateHandle, FString absoluteFilePath, UEItemPreviewType type)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddItemPreviewFile(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*absoluteFilePath).Get(), static_cast<EItemPreviewType>(type));
}

void UToolkitSteamworksBPLibrary::SteamAddItemPreviewVideo(int64 updateHandle, FString YouTubeVideoId)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddItemPreviewVideo(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*YouTubeVideoId).Get());
}

void UToolkitSteamworksBPLibrary::SteamAddItemToFavorites(int32 appId, int64 fileId)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddItemToFavorites(static_cast<AppId_t>(appId), static_cast<PublishedFileId_t>(fileId));
}

void UToolkitSteamworksBPLibrary::SteamAddRequiredTag(int64 queryHandle, FString key)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddRequiredTag(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*key).Get());
}

void UToolkitSteamworksBPLibrary::SteamAddRequiredKeyValueTag(int64 queryHandle, FString key, FString value)
{
	STEAM_CLIENT(;);
	SteamUGC()->AddRequiredKeyValueTag(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*key).Get(), StringCast<ANSICHAR>(*value).Get());
}

void UToolkitSteamworksBPLibrary::SteamAddRequiredTagGroup(int64 queryHandle, TArray<FString> tags)
{
	STEAM_CLIENT(;);
	const char** stringPointers = new const char* [tags.Num()];
	for (int i = 0; i < tags.Num(); ++i)
	{
		stringPointers[i] = StringCast<ANSICHAR>(*tags[i]).Get();
	}

	SteamParamStringArray_t sArray = SteamParamStringArray_t();
	sArray.m_ppStrings = stringPointers;
	sArray.m_nNumStrings = tags.Num();

	SteamUGC()->AddRequiredTagGroup(static_cast<UGCQueryHandle_t>(queryHandle), &sArray);

	delete[] stringPointers;
}

void UToolkitSteamworksBPLibrary::SteamCreateItem(int32 appId, UEWorkshopFileType type, FCreateItemResultCallback callback)
{
	STEAM_CLIENT(;);
	CreateItemResultLinker* linker = new CreateItemResultLinker(appId, type, callback);
}

int64 UToolkitSteamworksBPLibrary::SteamCreateQueryAllUGCRequest(UEUGCQuery queryType, UEUGCMatchingUGCType matchingType, int32 createdByAppId, int32 createdForAppId, int32 pageNumber)
{
	STEAM_CLIENT(0);
	UGCQueryHandle_t result = SteamUGC()->CreateQueryAllUGCRequest(static_cast<EUGCQuery>(queryType), static_cast<EUGCMatchingUGCType>(matchingType), static_cast<AppId_t>(createdByAppId), static_cast<AppId_t>(createdForAppId), static_cast<uint32>(pageNumber));
	return static_cast<int64>(result);
}

int64 UToolkitSteamworksBPLibrary::SteamCreateQueryUGCDetailsRequest(TArray<int64> fileIds)
{
	STEAM_CLIENT(0);
	PublishedFileId_t* pubIds = new PublishedFileId_t[fileIds.Num()];
	for (int i = 0; i < fileIds.Num(); ++i)
	{
		pubIds[i] = static_cast<PublishedFileId_t>(fileIds[i]);
	}

	UGCQueryHandle_t handle = SteamUGC()->CreateQueryUGCDetailsRequest(pubIds, fileIds.Num());
	delete[] pubIds;
	return static_cast<int64>(handle);
}

int64 UToolkitSteamworksBPLibrary::SteamCreateQueryUserUGCRequest(int32 accountId, UEUserUGCList listType, UEUGCMatchingUGCType matchingType, UEUserUGCListSortOrder sortOrder, int32 creatorAppId, int32 consumerAppId, int32 pageNumber)
{
	STEAM_CLIENT(0);
	UGCQueryHandle_t handle = SteamUGC()->CreateQueryUserUGCRequest(static_cast<AccountID_t>(accountId), static_cast<EUserUGCList>(listType), static_cast<EUGCMatchingUGCType>(matchingType), static_cast<EUserUGCListSortOrder>(sortOrder), static_cast<AppId_t>(creatorAppId), static_cast<AppId_t>(consumerAppId), static_cast<uint32>(pageNumber));
	return static_cast<int64>(handle);
}

void UToolkitSteamworksBPLibrary::SteamDeleteItem(int64 fileId, FDeleteItemResultCallback callback)
{
	STEAM_CLIENT(;);
	DeleteItemResultLinker* link = new DeleteItemResultLinker(fileId, callback);
}

bool UToolkitSteamworksBPLibrary::SteamDownloadItem(int64 fileId, bool highPriority)
{
	STEAM_CLIENT(false);
	return SteamUGC()->DownloadItem(static_cast<PublishedFileId_t>(fileId), highPriority);
}

FUSGCItemDownloadInfo UToolkitSteamworksBPLibrary::SteamGetItemDownloadInfo(int64 fileId)
{
	FUSGCItemDownloadInfo result = FUSGCItemDownloadInfo();
	STEAM_CLIENT(result);
	uint64 down;
	uint64 total;
	result.bRequestResult = SteamUGC()->GetItemDownloadInfo(static_cast<PublishedFileId_t>(fileId), &down, &total);
	result.Downloaded = static_cast<int64>(down);
	result.Total = static_cast<int64>(total);
	return result;
}

FSteamInstallationInfo UToolkitSteamworksBPLibrary::SteamGetItemInstallInfo(int64 fileId)
{
	FSteamInstallationInfo result = FSteamInstallationInfo();
	STEAM_CLIENT(result);
	uint64 diskSize;
	char* folder = new char[1024];
	uint32 timestamp;
	result.bRequestResult = SteamUGC()->GetItemInstallInfo(static_cast<PublishedFileId_t>(fileId), &diskSize, folder, 1024, &timestamp);
	result.Path = FString(folder);
	result.DiskSize = static_cast<int64>(diskSize);
	result.Timestamp = FDateTime::FromUnixTimestamp(static_cast<int64>(timestamp));
	return result;
}

UEItemState UToolkitSteamworksBPLibrary::SteamGetItemState(int64 fileId)
{
	STEAM_CLIENT(UEItemState::EPC_None);
	uint32 flags = SteamUGC()->GetItemState(static_cast<PublishedFileId_t>(fileId));
	return static_cast<UEItemState>(flags);
}

FUGCItemUpdateProgress UToolkitSteamworksBPLibrary::SteamGetItemUpdateProgress(int64 updateHandle)
{
	FUGCItemUpdateProgress result = FUGCItemUpdateProgress();
	STEAM_CLIENT(result);
	uint64 proc;
	uint64 tot;
	EItemUpdateStatus ret = SteamUGC()->GetItemUpdateProgress(static_cast<UGCHandle_t>(updateHandle), &proc, &tot);
	result.status = static_cast<UEItemUpdateStatus>(ret);
	result.Processed = static_cast<int64>(proc);
	result.Total = static_cast<int64>(tot);
	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetNumSubscribedItems()
{
	STEAM_CLIENT(0);
	return static_cast<int32>(SteamUGC()->GetNumSubscribedItems());
}

FUGCAdditionalPreviewResult UToolkitSteamworksBPLibrary::SteamGetQueryUGCAdditionalPreview(int64 queryHandle, int32 index, int32 previewIndex)
{
	FUGCAdditionalPreviewResult result = FUGCAdditionalPreviewResult();
	STEAM_CLIENT(result);
	char* videoId = new char[128];
	char* originalfileName = new char[1024];
	EItemPreviewType preType;
	result.bRequestResult = SteamUGC()->GetQueryUGCAdditionalPreview(static_cast<UGCQueryHandle_t>(queryHandle)
		, static_cast<uint32>(index)
		, static_cast<uint32>(previewIndex)
		, videoId
		, 128
		, originalfileName
		, 1024
		, &preType);

	result.OriginalFileName = FString(originalfileName);
	result.UrlOrVideoId = FString(videoId);
	result.Type = static_cast<UEItemPreviewType>(preType);

	return result;
}

FUGCQueryUGCChildrenResult UToolkitSteamworksBPLibrary::SteamGetQueryUGCChildren(int64 queryHandle, int32 index, int32 numberOfChildren)
{
	FUGCQueryUGCChildrenResult result = FUGCQueryUGCChildrenResult();
	STEAM_CLIENT(result);
	PublishedFileId_t* fileIds = new PublishedFileId_t[numberOfChildren];
	result.bRequestStatus = SteamUGC()->GetQueryUGCChildren(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), fileIds, static_cast<uint32>(numberOfChildren));
	for (int i = 0; i < numberOfChildren; i++)
	{
		result.FileIDs.Add(static_cast<int64>(fileIds[i]));
	}
	delete[] fileIds;
	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetQueryUGCNumTags(int64 queryHandle, int32 index)
{
	STEAM_CLIENT(0);
	uint32 result = SteamUGC()->GetQueryUGCNumTags(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index));
	return static_cast<int32>(result);
}

FString UToolkitSteamworksBPLibrary::SteamGetQueryUGCTag(int64 queryHandle, int32 index, int32 tagIndex)
{
	STEAM_CLIENT(FString());

	char* value = new char[128];
	SteamUGC()->GetQueryUGCTag(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), static_cast<uint32>(tagIndex), value, 128);
	FString result = FString(value);
	return result;
}

FString UToolkitSteamworksBPLibrary::SteamGetQueryUGCTagDisplayName(int64 queryHandle, int32 index, int32 tagIndex)
{
	STEAM_CLIENT(FString());

	char* value = new char[256];
	SteamUGC()->GetQueryUGCTagDisplayName(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), static_cast<uint32>(tagIndex), value, 256);
	FString result = FString(value);
	return result;
}

FKeyValuePair UToolkitSteamworksBPLibrary::SteamGetQueryUGCKeyValueTag(int64 queryHandle, int32 index, int32 tagIndex)
{
	FKeyValuePair result = FKeyValuePair();
	STEAM_CLIENT(result);

	char* key = new char[128];
	char* value = new char[128];
	SteamUGC()->GetQueryUGCKeyValueTag(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), static_cast<uint32>(tagIndex), key, 128, value, 128);
	result.Key = FString(key);
	result.Value = FString(value);

	return result;
}

TArray<UEUGCContentDescriptorID> UToolkitSteamworksBPLibrary::SteamGetQueryUGCContentDescriptors(int64 queryHandle, int32 index)
{
	TArray<UEUGCContentDescriptorID> result;
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	STEAM_CLIENT(result);
	EUGCContentDescriptorID* pDec = new EUGCContentDescriptorID[5];
	uint32 ret = SteamUGC()->GetQueryUGCContentDescriptors(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), pDec, 5);

	if (ret > 0)
	{
		for (uint32 i = 0; i < ret; i++)
		{
			result.Add(static_cast<UEUGCContentDescriptorID>(pDec[i]));
		}
	}

	delete[] pDec;
#else
	FString SteamVersion = FString::Printf(TEXT("%d.%d"), STEAM_MAJOR, STEAM_MINOR);
	UE_LOG(LogTemp, Error, TEXT("Get Query Content Descriptor is not available in Steamworks v%s"), *SteamVersion);
#endif
	return result;
}

FString UToolkitSteamworksBPLibrary::SteamGetQueryUGCMetadata(int64 queryHandle, int32 index)
{
	STEAM_CLIENT(FString());

	char* value = new char[k_cchDeveloperMetadataMax];
	SteamUGC()->GetQueryUGCMetadata(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), value, k_cchDeveloperMetadataMax);
	FString result = FString(value);
	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetQueryUGCNumAdditionalPreviews(int64 queryHandle, int32 index)
{
	STEAM_CLIENT(0);
	uint32 result = SteamUGC()->GetQueryUGCNumAdditionalPreviews(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index));
	return static_cast<int32>(result);
}

int32 UToolkitSteamworksBPLibrary::SteamGetQueryUGCNumKeyValueTags(int64 queryHandle, int32 index)
{
	STEAM_CLIENT(0);
	uint32 result = SteamUGC()->GetQueryUGCNumKeyValueTags(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index));
	return static_cast<int32>(result);
}

FString UToolkitSteamworksBPLibrary::SteamGetQueryUGCPreviewURL(int64 queryHandle, int32 index)
{
	STEAM_CLIENT(FString());
	char* value = new char[1024];
	SteamUGC()->GetQueryUGCPreviewURL(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), value, 1024);
	FString result = FString(value);
	return result;
}

FSteamUGCDetails UToolkitSteamworksBPLibrary::SteamGetQueryUGCResult(int64 queryHandle, int32 index)
{
	FSteamUGCDetails result = FSteamUGCDetails();
	STEAM_CLIENT(result);
	SteamUGCDetails_t details;
	if (SteamUGC()->GetQueryUGCResult(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), &details))
	{
		result.bAcceptedForUse = details.m_bAcceptedForUse;
		result.bBanned = details.m_bBanned;
		result.ConsumerAppId = static_cast<int32>(details.m_nConsumerAppID);
		result.CreatorAppId = static_cast<int32>(details.m_nCreatorAppID);
		result.Description = FString(details.m_rgchDescription);
		result.FileHandle = static_cast<int64>(details.m_hFile);
		result.FileId = static_cast<int64>(details.m_nPublishedFileId);
		result.FileName = FString(details.m_pchFileName);
		result.FileSize = details.m_nFileSize;
		result.FileType = static_cast<UEWorkshopFileType>(details.m_eFileType);
		result.NumberOfChildren = static_cast<int32>(details.m_unNumChildren);
		result.OwnerId = static_cast<int64>(details.m_ulSteamIDOwner);
		result.PreviewFileHandle = static_cast<int64>(details.m_hPreviewFile);
		result.PreviewFileSize = details.m_nPreviewFileSize;
		result.Result = static_cast<UEResult>(details.m_eResult);
		result.Score = details.m_flScore;

		FString tagString = FString(details.m_rgchTags);
		tagString.ParseIntoArray(result.Tags, TEXT(","), true);

		result.bTagsTruncated = details.m_bTagsTruncated;
		result.TimeAddedToUserList = FDateTime::FromUnixTimestamp(static_cast<int64>(details.m_rtimeAddedToUserList));
		result.TimeCreated = FDateTime::FromUnixTimestamp(static_cast<int64>(details.m_rtimeCreated));
		result.TimeUpdated = FDateTime::FromUnixTimestamp(static_cast<int64>(details.m_rtimeUpdated));
		result.Title = FString(details.m_rgchTitle);
		result.Url = FString(details.m_rgchURL);
		result.Visibility = static_cast<UERemoteStoragePublishedFileVisibility>(details.m_eVisibility);
		result.VotesDown = static_cast<int32>(details.m_unVotesDown);
		result.VotesUp = static_cast<int32>(details.m_unVotesUp);
	}
	else
		result.Result = UEResult::EPC_Fail;

	return result;
}

int64 UToolkitSteamworksBPLibrary::SteamGetQueryUGCStatistic(int64 queryHandle, int32 index, UEItemStatistic statistic)
{
	STEAM_CLIENT(0);
	uint64 val;
	SteamUGC()->GetQueryUGCStatistic(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(index), static_cast<EItemStatistic>(statistic), &val);
	return static_cast<int64>(val);
}

TArray<int64> UToolkitSteamworksBPLibrary::SteamGetSubscribedItems()
{
	TArray<int64> ret = TArray<int64>();

	STEAM_CLIENT(ret);

	uint32 count = SteamUGC()->GetNumSubscribedItems();
	PublishedFileId_t* buffer = new PublishedFileId_t[count];
	uint64 result = SteamUGC()->GetSubscribedItems(buffer, count);

	for (int i = 0; i < result; i++)
	{
		ret.Add(static_cast<int64>(buffer[i]));
	}

	delete[] buffer;

	return ret;
}

void UToolkitSteamworksBPLibrary::SteamGetUserItemVote(int64 fileId, FGetUserItemVoteResultCallback callback)
{
	STEAM_CLIENT(;);
	GetUserItemVoteResultLinker* linker = new GetUserItemVoteResultLinker(fileId, callback);
}

void UToolkitSteamworksBPLibrary::SteamReleaseQueryUGCRequest(int64 queryHandle)
{
	STEAM_CLIENT(;);
	SteamUGC()->ReleaseQueryUGCRequest(static_cast<UGCQueryHandle_t>(queryHandle));
}

void UToolkitSteamworksBPLibrary::SteamRemoveAppDependency(int64 fileId, int32 appId, FRemoveAppDependencyResultCallback callback)
{
	STEAM_CLIENT(;);
	RemoveAppDependencyResultLinker* linker = new RemoveAppDependencyResultLinker(fileId, appId, callback);
}

void UToolkitSteamworksBPLibrary::RemoveDependency(int64 parentFileId, int64 childFileId, FRemoveUGCDependencyResultCallback callback)
{
	STEAM_CLIENT(;);
	RemoveUGCDependencyResultLinker* linker = new RemoveUGCDependencyResultLinker(parentFileId, childFileId, callback);
}

void UToolkitSteamworksBPLibrary::SteamRemoveItemFromFavorites(int32 appId, int64 fileId, FUserFavoriteItemsListChangedCallback callback)
{
	STEAM_CLIENT(;);
	UserFavoriteItemsListChangedLinker* linker = new UserFavoriteItemsListChangedLinker(appId, fileId, callback);
}

bool UToolkitSteamworksBPLibrary::SteamRemoveItemKeyValueTags(int64 updateHandle, FString key)
{
	STEAM_CLIENT(false);
	return SteamUGC()->RemoveItemKeyValueTags(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*key).Get());
}

bool UToolkitSteamworksBPLibrary::SteamRemoveItemPreview(int64 updateHandle, int32 index)
{
	STEAM_CLIENT(false);
	return SteamUGC()->RemoveItemPreview(static_cast<UGCUpdateHandle_t>(updateHandle), static_cast<uint32>(index));
}

bool UToolkitSteamworksBPLibrary::SteamAddContentDescriptor(int64 updateHandle, UEUGCContentDescriptorID descriptorId)
{
	STEAM_CLIENT(false);
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	return SteamUGC()->AddContentDescriptor(static_cast<UGCUpdateHandle_t>(updateHandle), static_cast<EUGCContentDescriptorID>(descriptorId));
#else
	FString SteamVersion = FString::Printf(TEXT("%d.%d"), STEAM_MAJOR, STEAM_MINOR);
	UE_LOG(LogTemp, Error, TEXT("Add Content Descriptor is not available in Steamworks v%s"), *SteamVersion);
	return false;
#endif
}

bool UToolkitSteamworksBPLibrary::SteamRemoveContentDescriptor(int64 updateHandle, UEUGCContentDescriptorID descriptorId)
{
	STEAM_CLIENT(false);
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	return SteamUGC()->RemoveContentDescriptor(static_cast<UGCUpdateHandle_t>(updateHandle), static_cast<EUGCContentDescriptorID>(descriptorId));
#else
	FString SteamVersion = FString::Printf(TEXT("%d.%d"), STEAM_MAJOR, STEAM_MINOR);
	UE_LOG(LogTemp, Error, TEXT("Remove Content Descriptor is not available in Steamworks v%s"), *SteamVersion);
	return false;
#endif
}

void UToolkitSteamworksBPLibrary::SteamSendQueryUGCRequest(int64 queryHandle, FSteamUGCQueryCompletedCallback callback)
{
	STEAM_CLIENT(;);
	SteamUGCQueryCompletedLinker* linker = new SteamUGCQueryCompletedLinker(queryHandle, callback);
}

bool UToolkitSteamworksBPLibrary::SteamSetAllowCachedResponse(int64 queryHandle, int32 maxAgeInSeconds)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetAllowCachedResponse(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(maxAgeInSeconds));
}

bool UToolkitSteamworksBPLibrary::SteamSetCloudFileNameFilter(int64 queryHandle, FString matchCloudFileName)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetCloudFileNameFilter(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*matchCloudFileName).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemContent(int64 updateHandle, FString absoluteContentFolderPath)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemContent(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*absoluteContentFolderPath).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemDescription(int64 updateHandle, FString description)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemDescription(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*description).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemMetadata(int64 updateHandle, FString metadata)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemMetadata(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*metadata).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemPreview(int64 updateHandle, FString previewFile)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemPreview(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*previewFile).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemTags(int64 updateHandle, TArray<FString> tags)
{
	STEAM_CLIENT(false);

	TArray<const char*> CharPtrArray;
	for (const FString& Tag : tags)
	{
		CharPtrArray.Add(StringCast<ANSICHAR>(*Tag).Get());
	}

	SteamParamStringArray_t sTags{};
	sTags.m_ppStrings = CharPtrArray.GetData();
	sTags.m_nNumStrings = CharPtrArray.Num();

	return SteamUGC()->SetItemTags(static_cast<UGCUpdateHandle_t>(updateHandle), &sTags);
}

bool UToolkitSteamworksBPLibrary::SteamSetItemTitle(int64 updateHandle, FString title)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemTitle(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*title).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemUpdateLanguage(int64 updateHandle, FString language)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemUpdateLanguage(static_cast<UGCUpdateHandle_t>(updateHandle), StringCast<ANSICHAR>(*language).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetItemVisibility(int64 updateHandle, UERemoteStoragePublishedFileVisibility visibility)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetItemVisibility(static_cast<UGCUpdateHandle_t>(updateHandle), static_cast<ERemoteStoragePublishedFileVisibility>(visibility));
}

bool UToolkitSteamworksBPLibrary::SteamSetLanguage(int64 queryHandle, FString language)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetLanguage(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*language).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetMatchAnyTag(int64 queryHandle, bool matchAnyTag)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetMatchAnyTag(static_cast<UGCQueryHandle_t>(queryHandle), matchAnyTag);
}

bool UToolkitSteamworksBPLibrary::SteamSetRankedByTrendDays(int64 queryHandle, int32 days)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetRankedByTrendDays(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(days));
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnAdditionalPreviews(int64 queryHandle, bool returnAdditionalPreviews)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnAdditionalPreviews(static_cast<UGCQueryHandle_t>(queryHandle), returnAdditionalPreviews);
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnChildren(int64 queryHandle, bool returnChildren)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnChildren(static_cast<UGCQueryHandle_t>(queryHandle), returnChildren);
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnKeyValueTags(int64 queryHandle, bool returnKeyValueTags)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnKeyValueTags(static_cast<UGCQueryHandle_t>(queryHandle), returnKeyValueTags);
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnLongDescription(int64 queryHandle, bool returnLongDescription)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnLongDescription(static_cast<UGCQueryHandle_t>(queryHandle), returnLongDescription);
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnMetadata(int64 queryHandle, bool returnMetadata)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnMetadata(static_cast<UGCQueryHandle_t>(queryHandle), returnMetadata);
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnOnlyIDs(int64 queryHandle, bool returnOnlyIDs)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnOnlyIDs(static_cast<UGCQueryHandle_t>(queryHandle), returnOnlyIDs);
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnPlaytimeStats(int64 queryHandle, int32 Days)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnPlaytimeStats(static_cast<UGCQueryHandle_t>(queryHandle), static_cast<uint32>(Days));
}

bool UToolkitSteamworksBPLibrary::SteamSetReturnTotalOnly(int64 queryHandle, bool returnTotalOnly)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetReturnTotalOnly(static_cast<UGCQueryHandle_t>(queryHandle), returnTotalOnly);
}

bool UToolkitSteamworksBPLibrary::SteamSetSearchText(int64 queryHandle, FString searchText)
{
	STEAM_CLIENT(false);
	return SteamUGC()->SetSearchText(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*searchText).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetSearch(int64 queryHandle, FString searchText, bool allowCashedResponse, bool matchAnyTag, bool withAdditionalPreviews, bool withChildren, bool withKeyValueTags, bool withLongDescriptions, bool withMetadata)
{
	STEAM_CLIENT(false);
	bool response = SteamUGC()->SetSearchText(static_cast<UGCQueryHandle_t>(queryHandle), StringCast<ANSICHAR>(*searchText).Get());
	SteamUGC()->SetAllowCachedResponse(static_cast<UGCQueryHandle_t>(queryHandle), allowCashedResponse);
	SteamUGC()->SetMatchAnyTag(static_cast<UGCQueryHandle_t>(queryHandle), matchAnyTag);
	SteamUGC()->SetReturnAdditionalPreviews(static_cast<UGCQueryHandle_t>(queryHandle), withAdditionalPreviews);
	SteamUGC()->SetReturnChildren(static_cast<UGCQueryHandle_t>(queryHandle), withChildren);
	SteamUGC()->SetReturnKeyValueTags(static_cast<UGCQueryHandle_t>(queryHandle), withKeyValueTags);
	SteamUGC()->SetReturnLongDescription(static_cast<UGCQueryHandle_t>(queryHandle), withLongDescriptions);
	SteamUGC()->SetReturnMetadata(static_cast<UGCQueryHandle_t>(queryHandle), withMetadata);
	return response;
}

void UToolkitSteamworksBPLibrary::SteamSetUserItemVote(int64 fileId, bool voteUp, FSetUserItemVoteResultCallback callback)
{
	STEAM_CLIENT(;);
	SetUserItemVoteResultLinker* linker = new SetUserItemVoteResultLinker(fileId, voteUp, callback);
}

int64 UToolkitSteamworksBPLibrary::SteamStartItemUpdate(int32 appId, int64 fileId)
{
	STEAM_CLIENT(0);
	UGCUpdateHandle_t handle = SteamUGC()->StartItemUpdate(static_cast<AppId_t>(appId), static_cast<PublishedFileId_t>(fileId));
	return static_cast<int64>(handle);
}

void UToolkitSteamworksBPLibrary::SteamStartPlaytimeTracking(TArray<int64> fileIDs, FStartPlaytimeTrackingResultCallback callback)
{
	STEAM_CLIENT(;);
	StartPlaytimeTrackingResultLinker* linker = new StartPlaytimeTrackingResultLinker(fileIDs, callback);
}

void UToolkitSteamworksBPLibrary::SteamStopPlaytimeTracking(TArray<int64> fileIDs, FStopPlaytimeTrackingResultCallback callback)
{
	STEAM_CLIENT(;);
	StopPlaytimeTrackingResultLinker* linker = new StopPlaytimeTrackingResultLinker(fileIDs, callback);
}

void UToolkitSteamworksBPLibrary::SteamStopPlaytimeTrackingForAllItems(FStopPlaytimeTrackingResultCallback callback)
{
	STEAM_CLIENT(;);
	StopAllPlaytimeTrackingResultLinker* linker = new StopAllPlaytimeTrackingResultLinker(callback);
}

void UToolkitSteamworksBPLibrary::SteamSubmitItemUpdate(int64 updateHandle, FString changeNote, FSubmitItemUpdateResultCallback callback)
{
	STEAM_CLIENT(;);
	SubmitItemUpdateResultLinker* linker = new SubmitItemUpdateResultLinker(updateHandle, changeNote, callback);
}

void UToolkitSteamworksBPLibrary::SteamSubscribeItem(int64 fileId, FRemoteStorageSubscribePublishedFileResultCallback callback)
{
	STEAM_CLIENT(;);
	RemoteStorageSubscribePublishedFileResultLinker* linker = new RemoteStorageSubscribePublishedFileResultLinker(fileId, callback);
}

void UToolkitSteamworksBPLibrary::SteamSuspendDownloads(bool suspend)
{
	STEAM_CLIENT(;);
	SteamUGC()->SuspendDownloads(suspend);
}

void UToolkitSteamworksBPLibrary::SteamUnsubscribeItem(int64 fileId, FRemoteStorageUnsubscribePublishedFileResultCallback callback)
{
	STEAM_CLIENT(;);
	RemoteStorageUnsubscribePublishedFileResultLinker* linker = new RemoteStorageUnsubscribePublishedFileResultLinker(fileId, callback);
}

bool UToolkitSteamworksBPLibrary::SteamUpdateItemPreviewFile(int64 updateHandle, int32 index, FString previewFile)
{
	STEAM_CLIENT(false);
	return SteamUGC()->UpdateItemPreviewFile(static_cast<UGCUpdateHandle_t>(updateHandle), static_cast<uint32>(index), StringCast<ANSICHAR>(*previewFile).Get());
}

bool UToolkitSteamworksBPLibrary::SteamUpdateItemPreviewVideo(int64 updateHandle, int32 index, FString videoId)
{
	STEAM_CLIENT(false);
	return SteamUGC()->UpdateItemPreviewVideo(static_cast<UGCUpdateHandle_t>(updateHandle), static_cast<uint32>(index), StringCast<ANSICHAR>(*videoId).Get());
}

bool UToolkitSteamworksBPLibrary::SteamShowWorkshopEULA()
{
	STEAM_CLIENT(false);
	return SteamUGC()->ShowWorkshopEULA();
}

void UToolkitSteamworksBPLibrary::SteamGetWorkshopEULAStatus(FWorkshopEULAStatusCallback callback)
{
	STEAM_CLIENT(;);
	WorkshopEULAStatusLinker* linker = new WorkshopEULAStatusLinker(callback);
}

int64 UToolkitSteamworksBPLibrary::SteamGetMySteamId()
{
	STEAM_CLIENT(0);
	CSteamID id = SteamUser()->GetSteamID();
	return STEAMID_TO_INT64(id);
}

int32 UToolkitSteamworksBPLibrary::SteamGetMyFriendId()
{
	STEAM_CLIENT(0);

	CSteamID id = SteamUser()->GetSteamID();
	return static_cast<int32>(id.GetAccountID());
}

int32 UToolkitSteamworksBPLibrary::SteamGetMySteamLevel()
{
	STEAM_CLIENT(0);
	return SteamUser()->GetPlayerSteamLevel();
}

bool UToolkitSteamworksBPLibrary::SteamIsBehindNAT()
{
	STEAM_CLIENT(false);

	return SteamUser()->BIsBehindNAT();
}

bool UToolkitSteamworksBPLibrary::SteamIsPhoneIdentifying()
{
	STEAM_CLIENT(false);

	return SteamUser()->BIsPhoneIdentifying();
}

bool UToolkitSteamworksBPLibrary::SteamIsPhoneRequiringVerification()
{
	STEAM_CLIENT(false);

	return SteamUser()->BIsPhoneRequiringVerification();
}

bool UToolkitSteamworksBPLibrary::SteamIsPhoneVerified()
{
	STEAM_CLIENT(false);

	return SteamUser()->BIsPhoneVerified();
}

bool UToolkitSteamworksBPLibrary::SteamIsTwoFactorEnabled()
{
	STEAM_CLIENT(false);

	return SteamUser()->BIsTwoFactorEnabled();
}

bool UToolkitSteamworksBPLibrary::SteamLoggedOn()
{
	STEAM_CLIENT(false);

	return SteamUser()->BLoggedOn();
}

void UToolkitSteamworksBPLibrary::SteamCancelAuthTicket(int32 authTicketHandle)
{
	STEAM_CLIENT(;);
	SteamUser()->CancelAuthTicket(static_cast<HAuthTicket>(authTicketHandle));
}

FDecompressVoiceResult UToolkitSteamworksBPLibrary::SteamDecompressVoice(TArray<uint8> CompressedData, int32 DesiredSampleRate, USoundWaveProcedural* buffer)
{
	STEAM_CLIENT(FDecompressVoiceResult());

	FDecompressVoiceResult Result;

	// Convert the FString CompressedData to a byte array (uint8)
	TArray<uint8> CompressedVoiceData;
	int32 CompressedSize = CompressedData.Num() * sizeof(uint8);
	CompressedVoiceData.SetNumUninitialized(CompressedSize);
	FMemory::Memcpy(CompressedVoiceData.GetData(), CompressedData.GetData(), CompressedSize);

	// Calculate the destination buffer size based on the compression ratio
	int32 DestBufferSize = CompressedSize * 4;
	// Set up the destination buffer with the specified size
	Result.DecompressedVoiceData.SetNumUninitialized(DestBufferSize);

	// Call the actual DecompressVoice function with the appropriate arguments
	uint32 BytesWritten = 0;
	EVoiceResult result = SteamUser()->DecompressVoice(CompressedVoiceData.GetData(), CompressedSize, Result.DecompressedVoiceData.GetData(), DestBufferSize, &BytesWritten, DesiredSampleRate);

	if (BytesWritten > 0)
	{
		Result.DecompressedVoiceData.SetNum(BytesWritten);
		Result.Result = static_cast<UEVoiceResult>(result);

		// Create a UProceduralSoundWave instance
		if (buffer == nullptr)
			buffer = NewObject<USoundWaveProcedural>();

		// Set the sample rate, number of channels, duration, and allocate memory for audio data
		buffer->SetSampleRate(DesiredSampleRate);
		buffer->NumChannels = 1;
		buffer->SoundGroup = SOUNDGROUP_Voice;
		buffer->Duration = INDEFINITELY_LOOPING_DURATION;

		// Allocate memory for audio data and copy PCM audio data into the USoundWaveProcedural
		buffer->QueueAudio(Result.DecompressedVoiceData.GetData(), BytesWritten);

		// Assign the UProceduralSoundWave to the result
		Result.ProceduralSoundWave = buffer;

		Result.bSuccess = true;
	}
	else if (result == EVoiceResult::k_EVoiceResultNoData)
	{
		Result.Result = static_cast<UEVoiceResult>(result);
		Result.bSuccess = true;
	}
	else
	{
		Result.Result = static_cast<UEVoiceResult>(result);
		Result.bSuccess = false;
	}

	return Result;
}

void UToolkitSteamworksBPLibrary::SteamEndAuthSession(int64 steamId)
{
	STEAM_CLIENT(;);
	SteamUser()->EndAuthSession(INT64_TO_STEAMID(steamId));
}

FAuthTicketData UToolkitSteamworksBPLibrary::SteamGetAuthSessionTicket(int64 forSteamId)
{
	STEAM_CLIENT(FAuthTicketData());

	TArray<uint8> buffer;
	buffer.SetNumUninitialized(1024);
	uint32 BytesWritten = 0;
	SteamNetworkingIdentity Id{};
	Id.m_eType = ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_SteamID;
	Id.SetSteamID(INT64_TO_STEAMID(forSteamId));
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	HAuthTicket handle = SteamUser()->GetAuthSessionTicket(buffer.GetData(), 1024, &BytesWritten, &Id);
#else
	HAuthTicket handle = SteamUser()->GetAuthSessionTicket(buffer.GetData(), 1024, &BytesWritten);
#endif

	FAuthTicketData result;
	result.AuthTicketHandle = static_cast<int32>(handle);
	result.Ticket = buffer;

	return result;
}

int32 UToolkitSteamworksBPLibrary::SteamGetAuthTicketForWebApi(FString identity)
{
#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	STEAM_CLIENT(0);

	if (identity.IsEmpty())
	{
		HAuthTicket handle = SteamUser()->GetAuthTicketForWebApi(NULL);
		return static_cast<int32>(handle);
	}
	else
	{
		HAuthTicket handle = SteamUser()->GetAuthTicketForWebApi(StringCast<ANSICHAR>(*identity).Get());
		return static_cast<int32>(handle);
	}
#else
	FString SteamVersion = FString::Printf(TEXT("%d.%d"), STEAM_MAJOR, STEAM_MINOR);
	UE_LOG(LogTemp, Error, TEXT("Get Authentication Ticket for Web API is not available in Steamworks v%s"), *SteamVersion);
	return 0;
#endif
}

FVoiceAvailableResult UToolkitSteamworksBPLibrary::SteamGetAvailableVoice()
{
	FVoiceAvailableResult result = FVoiceAvailableResult();
	STEAM_CLIENT(result);
	uint32 pData = 0;
	result.Result = static_cast<UEVoiceResult>(SteamUser()->GetAvailableVoice(&pData));
	result.VoiceData = static_cast<int32>(pData);
	return result;
}

void UToolkitSteamworksBPLibrary::SteamGetEncryptedAppTicket(TArray<uint8> data, FEncryptedAppTicket callback)
{
	STEAM_CLIENT(;);
	APIUserClientEncryptedAppTicketLinker* linker = new APIUserClientEncryptedAppTicketLinker(data, callback);
}

FString UToolkitSteamworksBPLibrary::SteamGetMyHex()
{
	STEAM_CLIENT(FString());

	CSteamID id = SteamUser()->GetSteamID();
	return FString::Printf(TEXT("%X"), id.GetAccountID());
}

int64 UToolkitSteamworksBPLibrary::SteamFriendIdToSteamId(int32 friendId)
{
	CSteamID steamId(friendId, EUniverse::k_EUniversePublic, EAccountType::k_EAccountTypeIndividual);
	return static_cast<int64>(steamId.ConvertToUint64());
}

FString UToolkitSteamworksBPLibrary::SteamFriendIdToHex(int32 friendId)
{
	return FString::Printf(TEXT("%X"), friendId);
}

int UToolkitSteamworksBPLibrary::SteamIdToFriendId(int64 steamId)
{
	CSteamID id(static_cast<uint64>(steamId));
	return static_cast<int>(id.GetAccountID());
}

FString UToolkitSteamworksBPLibrary::SteamIdToHex(int64 steamId)
{
	CSteamID id = INT64_TO_STEAMID(steamId);

	uint32 steamAccount = id.GetAccountID();
	FString hexId = FString::Printf(TEXT("%X"), id.GetAccountID());
	int parsed = FParse::HexNumber(*hexId);

	return FString::Printf(TEXT("%X"), id.GetAccountID());
}

FHexParseResults UToolkitSteamworksBPLibrary::SteamHexToSteamId(FString hexId, UEAccountType type)
{
	FHexParseResults parseResult = FHexParseResults();
	
	if (!HeathenTools::IsHexadecimal(hexId))
	{
		parseResult.bSuccess = false;
		UE_LOG(LogTemp, Warning, TEXT("Input string is not a valid hexadecimal number: %s"), *hexId);
		return parseResult;
	}

	int Result = FParse::HexNumber(*hexId);

	// Handle overflow or conversion errors
	if (Result == 0 && hexId != TEXT("0"))
	{
		parseResult.bSuccess = false;
		UE_LOG(LogTemp, Warning, TEXT("Hexadecimal string conversion overflow or error."));
	}
	else
	{
		parseResult.bSuccess = true;
	}

	if (type == UEAccountType::EPC_Chat)
	{
		CSteamID steamId = CSteamID(Result, 393216, EUniverse::k_EUniversePublic, static_cast<EAccountType>(type));
		parseResult.SteamId = STEAMID_TO_INT64(steamId);
		UE_LOG(LogTemp, Log, TEXT("Lobby ID Parse : %s | Result : %d | ID : %lld"), *hexId, Result, parseResult.SteamId);
	}
	else
	{
		CSteamID steamId = CSteamID(Result, EUniverse::k_EUniversePublic, static_cast<EAccountType>(type));
		parseResult.SteamId = STEAMID_TO_INT64(steamId);
		UE_LOG(LogTemp, Log, TEXT("ID Parse : %s | Result : %d | ID : %lld"), *hexId, Result, parseResult.SteamId);
	}

	return parseResult;
}

int32 UToolkitSteamworksBPLibrary::SteamHexToFriendId(FString hexId)
{
	FHexParseResults parseResult = SteamHexToSteamId(hexId, UEAccountType::EPC_Individual);

	return parseResult.SteamId;
}

bool UToolkitSteamworksBPLibrary::SteamIdIsValid(int64 steamId)
{
	CSteamID id = INT64_TO_STEAMID(steamId);
	id.IsValid();
	return id.IsValid();
}

bool UToolkitSteamworksBPLibrary::SteamIdIsMe(int64 steamId)
{
	CSteamID id = INT64_TO_STEAMID(steamId);
	CSteamID me = SteamUser()->GetSteamID();
	return id == me;
}

void UToolkitSteamworksBPLibrary::SteamAdvertiseGame(int64 id, FString ip, int32 port)
{
	STEAM_CLIENT(;);

	// Split the IP address into octets
	TArray<FString> OctetStrings;
	ip.ParseIntoArray(OctetStrings, TEXT("."), true);

	uint32 address = 0;

	if (OctetStrings.Num() == 4)
	{
		// Convert octets to integers
		uint8 Octets[4];
		for (int32 i = 0; i < 4; ++i)
		{
			Octets[i] = FCString::Atoi(*OctetStrings[i]);
		}

		// Calculate the uint32 representation of the IP address
		address = (Octets[0] << 24) | (Octets[1] << 16) | (Octets[2] << 8) | Octets[3];
	}

	CSteamID steamId(static_cast<uint64>(id));

	SteamUser()->AdvertiseGame(steamId, address, static_cast<uint16>(port > 65535 || port < 0 ? 0 : port));
}

UEBeginAuthSessionResult UToolkitSteamworksBPLibrary::SteamBeginAuthSession(TArray<uint8> ticket, int64 steamId)
{
	STEAM_CLIENT(UEBeginAuthSessionResult::EPC_InvalidTicket);

	// Convert the FString AuthTicket to a byte array (uint8)
	TArray<uint8> TicketData;
	int32 TicketLength = ticket.Num() * sizeof(uint8); // Get the length dynamically

	TicketData.SetNumUninitialized(TicketLength);
	FMemory::Memcpy(TicketData.GetData(), ticket.GetData(), TicketLength);

	// Call the actual BeginAuthSession function with the appropriate arguments
	EBeginAuthSessionResult result = SteamUser()->BeginAuthSession(TicketData.GetData(), TicketLength, INT64_TO_STEAMID(steamId));

	return static_cast<UEBeginAuthSessionResult>(result);
}

int32 UToolkitSteamworksBPLibrary::SteamGetGameBadgeLevel(int32 series, bool foil)
{
	STEAM_CLIENT(0);

	return SteamUser()->GetGameBadgeLevel(series, foil);
}

void UToolkitSteamworksBPLibrary::SteamRequestStoreAuthURL(FString RedirectUrl, FStoreAuthURLCallback Callback)
{
	STEAM_CLIENT(;);
	APIUserClientCallbackLinker* Linker = new APIUserClientCallbackLinker(RedirectUrl, Callback);
}

FVoiceResult UToolkitSteamworksBPLibrary::SteamGetVoice()
{
	FVoiceResult defaultVal;
	defaultVal.Result = UEVoiceResult::EPC_NoData;
	STEAM_CLIENT(defaultVal);

	uint32 availableData;
	EVoiceResult result = SteamUser()->GetAvailableVoice(&availableData);

	if (availableData == 0)
		return defaultVal;

	defaultVal.VoiceData.SetNumUninitialized(availableData);
	result = SteamUser()->GetVoice(true, defaultVal.VoiceData.GetData(), availableData, &availableData);
	defaultVal.Result = static_cast<UEVoiceResult>(result);

	return defaultVal;
}

int32 UToolkitSteamworksBPLibrary::SteamGetVoiceOptimalSampleRate()
{
	STEAM_CLIENT(0);
	uint32 result = SteamUser()->GetVoiceOptimalSampleRate();
	return static_cast<int32>(result);
}

void UToolkitSteamworksBPLibrary::SteamStartVoiceRecording()
{
	STEAM_CLIENT(;);
	SteamUser()->StartVoiceRecording();
}

void UToolkitSteamworksBPLibrary::SteamStopVoiceRecording()
{
	STEAM_CLIENT(;);
	SteamUser()->StopVoiceRecording();
}

UEUserHasLicenseForAppResult UToolkitSteamworksBPLibrary::SteamUserHasLicenseForApp(int64 userId, int32 appId)
{
	STEAM_CLIENT(UEUserHasLicenseForAppResult::EPC_NoAuth);
	CSteamID steamId = INT64_TO_STEAMID(userId);
	AppId_t app = static_cast<AppId_t>(appId);
	EUserHasLicenseForAppResult result = SteamUser()->UserHasLicenseForApp(steamId, app);
	return static_cast<UEUserHasLicenseForAppResult>(result);
}

bool UToolkitSteamworksBPLibrary::SteamSetRichPresence(FString key, FString value)
{
	STEAM_CLIENT(false);
	return SteamFriends()->SetRichPresence(StringCast<ANSICHAR>(*key).Get(), StringCast<ANSICHAR>(*value).Get());
}

void UToolkitSteamworksBPLibrary::SteamClearRichPresence()
{
	STEAM_CLIENT(;);
	SteamFriends()->ClearRichPresence();
}

FString UToolkitSteamworksBPLibrary::SteamGetRichPresence(FString key)
{
	STEAM_CLIENT(FString());
	const char* result = SteamFriends()->GetFriendRichPresence(SteamUser()->GetSteamID(), StringCast<ANSICHAR>(*key).Get());
	return FString(StringCast<TCHAR>(result));
}

FString UToolkitSteamworksBPLibrary::SteamGetUserRichPresence(int64 id, FString key)
{
	CSteamID steamId = INT64_TO_STEAMID(id);
	STEAM_CLIENT(FString());

	if (!steamId.IsValid())
		return FString();

	const char* result = SteamFriends()->GetFriendRichPresence(steamId, StringCast<ANSICHAR>(*key).Get());
	return FString(result);
}

FString UToolkitSteamworksBPLibrary::SteamGetUserRichPresenceKeyByIndex(int64 id, int32 index)
{
	STEAM_CLIENT(FString());
	CSteamID steamId = INT64_TO_STEAMID(id);

	if (!steamId.IsValid())
		return FString();

	const char* result = SteamFriends()->GetFriendRichPresenceKeyByIndex(steamId, index);
	return FString(result);
}

int32 UToolkitSteamworksBPLibrary::SteamGetUserRichPresenceKeyCount(int64 id)
{
	STEAM_CLIENT(0);
	CSteamID steamId = INT64_TO_STEAMID(id);

	return SteamFriends()->GetFriendRichPresenceKeyCount(steamId);
}

UEPersonaState UToolkitSteamworksBPLibrary::SteamGetUserPersonaState(int64 id)
{
	STEAM_CLIENT(UEPersonaState::EPC_Offline);
	EPersonaState state = SteamFriends()->GetFriendPersonaState(INT64_TO_STEAMID(id));
	return static_cast<UEPersonaState>(state);
}

void UToolkitSteamworksBPLibrary::SteamAttachLeaderboardUGC(int64 boardId, int64 ugcHandle, FLeaderboardUGCSet callback)
{
	STEAM_CLIENT(;);
	SteamLeaderboard_t board_t = static_cast<SteamLeaderboard_t>(boardId);
	UGCHandle_t ugc_t = static_cast<UGCHandle_t>(ugcHandle);
	APIUserStatsClientLeaderboardUGCSetLinker* linker = new APIUserStatsClientLeaderboardUGCSetLinker(board_t, ugc_t, callback);
}

bool UToolkitSteamworksBPLibrary::SteamClearAchievement(FString achievementApiName)
{
	STEAM_CLIENT(false);
	bool result = SteamUserStats()->ClearAchievement(StringCast<ANSICHAR>(*achievementApiName).Get());
	return result;
}

void UToolkitSteamworksBPLibrary::SteamDownloadLeaderboardEntries(int64 boardId, UELeaderboardDataRequest requestType, int32 start, int32 end, int32 detailCount, FLeaderboardEntriesDownloaded callback)
{
	STEAM_CLIENT(;);
	SteamLeaderboard_t leaderboard = static_cast<SteamLeaderboard_t>(boardId);
	ELeaderboardDataRequest dRequest = static_cast<ELeaderboardDataRequest>(requestType);
	SteamAPICall_t handle = SteamUserStats()->DownloadLeaderboardEntries(leaderboard, dRequest, start, end);
	LeaderboardDownloadRequestLinker* linker = new LeaderboardDownloadRequestLinker(handle, detailCount, callback);
}

void UToolkitSteamworksBPLibrary::SteamDownloadLeaderboardEntriesForUsers(int64 boardId, TArray<int64> users, int32 detailCount, FLeaderboardEntriesDownloaded callback)
{
	STEAM_CLIENT(;);
	if (users.GetAllocatedSize() != 0)
	{
		CSteamID* targetUsers = new CSteamID[users.Num()];
		int numUsers = users.Num();
		for (int i = 0; i < numUsers; i++)
		{
			targetUsers[i] = INT64_TO_STEAMID(users[i]);
		}
		SteamLeaderboard_t leaderboard = static_cast<SteamLeaderboard_t>(boardId);
		SteamAPICall_t handle = SteamUserStats()->DownloadLeaderboardEntriesForUsers(leaderboard, targetUsers, numUsers);
		LeaderboardDownloadRequestLinker* linker = new LeaderboardDownloadRequestLinker(handle, detailCount, callback);
	}
}

void UToolkitSteamworksBPLibrary::SteamFindLeaderboard(FString apiName, FLeaderboardFindResult callback)
{
	STEAM_CLIENT(;);
	APIUserStatsClientLeaderboardFindResultLinker* linker = new APIUserStatsClientLeaderboardFindResultLinker(apiName, callback);
}

void UToolkitSteamworksBPLibrary::SteamFindOrCreateLeaderboard(FString apiName, UELeaderboardSortMethod sortMethod, UELeaderboardDisplayType displayType, FLeaderboardFindResult callback)
{
	STEAM_CLIENT(;);
	APIUserStatsClientLeaderboardFindOrCreateResultLinker* linker = new APIUserStatsClientLeaderboardFindOrCreateResultLinker(apiName, sortMethod, displayType, callback);
}

bool UToolkitSteamworksBPLibrary::SteamGetAchievementIsAchieved(FString apiName)
{
	STEAM_CLIENT(false);
	bool achieved;
	SteamUserStats()->GetAchievement(StringCast<ANSICHAR>(*apiName).Get(), &achieved);
	return achieved;
}

FAchievementStatus UToolkitSteamworksBPLibrary::SteamGetAchievement(FString apiName)
{
	STEAM_CLIENT(FAchievementStatus());

	bool achieved;
	uint32 unixTime;
	SteamUserStats()->GetAchievementAndUnlockTime(StringCast<ANSICHAR>(*apiName).Get(), &achieved, &unixTime);

	float pert;
	SteamUserStats()->GetAchievementAchievedPercent(StringCast<ANSICHAR>(*apiName).Get(), &pert);

	FString name = FString(SteamUserStats()->GetAchievementDisplayAttribute(StringCast<ANSICHAR>(*apiName).Get(), "name"));

	FString desc = FString(SteamUserStats()->GetAchievementDisplayAttribute(StringCast<ANSICHAR>(*apiName).Get(), "desc"));

	const char* DisplayAttribute = SteamUserStats()->GetAchievementDisplayAttribute(StringCast<ANSICHAR>(*apiName).Get(), "hidden");
	bool isHidden = (DisplayAttribute && strcmp(DisplayAttribute, "1") == 0);
	delete[] DisplayAttribute;

	FAchievementStatus status;
	status.bAchieved = achieved;
	status.Percent = pert;
	status.UnlockTime = FDateTime::FromUnixTimestamp(static_cast<int64>(unixTime));
	status.Name = name;
	status.Description = desc;
	status.bIsHidden = isHidden;

	return status;
}

void UToolkitSteamworksBPLibrary::SteamGetAchievementIcon(FString apiName, FIconLoadCallback callback)
{
	STEAM_CLIENT_INSTANCE(;);
	int32 handle = SteamUserStats()->GetAchievementIcon(StringCast<ANSICHAR>(*apiName).Get());
	if (handle > 0)
		SteamGameInstance->LoadIcon(handle, apiName, callback);
	else
	{
		if (SteamGameInstance->AchievementIconRequests.Contains(apiName))
			SteamGameInstance->AchievementIconRequests.Remove(apiName);

		SteamGameInstance->AchievementIconRequests.Add(apiName, callback);
	}
}

FString UToolkitSteamworksBPLibrary::SteamGetAchievementApiName(int32 index)
{
	STEAM_CLIENT(FString());
	return FString(SteamUserStats()->GetAchievementName(index));
}

int64 UToolkitSteamworksBPLibrary::SteamGetGlobalStatInt64(FString apiName)
{
	STEAM_CLIENT(0);
	int64 valueBuffer = 0;
	SteamUserStats()->GetGlobalStat(StringCast<ANSICHAR>(*apiName).Get(), &valueBuffer);
	return valueBuffer;
}

double UToolkitSteamworksBPLibrary::SteamGetGlobalStatDouble(FString apiName)
{
	STEAM_CLIENT(0.0);
	double valueBuffer = 0;
	SteamUserStats()->GetGlobalStat(StringCast<ANSICHAR>(*apiName).Get(), &valueBuffer);
	return valueBuffer;
}

void UToolkitSteamworksBPLibrary::SteamGetGlobalStatHistoryInt64(FString apiName, int32 numOfDays, FGlobalStatsIntHistoryReceived callback)
{
	STEAM_CLIENT(;)
		APIUserStatsClientGlobalStatIntLinker* linker = new APIUserStatsClientGlobalStatIntLinker(apiName, numOfDays, callback);
}

void UToolkitSteamworksBPLibrary::SteamGetGlobalStatHistoryDouble(FString apiName, int32 numOfDays, FGlobalStatsDoubleHistoryReceived callback)
{
	STEAM_CLIENT(;)
		APIUserStatsClientGlobalStatDoubleLinker* linker = new APIUserStatsClientGlobalStatDoubleLinker(apiName, numOfDays, callback);
}

UELeaderboardDisplayType UToolkitSteamworksBPLibrary::SteamGetLeaderboardDisplayType(int64 boardId)
{
	STEAM_CLIENT(UELeaderboardDisplayType::EPC_None);
	SteamLeaderboard_t id = static_cast<SteamLeaderboard_t>(boardId);
	ELeaderboardDisplayType dType = SteamUserStats()->GetLeaderboardDisplayType(id);
	return static_cast<UELeaderboardDisplayType>(dType);
}

int32 UToolkitSteamworksBPLibrary::SteamGetLeaderboardEntryCount(int64 boardId)
{
	STEAM_CLIENT(0);
	SteamLeaderboard_t id = static_cast<SteamLeaderboard_t>(boardId);
	return SteamUserStats()->GetLeaderboardEntryCount(id);
}

FString UToolkitSteamworksBPLibrary::SteamGetLeaderboardName(int64 boardId)
{
	STEAM_CLIENT(FString());
	SteamLeaderboard_t id = static_cast<SteamLeaderboard_t>(boardId);
	return FString(SteamUserStats()->GetLeaderboardName(id));
}

UELeaderboardSortMethod UToolkitSteamworksBPLibrary::SteamGetLeaderboardSortMethod(int64 boardId)
{
	STEAM_CLIENT(UELeaderboardSortMethod::EPC_None);
	SteamLeaderboard_t id = static_cast<SteamLeaderboard_t>(boardId);
	ELeaderboardSortMethod sort = SteamUserStats()->GetLeaderboardSortMethod(id);
	return static_cast<UELeaderboardSortMethod>(sort);
}

void UToolkitSteamworksBPLibrary::SteamGetMostAchievedAchievementInfo(FMostAchievedStatusInfo callback)
{
	STEAM_CLIENT(;);
	APIUserStatsClientMostAchievedLinker* linker = new APIUserStatsClientMostAchievedLinker(callback);
}

void UToolkitSteamworksBPLibrary::SteamGetNumAchievements(FNumCurrentPlayers callback)
{
	STEAM_CLIENT(;);
	APIUserStatsClientNumberOfCurrentPlayersLinker* linker = new APIUserStatsClientNumberOfCurrentPlayersLinker(callback);
}

FIntStat UToolkitSteamworksBPLibrary::SteamGetIntStat(FString apiName)
{
	STEAM_CLIENT(FIntStat());
	int32 data;

	FIntStat result;
	result.bValid = SteamUserStats()->GetStat(StringCast<ANSICHAR>(*apiName).Get(), &data);
	result.Value = data;

	return result;
}

FFloatStat UToolkitSteamworksBPLibrary::SteamGetFloatStat(FString apiName)
{
	STEAM_CLIENT(FFloatStat());
	float data;

	FFloatStat result;
	result.bValid = SteamUserStats()->GetStat(StringCast<ANSICHAR>(*apiName).Get(), &data);
	result.Value = data;

	return result;
}

FUserAchievementStatus UToolkitSteamworksBPLibrary::SteamGetUserAchievement(int64 userId, FString apiName)
{
	STEAM_CLIENT(FUserAchievementStatus());
	CSteamID steamId = INT64_TO_STEAMID(userId);

	bool achieved;
	uint32 unixTime;
	SteamUserStats()->GetUserAchievementAndUnlockTime(steamId, StringCast<ANSICHAR>(*apiName).Get(), &achieved, &unixTime);

	FUserAchievementStatus status;
	status.bAchieved = achieved;
	status.UnlockTime = FDateTime::FromUnixTimestamp(static_cast<int64>(unixTime));

	return status;
}

FIntStat UToolkitSteamworksBPLibrary::SteamGetUserIntStat(int64 userId, FString apiName)
{
	STEAM_CLIENT(FIntStat());
	CSteamID steamId = INT64_TO_STEAMID(userId);
	int32 data;

	FIntStat result;
	result.bValid = SteamUserStats()->GetUserStat(steamId, StringCast<ANSICHAR>(*apiName).Get(), &data);
	result.Value = data;

	return result;
}

FFloatStat UToolkitSteamworksBPLibrary::SteamGetUserFloatStat(int64 userId, FString apiName)
{
	STEAM_CLIENT(FFloatStat());
	CSteamID steamId = INT64_TO_STEAMID(userId);
	float data;

	FFloatStat result;
	result.bValid = SteamUserStats()->GetUserStat(steamId, StringCast<ANSICHAR>(*apiName).Get(), &data);
	result.Value = data;

	return result;
}

bool UToolkitSteamworksBPLibrary::SteamIndicateAchievementProgress(FString apiName, int32 currentProgress, int32 maxProgress)
{
	STEAM_CLIENT(false);
	return SteamUserStats()->IndicateAchievementProgress(StringCast<ANSICHAR>(*apiName).Get(), currentProgress, maxProgress);
}

bool UToolkitSteamworksBPLibrary::SteamRequestCurrentStats()
{
	STEAM_CLIENT(false);
	return SteamUserStats()->RequestCurrentStats();
}

void UToolkitSteamworksBPLibrary::SteamRequestUserStats(int64 userId, FUserStatsReceivedResult callback)
{
	STEAM_CLIENT(;);
	APIUserStatsClientUserStatsReceivedResultLinker* linker = new APIUserStatsClientUserStatsReceivedResultLinker(INT64_TO_STEAMID(userId), callback);
}

bool UToolkitSteamworksBPLibrary::SteamResetAllStats(bool achievementsToo)
{
	STEAM_CLIENT(false);
	return SteamUserStats()->ResetAllStats(achievementsToo);
}

bool UToolkitSteamworksBPLibrary::SteamSetAchievement(FString apiName)
{
	STEAM_CLIENT(false);
	return SteamUserStats()->SetAchievement(StringCast<ANSICHAR>(*apiName).Get());
}

bool UToolkitSteamworksBPLibrary::SteamSetIntStat(FString apiName, int32 data)
{
	STEAM_CLIENT(false);
	return SteamUserStats()->SetStat(StringCast<ANSICHAR>(*apiName).Get(), data);
}

bool UToolkitSteamworksBPLibrary::SteamSetFloatStat(FString apiName, float data)
{
	STEAM_CLIENT(false);
	return SteamUserStats()->SetStat(StringCast<ANSICHAR>(*apiName).Get(), data);
}

bool UToolkitSteamworksBPLibrary::SteamStoreStats()
{
	STEAM_CLIENT(false);
	return SteamUserStats()->StoreStats();
}

bool UToolkitSteamworksBPLibrary::SteamUpdateAvgRateStat(FString apiName, float countThisSession, double sessionLength)
{
	STEAM_CLIENT(false);
	return SteamUserStats()->UpdateAvgRateStat(StringCast<ANSICHAR>(*apiName).Get(), countThisSession, sessionLength);
}

void UToolkitSteamworksBPLibrary::SteamUploadLeaderboardScore(int64 boardId, bool keepBest, int32 score, TArray<int32> data, FLeaderboardScoreUploaded InCallback)
{
	STEAM_CLIENT(;);
	APIUserStatsClientLeaderboardScoreUploadedLinker* linker = new APIUserStatsClientLeaderboardScoreUploadedLinker(boardId, keepBest, score, data, InCallback);
}