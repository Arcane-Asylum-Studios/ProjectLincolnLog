/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamGameInstance.h"
#include "ToolkitSteamworksBPLibrary.generated.h"

UCLASS()
class UToolkitSteamworksBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Initialized", Keywords = "Heathen Toolkit Steamworks Initialized"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool IsSteamInitialized();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Initialize Client", Keywords = "Heathen Toolkit Steamworks Initialize"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamClientInitialize();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Initialize Server", Keywords = "Heathen Toolkit Steamworks Initialize"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
	static bool SteamServerInitialize(FString Ip, int32 GamePort, int32 QueryPort, UEServerMode Mode, FString Version);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Run Callbacks", Keywords = "Heathen Toolkit Steamworks Callbacks"), Category = "Heathen's Toolkit|Steamworks|App")
	static void SteamRunCallbacks();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get App ID", Keywords = "Heathen Toolkit Steamworks AppId App"), Category = "Heathen's Toolkit|Steamworks|App")
	static int32 SteamGetAppId();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Shutdown", Keywords = "Heathen Toolkit Steamworks Shutdown Close"), Category = "Heathen's Toolkit|Steamworks|App")
	static void SteamShutdown();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Game ID to App ID", Keywords = "Heathen Toolkit Steamworks Convert AppId GameId"), Category = "Heathen's Toolkit|Steamworks|App")
	static int32 SteamGameIdToAppId(int64 GameId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "App ID to Game ID", Keywords = "Heathen Toolkit Steamworks Convert AppId GameId"), Category = "Heathen's Toolkit|Steamworks|App")
	static int64 SteamAppIdToGameId(int32 AppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Account ID to Steam ID", Keywords = "Heathen Toolkit Steamworks Convert AppId GameId"), Category = "Heathen's Toolkit|Steamworks|App")
	static int64 SteamAccountIdToSteamId(int32 AccountId, UEAccountType Type);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ID to Account ID", Keywords = "Heathen Toolkit Steamworks Convert AppId GameId"), Category = "Heathen's Toolkit|Steamworks|App")
	static int32 SteamSteamIdToAccountId(int64 SteamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Server Real Time", Keywords = "Heathen Toolkit Steamworks Convert AppId GameId"), Category = "Heathen's Toolkit|Steamworks|App")
	static FDateTime SteamGetServerRealTime();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Client Should Restart", Keywords = "Heathen Toolkit Steamworks Initialization Should Restart"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamClientShouldRestart(int32 AppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get DLC Data by Index", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|App")
	static FDLCData SteamGetDLCDataByIndex(int32 Index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is App Installed", Keywords = "Heathen Toolkit Steamworks App Installed"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsAppInstalled(int32 AppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Cybercafe", Keywords = "Heathen Toolkit Steamworks Cybercafe"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsCybercafe();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is DLC Installed", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsDlcInstalled(int32 AppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Low Violence", Keywords = "Heathen Toolkit Steamworks Violence"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsLowViolence();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Subscribed", Keywords = "Heathen Toolkit Steamworks Subscribed"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsSubscribed();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Subscribed App", Keywords = "Heathen Toolkit Steamworks App Subscribed"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsSubscribedApp(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Subscribed from Family Sharing", Keywords = "Heathen Toolkit Steamworks Family Sharing Subscribed"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsSubscribedFromFamilySharing();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Subscribed from Free-Weekend", Keywords = "Heathen Toolkit Steamworks Free-Weekend Subscribed"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsSubscribedFromFreeWeekend();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Timed Trial", Keywords = "Heathen Toolkit Steamworks Timed Trial Subscribed"), Category = "Heathen's Toolkit|Steamworks|App")
	static FTimeTrial SteamIsTimedTrial();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is VAC Banned", Keywords = "Heathen Toolkit Steamworks VAC Valve Anti-Cheat"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamIsVACBanned();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get App Build ID", Keywords = "Heathen Toolkit Steamworks App Build"), Category = "Heathen's Toolkit|Steamworks|App")
	static int32 SteamGetAppBuildId();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get App Install Directory", Keywords = "Heathen Toolkit Steamworks App Directory"), Category = "Heathen's Toolkit|Steamworks|App")
	static FString SteamGetAppInstallDir(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get App Owner", Keywords = "Heathen Toolkit Steamworks App Owner"), Category = "Heathen's Toolkit|Steamworks|App")
	static int64 SteamGetAppOwner();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Available Game Languages", Keywords = "Heathen Toolkit Steamworks Language"), Category = "Heathen's Toolkit|Steamworks|App")
	static TArray<FString> SteamGetAvailableGameLanguages();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Curent Beta Name", Keywords = "Heathen Toolkit Steamworks Beta"), Category = "Heathen's Toolkit|Steamworks|App")
	static FString SteamGetCurrentBetaName();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Current Language", Keywords = "Heathen Toolkit Steamworks Language"), Category = "Heathen's Toolkit|Steamworks|App")
	static FString SteamGetCurrentGameLanguage();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get DLC Count", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|App")
	static int32 SteamGetDLCCount();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get DLC Download Progress", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|App")
	static float SteamGetDlcDownloadProgress(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Earliest Purchase Date", Keywords = "Heathen Toolkit Steamworks Purchase Date"), Category = "Heathen's Toolkit|Steamworks|App")
	static FDateTime SteamGetEarliestPurchase(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Install Depots", Keywords = "Heathen Toolkit Steamworks Depots"), Category = "Heathen's Toolkit|Steamworks|App")
	static TArray<int32> SteamGetInstalledDepots(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Launch Command Line", Keywords = "Heathen Toolkit Steamworks Launch Command"), Category = "Heathen's Toolkit|Steamworks|App")
	static FString SteamGetLaunchCommandLine();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Launch Query Parameter", Keywords = "Heathen Toolkit Steamworks Launch Query"), Category = "Heathen's Toolkit|Steamworks|App")
	static FString SteamGetLaunchQueryParam(FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Install DLC", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|App")
	static void SteamInstallDLC(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Mark Content Corrupt", Keywords = "Heathen Toolkit Steamworks Content"), Category = "Heathen's Toolkit|Steamworks|App")
	static bool SteamMarkContentCorrupt(bool missingFilesOnly);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Uninstall DLC", Keywords = "Heathen Toolkit Steamworks DLC"), Category = "Heathen's Toolkit|Steamworks|App")
	static void SteamUninstallDLC(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Associate Server with Clan", Keywords = "Heathen Toolkit Steamworks Server Clan"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
	static void SteamServerAssociateWithClan(int64 clanId, FAssociateWithClanResult callback);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Begin Authentication Session", Keywords = "Heathen Toolkit Steamworks Authentication"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static UEBeginAuthSessionResult SteamServerBeginAuthSession(TArray<uint8> authTicket, int64 steamId);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Logged On", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerLoggedOn();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Secure", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerSecure();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Cancel Authentication Ticket", Keywords = "Heathen Toolkit Steamworks Server Authentication"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerCancelAuthTicket(int32 authTicketHandle);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear All Key Values", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerClearAllKeyValues();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Compute New Player Compatibility", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerComputeNewPlayerCompatibility(int64 userId, FComputeNewPlayerCompatibilityResult callback);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Advertise Activity", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetAdvertiseServerActive(bool active);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "End Authentication Session", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerEndAuthSession(int64 steamId);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Authentication Session Ticket", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static FAuthTicketData SteamServerGetAuthSessionTicket(int64 forSteamId);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Public IP Address", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static FString SteamServerGetPublicIP();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Steam ID", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static int64 SteamServerGetSteamID();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Apply Settings", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetServerSettings(FString name, FString description, FString product, FString map, FString modDirectory, bool passwordProtected, bool isDedicated, int maxPlayers, int maxBots, FString gameData, FString gameTags, TMap<FString, FString> keyValues);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Log Off", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerLogOff();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Log On", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerLogOn(FString token);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Log On Anonymous", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerLogOnAnonymous();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request User Group Status", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerRequestUserGroupStatus(int64 userId, int64 groupId);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Bot Player Count", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetBotPlayerCount(int botPlayers);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Dedicated", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetDedicatedServer(bool dedicated);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Game Data", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetGameData(FString data);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Description", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetDescription(FString description);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Game Tags", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetGameTags(FString tags);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Key Value", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetKeyValue(FString key, FString value);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Map Name", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetMapName(FString name);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Max Player Count", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetMaxPlayerCount(int32 playersMax);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Mod Directory", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetModDirectoryName(FString directoryName);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Password Protected", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetPasswordProtected(bool isPasswordProtected);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Product", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetProduct(FString product);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Region", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetRegion(FString region);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Name", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetName(FString name);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Spectator Port", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetSpectatorPort(int32 port);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Spectator Name", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerSetSpectatorName(FString name);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Server)", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static UEUserHasLicenseForAppResult SteamServerUserHasLicenseForApp(int64 user, int32 app);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Was Restart Requested", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerWasRestartRequested();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear User Achievement", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerClearUserAchievement(int64 user, FString apiName);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Achievement", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static FServerAchievementStatus SteamServerGetUserAchievement(int64 user, FString apiName);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Int Stat", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static FServerStatIntValue SteamServerGetUserIntStat(int64 user, FString apiName);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Float Stat", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static FServerStatFloatValue SteamServerGetUserFloatStat(int64 user, FString apiName);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request User Stats", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerRequestUserStats(int64 user, FGSStatsCallback callback);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set User Achievement", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerSetUserAchievement(int64 user, FString apiName);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set User Int Stat", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerSetUserIntStat(int64 user, FString apiName, int32 value);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set User Float Stat", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerSetUserFloatStat(int64 user, FString apiName, float value);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Store User Stats", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static void SteamServerStoreUserStats(int64 user, FGSStatsCallback callback);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update User Average Rate Stat", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamServerUpdateUserAvgRateStat(int64 user, FString apiName, float value, double length);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Initialize Workshop for Game Server", Keywords = "Heathen Toolkit Steamworks Server"), Category = "Heathen's Toolkit|Steamworks|Steam Game Server")
    static bool SteamInitWorkshopForGameServer(int32 workshopDepotID, FString absoluteFolderPath);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate by Name", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayByName(FString dialog);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlay(UEOverlayDialog dialog);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate to Invite Dialog", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayInviteDialog(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate to Store", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayToStore(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate to Shopping Cart", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayAddToCartAndShow(int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate to User", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayToUser(int64 userId, UEOverlayUserDialog dialog);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate to Web Page", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayToWebPage(FString url);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Activate to Web Page Modal", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamActivateGameOverlayToWebPageModal(FString url);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Enabled", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static bool SteamIsOverlayEnabled();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Notification Position", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamOverlayNotificationPosition(UEOverlayCorner position);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Notification Inset", Keywords = "Heathen Toolkit Steamworks Overlay"), Category = "Heathen's Toolkit|Steamworks|Overlay")
	static void SteamOverlayNotificationInset(int32 horizontal, int32 vertical);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Listen for Friends Messages", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamSetListenForFriendsMessages(bool enable);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Persona Name", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamSetPersonaName(FString name, FSetPersonaNameResponseCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Persona Name", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static FString SteamGetPersonaName();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Persona State", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static UEPersonaState SteamGetPersonaState();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Restrictions", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static UEUserRestrition SteamGetUserRestrictions();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Followed", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamGetFollowed(FFriendsEnumerateFollowingListCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Coplay) Friend", Keywords = "Heathen Toolkit Steamworks Friends Coplay"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int64 SteamGetCoplayFriend(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Coplay) Friend Count", Keywords = "Heathen Toolkit Steamworks Friends Coplay"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int32 SteamGetCoplayFriendCount();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Coplay) Get Friends", Keywords = "Heathen Toolkit Steamworks Friends Coplay"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static TArray<int64> SteamGetCoplayFriends();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend by Index", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int64 SteamGetFriendByIndex(int32 index, UEFriendFlags flag);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Coplay) Get Game Played", Keywords = "Heathen Toolkit Steamworks Friends Coplay"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int32 SteamGetFriendCoplayGame(int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Coplay) Get Play Time", Keywords = "Heathen Toolkit Steamworks Friends Coplay"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static FDateTime SteamGetFriendCoplayTime(int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend Count", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int32 SteamGetFriendCount(UEFriendFlags flag);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friends", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static TArray<int64> SteamGetFriends(UEFriendFlags flag);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend Count from Source", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int32 SteamGetFriendCountFromSource(int64 sourceId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend from Source by Index", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int64 SteamGetFriendFromSourceByIndex(int64 sourceId, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend from Source", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static TArray<int64> SteamGetFriendFromSource(int64 sourceId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend Game Played", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static FMyGameInfo SteamGetFriendGamePlayed(int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend Group ID by Index", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int32 SteamGetFriendGroupIdByIndex(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend Group Count", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static int32 SteamGetFriendGroupsCount();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Friend Groups", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static TArray<int32> SteamGetFriendGroups();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Friend Group Members", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static TArray<int64> SteamGetFriendGroupMembers(int32 friendGroupId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Friend Group Name", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static FString SteamGetFriendGroupName(int32 friendGroupId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Has Friend", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static bool SteamHasFriend(int64 steamId, UEFriendFlags flag);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Invite to Game", Keywords = "Heathen Toolkit Steamworks Friends Invite"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static bool SteamInviteUserToGame(int64 userId, FString connectionString);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Reply to Friend Message", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static bool SteamReplyToFriendMessage(int64 userId, FString message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Rich Presence", Keywords = "Heathen Toolkit Steamworks Friends Rich Presence"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamRequestFriendRichPresence(int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request User Information", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static bool SteamRequestUserInformation(int64 userId, bool nameOnly);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "(Voice) Set Speaking", Keywords = "Heathen Toolkit Steamworks Friends Voice"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamSetInGameVoiceSpeaking(bool speaking);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Played With", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamSetPlayedWithUser(int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Name", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static FString SteamGetFriendPersonaName(int64 id);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Nickname", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static FString SteamGetPlayerNickname(int64 id);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid User ID", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static bool SteamIsValidSteamUserId(int64 id);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get My Avatar", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamGetMySteamAvatar(FAvatarLoadCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Avatar", Keywords = "Heathen Toolkit Steamworks Friends"), Category = "Heathen's Toolkit|Steamworks|Friends")
	static void SteamGetUserSteamAvatar(int64 id, FAvatarLoadCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Promo Item - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleAddPromoItem(int32 itemDef, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Promo Items - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleAddPromoItems(TArray<int32> itemDefs, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Consume Item - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleConsumeItem(int64 itemInstanceId, int32 quantity, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Deserialize Result - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleDeserializeResult(int64 userId, TArray<uint8> buffer, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange Items - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleExchangeItems(int32 itemDef, TArray<FItemCount> recipe, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Generate Items - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleGenerateItems(TArray<FItemCount> items, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get All Items - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleGetAllItems(TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Grant Promo Items - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleGrantPromoItems(TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Transfer Item Quantity - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleTransferItemQuantity(int64 sourceInstanceId, int32 quantity, int64 destinationInstanceId, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Trigger Item Drop - Simple", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSimpleTriggerItemDrop(int32 itemDef, TArray<FString> readProperties, FItemResultsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Promo Item", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamAddPromoItem(int32 itemDef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Promo Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamAddPromoItems(TArray<int32> itemDefs);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Check Result Steam ID", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamCheckResultSteamID(int32 resultHandle, int64 steamIDExpected);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Consume Item", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamConsumeItem(int64 itemInstanceId, int32 quantity);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Deserialize Result", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamDeserializeResult(TArray<uint8> buffer);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Destroy Result", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static void SteamDestroyResult(int32 resultHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamExchangeItems(int32 itemDef, TArray<FItemCount> recipe);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Generate Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamGenerateItems(TArray<FItemCount> items);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get All Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamGetAllItems();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item Definition Properties", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static TArray<FString> SteamGetItemDefinitionProperties(int32 itemDef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item Definition Property", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FString SteamGetItemDefinitionProperty(int32 itemDef, FString property);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Items by ID", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamGetItemsByID(TArray<int64> instanceIds);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item Price", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FItemPrice SteamGetItemPrice(int32 itemDef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = " Get Items with Prices", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static TArray<FItemWithPrice> SteamGetItemsWithPrices();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Number of Items with Prices", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static int32 SteamGetNumItemsWithPrices();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Result Item Property", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FString SteamGetResultItemProperty(int32 resultHandle, int32 index, FString propertyName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Result Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static TArray<FItemDetail> SteamGetResultItems(int32 resultHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Result Items with Properties", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static TArray<FItemDetailWithProperties> SteamGetResultItemsWithProperties(int32 resultHandle, TArray<FString> properties);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Result Status", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static UEResult SteamGetResultStatus(int32 resultHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Result Timestamp", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FDateTime SteamGetResultTimestamp(int32 resultHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Grant Promo Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamGrantPromoItems();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Item Definitions", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamLoadItemDefinitions();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Eligible Promotion Item Definition IDs", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static void SteamRequestEligiblePromoItemDefinitionsIDs(FSteamInventoryEligiblePromoItemDefIDsCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Prices", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static void SteamRequestPrices(FRequestPricesCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Serialize Result", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static TArray<uint8> SteamSerializeResult(int32 resultHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Purchase", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static void SteamStartPurchase(TArray<FItemDefCount> items, FSteamInventoryStartPurchaseResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Transfer Item Quantity", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamTransferItemQuantity(int64 sourceInstanceId, int32 quantity, int64 destinationInstanceId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Trigger Item Drop", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamTriggerItemDrop(int32 itemDef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Update Properties", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static int64 SteamStartUpdateProperties();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Submit Update Properties", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static FInventoryResult SteamSubmitUpdateProperties(int64 updateHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Property", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamRemoveProperty(int64 updateHandle, int64 instanceId, FString propertyName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Property String", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSetPropertyString(int64 updateHandle, int64 instanceId, FString propertyName, FString value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Property Bool", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSetPropertyBool(int64 updateHandle, int64 instanceId, FString propertyName, bool value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Property Int", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSetPropertyInt(int64 updateHandle, int64 instanceId, FString propertyName, int64 value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Property Float", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Heathen's Toolkit|Steamworks|Inventory")
	static bool SteamSetPropertyFloat(int64 updateHandle, int64 instanceId, FString propertyName, float value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Favorite Game", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int32 SteamAddFavoriteGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort, FDateTime lastPlayed);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add History Game", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int32 SteamAddHistoryGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort, FDateTime lastPlayed);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Lobby Request - Distance Filter", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamAddRequestLobbyListDistanceFilter(UELobbyDistanceFilter filter);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Lobby Request - Filter Slots Available", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamAddRequestLobbyListFilterSlotsAvailable(int32 slotsAvailable);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Lobby Request - Near Value Filter ", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamAddRequestLobbyListNearValueFilter(FString key, int32 valueToBeCloseTo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Lobby Request - Numerical Filter", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamAddRequestLobbyListNumericalFilter(FString key, int32 valueToMatch, UELobbyComparison comparisonType);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Lobby Request - Result Count Filter", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamAddRequestLobbyListResultCountFilter(int32 maxResults);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add to Lobby Request - String Filter", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamAddRequestLobbyListStringFilter(FString key, FString valueToMatch, UELobbyComparison comparisonType);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Lobby - Delegate", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamCreateLobby(UELobbyType type, int32 maxMembers, FLobbyCreate callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Lobby Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamDeleteLobbyData(int64 lobbyId, FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Favorite Game", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static FFavoriteGame SteamGetFavoriteGame(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Favorite Game Count", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int32 SteamGetFavoriteGameCount();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby by Index", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int64 SteamGetLobbyByIndex(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Chat Entry", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static FChatEntry SteamGetLobbyChatEntry(int64 lobbyId, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static FString SteamGetLobbyData(int64 lobbyId, FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Data by Index", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static FLobbyData SteamGetLobbyDataByIndex(int64 lobbyId, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Data Count", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int32 SteamGetLobbyDataCount(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Game Server", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static FLobbyGameServer SteamGetLobbyGameServer(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Member by Index", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int64 SteamGetLobbyMemberByIndex(int64 lobbyId, int index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Member Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static FString SteamGetLobbyMemberData(int64 lobbyId, int64 userId, FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Member Limit", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int32 SteamGetLobbyMemberLimit(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Owner", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int64 SteamGetLobbyOwner(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Lobby Owner", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamIsLobbyOwner(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Number of Lobby Members", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static int32 SteamGetNumLobbyMembers(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Lobby Members", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static TArray<int64> SteamGetLobbyMembers(int64 lobbyId, bool includeLocalUser);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Invite User to Lobby", Keywords = "Heathen Toolkit Steamworks Matchmaking Invite"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamInviteUserToLobby(int64 lobbyId, int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Join Lobby - Steam ID Delegate", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamJoinLobby(int64 lobbyId, FLobbyEnter callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Join Lobby - Hex ID Delegate", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamJoinLobbyHex(FString Hex, FLobbyEnter callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Leave Lobby", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamLeaveLobby(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Quick Match - Delegate", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamQuickMatch(FLobbyMatch callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Favorite Game", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamRemoveFavoriteGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove History Game", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamRemoveHistoryGame(int32 appId, FString ip, int32 connectionPort, int32 queryPort);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Lobby Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamRequestLobbyData(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Lobby List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamRequestLobbyList(FLobbyMatchList callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send Lobby Chat Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSendLobbyChatData(int64 lobbyId, TArray<uint8> data);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send Lobby Chat Message", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSendLobbyChatMessage(int64 lobbyId, FString message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSetLobbyData(int64 lobbyId, FString key, FString value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Listen Server", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamSetLobbyGameHost(int64 lobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Dedicated Server - Steam ID", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamSetLobbyGameServerId(int64 lobbyId, int64 serverId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Dedicated Server - IP Address", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamSetLobbyGameServerAddress(int64 lobbyId, FString ip, int32 port);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Dedicated Server - ID and IP Address", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamSetLobbyGameServer(int64 lobbyId, int64 serverId, FString ip, int32 port);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Joinable Flag", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSetLobbyJoinable(int64 lobbyId, bool joinable);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Member Data", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamSetLobbyMemberData(int64 lobbyId, FString key, FString value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Member Limit", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSetLobbyMemberLimit(int64 lobbyId, int32 maxMembers);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Owner", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSetLobbyOwner(int64 lobbyId, int64 userId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Lobby Type", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static bool SteamSetLobbyType(int64 lobbyId, UELobbyType type);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Ping Steam Game Server", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerPingServer(FString address, int32 port, FSteamMatchmakingPingResponse callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Game Server Player Details", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerPlayerDetails(FString address, int32 port, FSteamMatchmakingPlayersResponse callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Favorite Server List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRequestFavoritesServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Friends Server List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRequestFriendsServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request History Server List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRequestHistoryServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Internet Server List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRequestInternetServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request LAN Server List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRequestLANServerList(int32 appId, FSteamServerListResponce callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Spectator Server List", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRequestSpectatorServerList(int32 appId, TArray<FKeyValuePair> filter, FSteamServerListResponce callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Game Server Rules", Keywords = "Heathen Toolkit Steamworks Matchmaking"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static void SteamServerRules(FString address, int32 port, FSteamMatchmakingRulesResponse callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Begin Write Batch", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamBeginFileWriteBatch();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "End Write Batch", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamEndFileWriteBatch();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamFileDelete(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exists", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamFileExists(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Forget", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamFileForget(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static TArray<uint8> SteamFileRead(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Async", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static void SteamFileReadAsync(FString fileName, FSteamClientFileReadAsyncCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Share", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static void SteamFileShare(FString fileName, FSteamClientFileShareCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Write", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamFileWrite(FString fileName, TArray<uint8> data);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Write Async", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static void SteamFileWriteAsync(FString fileName, TArray<uint8> data, FSteamClientFileWriteAsyncCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Count", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamGetFileCount();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Name and Size", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static FRemoteStorageFileInfo SteamGetFileNameAndSize(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Size", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static int32 SteamGetFileSize(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Timestamp", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static FDateTime SteamGetFileTimestamp(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Quota", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static FRemoteStorageQuota SteamGetQuota();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Sync Platforms", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static UERemoteStoragePlatform SteamGetSyncPlatforms(FString fileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get UGC Details", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static FRemoteStorageUGCDetails SteamGetUGCDetails(int64 ugcHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UGC Download Progress", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static FRemoteStorageUGCDownloadProgress SteamUGCDownloadProgress(int64 ugcHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Enabled for Account", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamIsCloudEnabledForAccount();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Enabled for App", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamIsCloudEnabledForApp();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Enabled for App", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static void SteamSetCloudEnabledForApp(bool enabled);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Sync Platforms", Keywords = "Heathen Toolkit Steamworks Remote Storage Cloud Save"), Category = "Heathen's Toolkit|Steamworks|Remote Storage")
	static bool SteamSetSyncPlatforms(FString fileName, UERemoteStoragePlatform platform);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add App Dependency", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddAppDependency(int64 parentFileId, int32 appId, FAddAppDependencyResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Dependency", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddDependency(int64 parentFileId, int64 childFileId, FAddUGCDependencyResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Exclude Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddExcludedTag(int64 queryHandle, FString tagName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Item Key Value Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddItemKeyValueTag(int64 updateHandle, FString tagName, FString tagValue);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Item Preview File", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddItemPreviewFile(int64 updateHandle, FString absoluteFilePath, UEItemPreviewType type);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Item Preview Video", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddItemPreviewVideo(int64 updateHandle, FString YouTubeVideoId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Item to Favorites", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddItemToFavorites(int32 appId, int64 fileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Required Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddRequiredTag(int64 queryHandle, FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Required Key Value Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddRequiredKeyValueTag(int64 queryHandle, FString key, FString value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Required Tag Group", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamAddRequiredTagGroup(int64 queryHandle, TArray<FString> tags);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Item", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamCreateItem(int32 appId, UEWorkshopFileType type, FCreateItemResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Query All Request", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static int64 SteamCreateQueryAllUGCRequest(UEUGCQuery queryType, UEUGCMatchingUGCType matchingType, int32 createdByAppId, int32 createdForAppId, int32 pageNumber);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Query Details Request", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static int64 SteamCreateQueryUGCDetailsRequest(TArray<int64> fileIds);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Query User Request", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static int64 SteamCreateQueryUserUGCRequest(int32 accountId, UEUserUGCList listType, UEUGCMatchingUGCType matchingType, UEUserUGCListSortOrder sortOrder, int32 creatorAppId, int32 consumerAppId, int32 pageNumber);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Item", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static void SteamDeleteItem(int64 fileId, FDeleteItemResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Download Item", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static bool SteamDownloadItem(int64 fileId, bool highPriority);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item Download Information", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static FUSGCItemDownloadInfo SteamGetItemDownloadInfo(int64 fileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item Install Information", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks")
	static FSteamInstallationInfo SteamGetItemInstallInfo(int64 fileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item State", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static UEItemState SteamGetItemState(int64 fileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Item Update Progress", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FUGCItemUpdateProgress SteamGetItemUpdateProgress(int64 updateHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Number of Subscirbed Items", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static int32 SteamGetNumSubscribedItems();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Addition Preview", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FUGCAdditionalPreviewResult SteamGetQueryUGCAdditionalPreview(int64 queryHandle, int32 index, int32 previewIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Children", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FUGCQueryUGCChildrenResult SteamGetQueryUGCChildren(int64 queryHandle, int32 index, int32 numberOfChildren);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Number of Tags", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static int32 SteamGetQueryUGCNumTags(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FString SteamGetQueryUGCTag(int64 queryHandle, int32 index, int32 tagIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Tag Display Name", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FString SteamGetQueryUGCTagDisplayName(int64 queryHandle, int32 index, int32 tagIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Key Value Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FKeyValuePair SteamGetQueryUGCKeyValueTag(int64 queryHandle, int32 index, int32 tagIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Content Descriptors", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static TArray<UEUGCContentDescriptorID> SteamGetQueryUGCContentDescriptors(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Metadata", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FString SteamGetQueryUGCMetadata(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Number of Additional Previews", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static int32 SteamGetQueryUGCNumAdditionalPreviews(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Number of Key Value Tags", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static int32 SteamGetQueryUGCNumKeyValueTags(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Preview URL", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FString SteamGetQueryUGCPreviewURL(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Result", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static FSteamUGCDetails SteamGetQueryUGCResult(int64 queryHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Query Statistic", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static int64 SteamGetQueryUGCStatistic(int64 queryHandle, int32 index, UEItemStatistic statistic);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Subscribed Items", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static TArray<int64> SteamGetSubscribedItems();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Item Vote", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamGetUserItemVote(int64 fileId, FGetUserItemVoteResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Release Query Request", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamReleaseQueryUGCRequest(int64 queryHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove App Dependency", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamRemoveAppDependency(int64 fileId, int32 appId, FRemoveAppDependencyResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remote Dependency", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void RemoveDependency(int64 parentFileId, int64 childFileId, FRemoveUGCDependencyResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Item from Favorites", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamRemoveItemFromFavorites(int32 appId, int64 fileId, FUserFavoriteItemsListChangedCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Item Key Value Tags", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamRemoveItemKeyValueTags(int64 updateHandle, FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Item Preview", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamRemoveItemPreview(int64 updateHandle, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Content Descriptor", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamAddContentDescriptor(int64 updateHandle, UEUGCContentDescriptorID descriptorId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Content Descriptor", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamRemoveContentDescriptor(int64 updateHandle, UEUGCContentDescriptorID descriptorId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send Query Request", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamSendQueryUGCRequest(int64 queryHandle, FSteamUGCQueryCompletedCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Allow Cached Response", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetAllowCachedResponse(int64 queryHandle, int32 maxAgeInSeconds);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Cloud File Name Filter", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetCloudFileNameFilter(int64 queryHandle, FString matchCloudFileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Content", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemContent(int64 updateHandle, FString absoluteContentFolderPath);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Description", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemDescription(int64 updateHandle, FString description);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Metadata", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemMetadata(int64 updateHandle, FString metadata);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Preview", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemPreview(int64 updateHandle, FString previewFile);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Tags", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemTags(int64 updateHandle, TArray<FString> tags);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Title", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemTitle(int64 updateHandle, FString title);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Update Language", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemUpdateLanguage(int64 updateHandle, FString language);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Item Visibility", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetItemVisibility(int64 updateHandle, UERemoteStoragePublishedFileVisibility visibility);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Language", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetLanguage(int64 queryHandle, FString language);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Match any Tag", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetMatchAnyTag(int64 queryHandle, bool matchAnyTag);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Ranked by Trend Days", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetRankedByTrendDays(int64 queryHandle, int32 days);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Additional Previews", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnAdditionalPreviews(int64 queryHandle, bool returnAdditionalPreviews);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Children", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnChildren(int64 queryHandle, bool returnChildren);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Key Value Tags", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnKeyValueTags(int64 queryHandle, bool returnKeyValueTags);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Long Description", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnLongDescription(int64 queryHandle, bool returnLongDescription);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Metadata", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnMetadata(int64 queryHandle, bool returnMetadata);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Only IDs", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnOnlyIDs(int64 queryHandle, bool returnOnlyIDs);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Playtime Stats", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnPlaytimeStats(int64 queryHandle, int32 Days);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Return Total Only", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetReturnTotalOnly(int64 queryHandle, bool returnTotalOnly);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Search Text", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetSearchText(int64 queryHandle, FString searchText);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Search", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamSetSearch(int64 queryHandle, FString searchText, bool allowCashedResponse, bool matchAnyTag, bool withAdditionalPreviews, bool withChildren, bool withKeyValueTags, bool withLongDescriptions, bool withMetadata);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set User Item Vote", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamSetUserItemVote(int64 fileId, bool voteUp, FSetUserItemVoteResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Item Update", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static int64 SteamStartItemUpdate(int32 appId, int64 fileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Playtime Tracking", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamStartPlaytimeTracking(TArray<int64> fileIDs, FStartPlaytimeTrackingResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Stop Playtime Tracking", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamStopPlaytimeTracking(TArray<int64> fileIDs, FStopPlaytimeTrackingResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Stop Playtime Tracking for all Items", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamStopPlaytimeTrackingForAllItems(FStopPlaytimeTrackingResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Submit Item Update", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamSubmitItemUpdate(int64 updateHandle, FString changeNote, FSubmitItemUpdateResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Subscribe to Item", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamSubscribeItem(int64 fileId, FRemoteStorageSubscribePublishedFileResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Suspend Downloads", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamSuspendDownloads(bool suspend);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unsubscribe Item", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamUnsubscribeItem(int64 fileId, FRemoteStorageUnsubscribePublishedFileResultCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update Item Preview File", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamUpdateItemPreviewFile(int64 updateHandle, int32 index, FString previewFile);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update Item Preview Video", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamUpdateItemPreviewVideo(int64 updateHandle, int32 index, FString videoId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Show Workshop EULA", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static bool SteamShowWorkshopEULA();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Workshop EULA Status", Keywords = "Heathen Toolkit Steamworks Workshop User Generated Content UGC"), Category = "Heathen's Toolkit|Steamworks|Workshop")
	static void SteamGetWorkshopEULAStatus(FWorkshopEULAStatusCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get My Steam ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int64 SteamGetMySteamId();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get My Friend ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int32 SteamGetMyFriendId();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get My Steam Level", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int32 SteamGetMySteamLevel();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Behind NAT", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIsBehindNAT();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Phone Identifying", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIsPhoneIdentifying();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Phone Requiring Verification", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIsPhoneRequiringVerification();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Phone Verified", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIsPhoneVerified();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Two Factor Enabled", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIsTwoFactorEnabled();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Logged On", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamLoggedOn();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Cancel Authentication Ticket", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamCancelAuthTicket(int32 authTicketHandle);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Decompress Voice", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FDecompressVoiceResult SteamDecompressVoice(TArray<uint8> CompressedData, int32 DesiredSampleRate, USoundWaveProcedural* buffer);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "End Authentication Session", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamEndAuthSession(int64 steamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Authentication Session Ticket", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FAuthTicketData SteamGetAuthSessionTicket(int64 forSteamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Authentication Ticket for Web API", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int32 SteamGetAuthTicketForWebApi(FString identity);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Available Voice", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FVoiceAvailableResult SteamGetAvailableVoice();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Encrypted App Ticket", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamGetEncryptedAppTicket(TArray<uint8> data, FEncryptedAppTicket callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get My Hex ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FString SteamGetMyHex();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Friend ID to Steam ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int64 SteamFriendIdToSteamId(int32 friendId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Friend ID to Hex ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FString SteamFriendIdToHex(int32 friendId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ID to Friend ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int32 SteamIdToFriendId(int64 steamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ID to Hex ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FString SteamIdToHex(int64 steamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Hex ID to Steam ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FHexParseResults SteamHexToSteamId(FString hexId, UEAccountType type);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Hex ID to Friend ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int SteamHexToFriendId(FString hexId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Steam ID Valid", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIdIsValid(int64 steamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is this My Steam ID", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamIdIsMe(int64 steamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Advertise Game", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamAdvertiseGame(int64 id, FString ip, int32 port);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Begin Authentication Session", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static UEBeginAuthSessionResult SteamBeginAuthSession(TArray<uint8> ticket, int64 steamId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Game Badge Level", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int SteamGetGameBadgeLevel(int32 series, bool foil);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Store Authentication URL", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamRequestStoreAuthURL(FString RedirectUrl, FStoreAuthURLCallback Callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Voice", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FVoiceResult SteamGetVoice();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Voice Optimal Sample Rate", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int32 SteamGetVoiceOptimalSampleRate();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Voice Recording", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamStartVoiceRecording();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Stop Voice Recording", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamStopVoiceRecording();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "User has License for App", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static UEUserHasLicenseForAppResult SteamUserHasLicenseForApp(int64 userId, int32 appId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Rich Presence", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static bool SteamSetRichPresence(FString key, FString value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear Rich Presence", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static void SteamClearRichPresence();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Rich Presence", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FString SteamGetRichPresence(FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Rich Presence", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FString SteamGetUserRichPresence(int64 id, FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Rich Presence Key by Index", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static FString SteamGetUserRichPresenceKeyByIndex(int64 id, int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Rich Presence Key Count", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static int32 SteamGetUserRichPresenceKeyCount(int64 id);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Persona State", Keywords = "Heathen Toolkit Steamworks User My Me"), Category = "Heathen's Toolkit|Steamworks|User")
	static UEPersonaState SteamGetUserPersonaState(int64 id);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Attach to Leaderboard", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamAttachLeaderboardUGC(int64 boardId, int64 ugcHandle, FLeaderboardUGCSet callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear Achievement", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamClearAchievement(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Download Leaderboard Entries", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamDownloadLeaderboardEntries(int64 boardId, UELeaderboardDataRequest requestType, int32 start, int32 end, int32 detailCount, FLeaderboardEntriesDownloaded callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Download Leaderboard Entries for User", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamDownloadLeaderboardEntriesForUsers(int64 boardId, TArray<int64> users, int32 detailCount, FLeaderboardEntriesDownloaded callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Find Leaderboard", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamFindLeaderboard(FString apiName, FLeaderboardFindResult callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Find or Crete Leaderboard", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamFindOrCreateLeaderboard(FString apiName, UELeaderboardSortMethod sortMethod, UELeaderboardDisplayType displayType, FLeaderboardFindResult callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Achievement is Achieved", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamGetAchievementIsAchieved(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Achievement", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FAchievementStatus SteamGetAchievement(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Achievement Icon", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamGetAchievementIcon(FString apiName, FIconLoadCallback callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Achievement API Name", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FString SteamGetAchievementApiName(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Global Stat Int64", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static int64 SteamGetGlobalStatInt64(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Global Stat Double", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static double SteamGetGlobalStatDouble(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Global Stat History Int64", Keywords = "Heathen Toolkit Steamworks Stat Achievement"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamGetGlobalStatHistoryInt64(FString apiName, int32 numOfDays, FGlobalStatsIntHistoryReceived callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Global Stat History Double", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamGetGlobalStatHistoryDouble(FString apiName, int32 numOfDays, FGlobalStatsDoubleHistoryReceived callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Leaderboard Display Type", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static UELeaderboardDisplayType SteamGetLeaderboardDisplayType(int64 boardId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Leaderboard Entry Count", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static int32 SteamGetLeaderboardEntryCount(int64 boardId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Leaderboard Name", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FString SteamGetLeaderboardName(int64 boardId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Leaderboard Sort Method", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static UELeaderboardSortMethod SteamGetLeaderboardSortMethod(int64 boardId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Most Achieved Achievement Information", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamGetMostAchievedAchievementInfo(FMostAchievedStatusInfo callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Number of Achievements", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamGetNumAchievements(FNumCurrentPlayers callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Int Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FIntStat SteamGetIntStat(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FFloatStat SteamGetFloatStat(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Achievement", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FUserAchievementStatus SteamGetUserAchievement(int64 userId, FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Int Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FIntStat SteamGetUserIntStat(int64 userId, FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Float Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static FFloatStat SteamGetUserFloatStat(int64 userId, FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Indicate Achievement Progress", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamIndicateAchievementProgress(FString apiName, int32 currentProgress, int32 maxProgress);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request Current Stats", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamRequestCurrentStats();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request User Stats", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamRequestUserStats(int64 userId, FUserStatsReceivedResult callback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Request All Stats", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamResetAllStats(bool achievementsToo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Achievement", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamSetAchievement(FString apiName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Int Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamSetIntStat(FString apiName, int32 data);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Float Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamSetFloatStat(FString apiName, float data);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Store Stats", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamStoreStats();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update Average Rate Stat", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static bool SteamUpdateAvgRateStat(FString apiName, float countThisSession, double sessionLength);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Upload Leaderboard Score", Keywords = "Heathen Toolkit Steamworks Stat Achievement Leaderboard"), Category = "Heathen's Toolkit|Steamworks|User Stats")
	static void SteamUploadLeaderboardScore(int64 boardId, bool keepBest, int32 score, TArray<int32> data, FLeaderboardScoreUploaded InCallback);
};