// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolkitSteamworksBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class USoundWaveProcedural;
enum class UEAccountType : uint8;
enum class UEBeginAuthSessionResult : uint8;
enum class UEFriendFlags : uint8;
enum class UEItemPreviewType : uint8;
enum class UEItemState : uint8;
enum class UEItemStatistic : uint8;
enum class UELeaderboardDataRequest : uint8;
enum class UELeaderboardDisplayType : uint8;
enum class UELeaderboardSortMethod : uint8;
enum class UELobbyComparison : uint8;
enum class UELobbyDistanceFilter : uint8;
enum class UELobbyType : uint8;
enum class UEOverlayCorner : uint8;
enum class UEOverlayDialog : uint8;
enum class UEOverlayUserDialog : uint8;
enum class UEPersonaState : uint8;
enum class UERemoteStoragePlatform : uint8;
enum class UERemoteStoragePublishedFileVisibility : uint8;
enum class UEResult : uint8;
enum class UEServerMode : uint8;
enum class UEUGCContentDescriptorID : uint8;
enum class UEUGCMatchingUGCType : uint8;
enum class UEUGCQuery : uint8;
enum class UEUserHasLicenseForAppResult : uint8;
enum class UEUserRestrition : uint8;
enum class UEUserUGCList : uint8;
enum class UEUserUGCListSortOrder : uint8;
enum class UEWorkshopFileType : uint8;
struct FAchievementStatus;
struct FAuthTicketData;
struct FChatEntry;
struct FDateTime;
struct FDecompressVoiceResult;
struct FDLCData;
struct FFavoriteGame;
struct FFloatStat;
struct FHexParseResults;
struct FIntStat;
struct FInventoryResult;
struct FItemCount;
struct FItemDefCount;
struct FItemDetail;
struct FItemDetailWithProperties;
struct FItemPrice;
struct FItemWithPrice;
struct FKeyValuePair;
struct FLobbyData;
struct FLobbyGameServer;
struct FMyGameInfo;
struct FRemoteStorageFileInfo;
struct FRemoteStorageQuota;
struct FRemoteStorageUGCDetails;
struct FRemoteStorageUGCDownloadProgress;
struct FServerAchievementStatus;
struct FServerStatFloatValue;
struct FServerStatIntValue;
struct FSteamInstallationInfo;
struct FSteamUGCDetails;
struct FTimeTrial;
struct FUGCAdditionalPreviewResult;
struct FUGCItemUpdateProgress;
struct FUGCQueryUGCChildrenResult;
struct FUserAchievementStatus;
struct FUSGCItemDownloadInfo;
struct FVoiceAvailableResult;
struct FVoiceResult;
#ifdef TOOLKITSTEAMWORKS_ToolkitSteamworksBPLibrary_generated_h
#error "ToolkitSteamworksBPLibrary.generated.h already included, missing '#pragma once' in ToolkitSteamworksBPLibrary.h"
#endif
#define TOOLKITSTEAMWORKS_ToolkitSteamworksBPLibrary_generated_h

#define FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSteamUploadLeaderboardScore); \
	DECLARE_FUNCTION(execSteamUpdateAvgRateStat); \
	DECLARE_FUNCTION(execSteamStoreStats); \
	DECLARE_FUNCTION(execSteamSetFloatStat); \
	DECLARE_FUNCTION(execSteamSetIntStat); \
	DECLARE_FUNCTION(execSteamSetAchievement); \
	DECLARE_FUNCTION(execSteamResetAllStats); \
	DECLARE_FUNCTION(execSteamRequestUserStats); \
	DECLARE_FUNCTION(execSteamRequestCurrentStats); \
	DECLARE_FUNCTION(execSteamIndicateAchievementProgress); \
	DECLARE_FUNCTION(execSteamGetUserFloatStat); \
	DECLARE_FUNCTION(execSteamGetUserIntStat); \
	DECLARE_FUNCTION(execSteamGetUserAchievement); \
	DECLARE_FUNCTION(execSteamGetFloatStat); \
	DECLARE_FUNCTION(execSteamGetIntStat); \
	DECLARE_FUNCTION(execSteamGetNumAchievements); \
	DECLARE_FUNCTION(execSteamGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execSteamGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execSteamGetLeaderboardName); \
	DECLARE_FUNCTION(execSteamGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execSteamGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execSteamGetGlobalStatHistoryDouble); \
	DECLARE_FUNCTION(execSteamGetGlobalStatHistoryInt64); \
	DECLARE_FUNCTION(execSteamGetGlobalStatDouble); \
	DECLARE_FUNCTION(execSteamGetGlobalStatInt64); \
	DECLARE_FUNCTION(execSteamGetAchievementApiName); \
	DECLARE_FUNCTION(execSteamGetAchievementIcon); \
	DECLARE_FUNCTION(execSteamGetAchievement); \
	DECLARE_FUNCTION(execSteamGetAchievementIsAchieved); \
	DECLARE_FUNCTION(execSteamFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execSteamFindLeaderboard); \
	DECLARE_FUNCTION(execSteamDownloadLeaderboardEntriesForUsers); \
	DECLARE_FUNCTION(execSteamDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execSteamClearAchievement); \
	DECLARE_FUNCTION(execSteamAttachLeaderboardUGC); \
	DECLARE_FUNCTION(execSteamGetUserPersonaState); \
	DECLARE_FUNCTION(execSteamGetUserRichPresenceKeyCount); \
	DECLARE_FUNCTION(execSteamGetUserRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execSteamGetUserRichPresence); \
	DECLARE_FUNCTION(execSteamGetRichPresence); \
	DECLARE_FUNCTION(execSteamClearRichPresence); \
	DECLARE_FUNCTION(execSteamSetRichPresence); \
	DECLARE_FUNCTION(execSteamUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSteamStopVoiceRecording); \
	DECLARE_FUNCTION(execSteamStartVoiceRecording); \
	DECLARE_FUNCTION(execSteamGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execSteamGetVoice); \
	DECLARE_FUNCTION(execSteamRequestStoreAuthURL); \
	DECLARE_FUNCTION(execSteamGetGameBadgeLevel); \
	DECLARE_FUNCTION(execSteamBeginAuthSession); \
	DECLARE_FUNCTION(execSteamAdvertiseGame); \
	DECLARE_FUNCTION(execSteamIdIsMe); \
	DECLARE_FUNCTION(execSteamIdIsValid); \
	DECLARE_FUNCTION(execSteamHexToFriendId); \
	DECLARE_FUNCTION(execSteamHexToSteamId); \
	DECLARE_FUNCTION(execSteamIdToHex); \
	DECLARE_FUNCTION(execSteamIdToFriendId); \
	DECLARE_FUNCTION(execSteamFriendIdToHex); \
	DECLARE_FUNCTION(execSteamFriendIdToSteamId); \
	DECLARE_FUNCTION(execSteamGetMyHex); \
	DECLARE_FUNCTION(execSteamGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execSteamGetAvailableVoice); \
	DECLARE_FUNCTION(execSteamGetAuthTicketForWebApi); \
	DECLARE_FUNCTION(execSteamGetAuthSessionTicket); \
	DECLARE_FUNCTION(execSteamEndAuthSession); \
	DECLARE_FUNCTION(execSteamDecompressVoice); \
	DECLARE_FUNCTION(execSteamCancelAuthTicket); \
	DECLARE_FUNCTION(execSteamLoggedOn); \
	DECLARE_FUNCTION(execSteamIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execSteamIsPhoneVerified); \
	DECLARE_FUNCTION(execSteamIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execSteamIsPhoneIdentifying); \
	DECLARE_FUNCTION(execSteamIsBehindNAT); \
	DECLARE_FUNCTION(execSteamGetMySteamLevel); \
	DECLARE_FUNCTION(execSteamGetMyFriendId); \
	DECLARE_FUNCTION(execSteamGetMySteamId); \
	DECLARE_FUNCTION(execSteamGetWorkshopEULAStatus); \
	DECLARE_FUNCTION(execSteamShowWorkshopEULA); \
	DECLARE_FUNCTION(execSteamUpdateItemPreviewVideo); \
	DECLARE_FUNCTION(execSteamUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execSteamUnsubscribeItem); \
	DECLARE_FUNCTION(execSteamSuspendDownloads); \
	DECLARE_FUNCTION(execSteamSubscribeItem); \
	DECLARE_FUNCTION(execSteamSubmitItemUpdate); \
	DECLARE_FUNCTION(execSteamStopPlaytimeTrackingForAllItems); \
	DECLARE_FUNCTION(execSteamStopPlaytimeTracking); \
	DECLARE_FUNCTION(execSteamStartPlaytimeTracking); \
	DECLARE_FUNCTION(execSteamStartItemUpdate); \
	DECLARE_FUNCTION(execSteamSetUserItemVote); \
	DECLARE_FUNCTION(execSteamSetSearch); \
	DECLARE_FUNCTION(execSteamSetSearchText); \
	DECLARE_FUNCTION(execSteamSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSteamSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSteamSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSteamSetReturnMetadata); \
	DECLARE_FUNCTION(execSteamSetReturnLongDescription); \
	DECLARE_FUNCTION(execSteamSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSteamSetReturnChildren); \
	DECLARE_FUNCTION(execSteamSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSteamSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSteamSetMatchAnyTag); \
	DECLARE_FUNCTION(execSteamSetLanguage); \
	DECLARE_FUNCTION(execSteamSetItemVisibility); \
	DECLARE_FUNCTION(execSteamSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSteamSetItemTitle); \
	DECLARE_FUNCTION(execSteamSetItemTags); \
	DECLARE_FUNCTION(execSteamSetItemPreview); \
	DECLARE_FUNCTION(execSteamSetItemMetadata); \
	DECLARE_FUNCTION(execSteamSetItemDescription); \
	DECLARE_FUNCTION(execSteamSetItemContent); \
	DECLARE_FUNCTION(execSteamSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSteamSetAllowCachedResponse); \
	DECLARE_FUNCTION(execSteamSendQueryUGCRequest); \
	DECLARE_FUNCTION(execSteamRemoveContentDescriptor); \
	DECLARE_FUNCTION(execSteamAddContentDescriptor); \
	DECLARE_FUNCTION(execSteamRemoveItemPreview); \
	DECLARE_FUNCTION(execSteamRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execSteamRemoveItemFromFavorites); \
	DECLARE_FUNCTION(execRemoveDependency); \
	DECLARE_FUNCTION(execSteamRemoveAppDependency); \
	DECLARE_FUNCTION(execSteamReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execSteamGetUserItemVote); \
	DECLARE_FUNCTION(execSteamGetSubscribedItems); \
	DECLARE_FUNCTION(execSteamGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execSteamGetQueryUGCResult); \
	DECLARE_FUNCTION(execSteamGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execSteamGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execSteamGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execSteamGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execSteamGetQueryUGCContentDescriptors); \
	DECLARE_FUNCTION(execSteamGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execSteamGetQueryUGCTagDisplayName); \
	DECLARE_FUNCTION(execSteamGetQueryUGCTag); \
	DECLARE_FUNCTION(execSteamGetQueryUGCNumTags); \
	DECLARE_FUNCTION(execSteamGetQueryUGCChildren); \
	DECLARE_FUNCTION(execSteamGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execSteamGetNumSubscribedItems); \
	DECLARE_FUNCTION(execSteamGetItemUpdateProgress); \
	DECLARE_FUNCTION(execSteamGetItemState); \
	DECLARE_FUNCTION(execSteamGetItemInstallInfo); \
	DECLARE_FUNCTION(execSteamGetItemDownloadInfo); \
	DECLARE_FUNCTION(execSteamDownloadItem); \
	DECLARE_FUNCTION(execSteamDeleteItem); \
	DECLARE_FUNCTION(execSteamCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execSteamCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execSteamCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execSteamCreateItem); \
	DECLARE_FUNCTION(execSteamAddRequiredTagGroup); \
	DECLARE_FUNCTION(execSteamAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execSteamAddRequiredTag); \
	DECLARE_FUNCTION(execSteamAddItemToFavorites); \
	DECLARE_FUNCTION(execSteamAddItemPreviewVideo); \
	DECLARE_FUNCTION(execSteamAddItemPreviewFile); \
	DECLARE_FUNCTION(execSteamAddItemKeyValueTag); \
	DECLARE_FUNCTION(execSteamAddExcludedTag); \
	DECLARE_FUNCTION(execSteamAddDependency); \
	DECLARE_FUNCTION(execSteamAddAppDependency); \
	DECLARE_FUNCTION(execSteamSetSyncPlatforms); \
	DECLARE_FUNCTION(execSteamSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execSteamIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execSteamIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execSteamUGCDownloadProgress); \
	DECLARE_FUNCTION(execSteamGetUGCDetails); \
	DECLARE_FUNCTION(execSteamGetSyncPlatforms); \
	DECLARE_FUNCTION(execSteamGetQuota); \
	DECLARE_FUNCTION(execSteamGetFileTimestamp); \
	DECLARE_FUNCTION(execSteamGetFileSize); \
	DECLARE_FUNCTION(execSteamGetFileNameAndSize); \
	DECLARE_FUNCTION(execSteamGetFileCount); \
	DECLARE_FUNCTION(execSteamFileWriteAsync); \
	DECLARE_FUNCTION(execSteamFileWrite); \
	DECLARE_FUNCTION(execSteamFileShare); \
	DECLARE_FUNCTION(execSteamFileReadAsync); \
	DECLARE_FUNCTION(execSteamFileRead); \
	DECLARE_FUNCTION(execSteamFileForget); \
	DECLARE_FUNCTION(execSteamFileExists); \
	DECLARE_FUNCTION(execSteamFileDelete); \
	DECLARE_FUNCTION(execSteamEndFileWriteBatch); \
	DECLARE_FUNCTION(execSteamBeginFileWriteBatch); \
	DECLARE_FUNCTION(execSteamServerRules); \
	DECLARE_FUNCTION(execSteamServerRequestSpectatorServerList); \
	DECLARE_FUNCTION(execSteamServerRequestLANServerList); \
	DECLARE_FUNCTION(execSteamServerRequestInternetServerList); \
	DECLARE_FUNCTION(execSteamServerRequestHistoryServerList); \
	DECLARE_FUNCTION(execSteamServerRequestFriendsServerList); \
	DECLARE_FUNCTION(execSteamServerRequestFavoritesServerList); \
	DECLARE_FUNCTION(execSteamServerPlayerDetails); \
	DECLARE_FUNCTION(execSteamServerPingServer); \
	DECLARE_FUNCTION(execSteamSetLobbyType); \
	DECLARE_FUNCTION(execSteamSetLobbyOwner); \
	DECLARE_FUNCTION(execSteamSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSteamSetLobbyMemberData); \
	DECLARE_FUNCTION(execSteamSetLobbyJoinable); \
	DECLARE_FUNCTION(execSteamSetLobbyGameServer); \
	DECLARE_FUNCTION(execSteamSetLobbyGameServerAddress); \
	DECLARE_FUNCTION(execSteamSetLobbyGameServerId); \
	DECLARE_FUNCTION(execSteamSetLobbyGameHost); \
	DECLARE_FUNCTION(execSteamSetLobbyData); \
	DECLARE_FUNCTION(execSteamSendLobbyChatMessage); \
	DECLARE_FUNCTION(execSteamSendLobbyChatData); \
	DECLARE_FUNCTION(execSteamRequestLobbyList); \
	DECLARE_FUNCTION(execSteamRequestLobbyData); \
	DECLARE_FUNCTION(execSteamRemoveHistoryGame); \
	DECLARE_FUNCTION(execSteamRemoveFavoriteGame); \
	DECLARE_FUNCTION(execSteamQuickMatch); \
	DECLARE_FUNCTION(execSteamLeaveLobby); \
	DECLARE_FUNCTION(execSteamJoinLobbyHex); \
	DECLARE_FUNCTION(execSteamJoinLobby); \
	DECLARE_FUNCTION(execSteamInviteUserToLobby); \
	DECLARE_FUNCTION(execSteamGetLobbyMembers); \
	DECLARE_FUNCTION(execSteamGetNumLobbyMembers); \
	DECLARE_FUNCTION(execSteamIsLobbyOwner); \
	DECLARE_FUNCTION(execSteamGetLobbyOwner); \
	DECLARE_FUNCTION(execSteamGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSteamGetLobbyMemberData); \
	DECLARE_FUNCTION(execSteamGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execSteamGetLobbyGameServer); \
	DECLARE_FUNCTION(execSteamGetLobbyDataCount); \
	DECLARE_FUNCTION(execSteamGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execSteamGetLobbyData); \
	DECLARE_FUNCTION(execSteamGetLobbyChatEntry); \
	DECLARE_FUNCTION(execSteamGetLobbyByIndex); \
	DECLARE_FUNCTION(execSteamGetFavoriteGameCount); \
	DECLARE_FUNCTION(execSteamGetFavoriteGame); \
	DECLARE_FUNCTION(execSteamDeleteLobbyData); \
	DECLARE_FUNCTION(execSteamCreateLobby); \
	DECLARE_FUNCTION(execSteamAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execSteamAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execSteamAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execSteamAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execSteamAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execSteamAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execSteamAddHistoryGame); \
	DECLARE_FUNCTION(execSteamAddFavoriteGame); \
	DECLARE_FUNCTION(execSteamSetPropertyFloat); \
	DECLARE_FUNCTION(execSteamSetPropertyInt); \
	DECLARE_FUNCTION(execSteamSetPropertyBool); \
	DECLARE_FUNCTION(execSteamSetPropertyString); \
	DECLARE_FUNCTION(execSteamRemoveProperty); \
	DECLARE_FUNCTION(execSteamSubmitUpdateProperties); \
	DECLARE_FUNCTION(execSteamStartUpdateProperties); \
	DECLARE_FUNCTION(execSteamTriggerItemDrop); \
	DECLARE_FUNCTION(execSteamTransferItemQuantity); \
	DECLARE_FUNCTION(execSteamStartPurchase); \
	DECLARE_FUNCTION(execSteamSerializeResult); \
	DECLARE_FUNCTION(execSteamRequestPrices); \
	DECLARE_FUNCTION(execSteamRequestEligiblePromoItemDefinitionsIDs); \
	DECLARE_FUNCTION(execSteamLoadItemDefinitions); \
	DECLARE_FUNCTION(execSteamGrantPromoItems); \
	DECLARE_FUNCTION(execSteamGetResultTimestamp); \
	DECLARE_FUNCTION(execSteamGetResultStatus); \
	DECLARE_FUNCTION(execSteamGetResultItemsWithProperties); \
	DECLARE_FUNCTION(execSteamGetResultItems); \
	DECLARE_FUNCTION(execSteamGetResultItemProperty); \
	DECLARE_FUNCTION(execSteamGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execSteamGetItemsWithPrices); \
	DECLARE_FUNCTION(execSteamGetItemPrice); \
	DECLARE_FUNCTION(execSteamGetItemsByID); \
	DECLARE_FUNCTION(execSteamGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execSteamGetItemDefinitionProperties); \
	DECLARE_FUNCTION(execSteamGetAllItems); \
	DECLARE_FUNCTION(execSteamGenerateItems); \
	DECLARE_FUNCTION(execSteamExchangeItems); \
	DECLARE_FUNCTION(execSteamDestroyResult); \
	DECLARE_FUNCTION(execSteamDeserializeResult); \
	DECLARE_FUNCTION(execSteamConsumeItem); \
	DECLARE_FUNCTION(execSteamCheckResultSteamID); \
	DECLARE_FUNCTION(execSteamAddPromoItems); \
	DECLARE_FUNCTION(execSteamAddPromoItem); \
	DECLARE_FUNCTION(execSteamSimpleTriggerItemDrop); \
	DECLARE_FUNCTION(execSteamSimpleTransferItemQuantity); \
	DECLARE_FUNCTION(execSteamSimpleGrantPromoItems); \
	DECLARE_FUNCTION(execSteamSimpleGetAllItems); \
	DECLARE_FUNCTION(execSteamSimpleGenerateItems); \
	DECLARE_FUNCTION(execSteamSimpleExchangeItems); \
	DECLARE_FUNCTION(execSteamSimpleDeserializeResult); \
	DECLARE_FUNCTION(execSteamSimpleConsumeItem); \
	DECLARE_FUNCTION(execSteamSimpleAddPromoItems); \
	DECLARE_FUNCTION(execSteamSimpleAddPromoItem); \
	DECLARE_FUNCTION(execSteamGetUserSteamAvatar); \
	DECLARE_FUNCTION(execSteamGetMySteamAvatar); \
	DECLARE_FUNCTION(execSteamIsValidSteamUserId); \
	DECLARE_FUNCTION(execSteamGetPlayerNickname); \
	DECLARE_FUNCTION(execSteamGetFriendPersonaName); \
	DECLARE_FUNCTION(execSteamSetPlayedWithUser); \
	DECLARE_FUNCTION(execSteamSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSteamRequestUserInformation); \
	DECLARE_FUNCTION(execSteamRequestFriendRichPresence); \
	DECLARE_FUNCTION(execSteamReplyToFriendMessage); \
	DECLARE_FUNCTION(execSteamInviteUserToGame); \
	DECLARE_FUNCTION(execSteamHasFriend); \
	DECLARE_FUNCTION(execSteamGetFriendGroupName); \
	DECLARE_FUNCTION(execSteamGetFriendGroupMembers); \
	DECLARE_FUNCTION(execSteamGetFriendGroups); \
	DECLARE_FUNCTION(execSteamGetFriendGroupsCount); \
	DECLARE_FUNCTION(execSteamGetFriendGroupIdByIndex); \
	DECLARE_FUNCTION(execSteamGetFriendGamePlayed); \
	DECLARE_FUNCTION(execSteamGetFriendFromSource); \
	DECLARE_FUNCTION(execSteamGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execSteamGetFriendCountFromSource); \
	DECLARE_FUNCTION(execSteamGetFriends); \
	DECLARE_FUNCTION(execSteamGetFriendCount); \
	DECLARE_FUNCTION(execSteamGetFriendCoplayTime); \
	DECLARE_FUNCTION(execSteamGetFriendCoplayGame); \
	DECLARE_FUNCTION(execSteamGetFriendByIndex); \
	DECLARE_FUNCTION(execSteamGetCoplayFriends); \
	DECLARE_FUNCTION(execSteamGetCoplayFriendCount); \
	DECLARE_FUNCTION(execSteamGetCoplayFriend); \
	DECLARE_FUNCTION(execSteamGetFollowed); \
	DECLARE_FUNCTION(execSteamGetUserRestrictions); \
	DECLARE_FUNCTION(execSteamGetPersonaState); \
	DECLARE_FUNCTION(execSteamGetPersonaName); \
	DECLARE_FUNCTION(execSteamSetPersonaName); \
	DECLARE_FUNCTION(execSteamSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSteamOverlayNotificationInset); \
	DECLARE_FUNCTION(execSteamOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSteamIsOverlayEnabled); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayToWebPageModal); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayAddToCartAndShow); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayInviteDialog); \
	DECLARE_FUNCTION(execSteamActivateGameOverlay); \
	DECLARE_FUNCTION(execSteamActivateGameOverlayByName); \
	DECLARE_FUNCTION(execSteamInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execSteamServerUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSteamServerStoreUserStats); \
	DECLARE_FUNCTION(execSteamServerSetUserFloatStat); \
	DECLARE_FUNCTION(execSteamServerSetUserIntStat); \
	DECLARE_FUNCTION(execSteamServerSetUserAchievement); \
	DECLARE_FUNCTION(execSteamServerRequestUserStats); \
	DECLARE_FUNCTION(execSteamServerGetUserFloatStat); \
	DECLARE_FUNCTION(execSteamServerGetUserIntStat); \
	DECLARE_FUNCTION(execSteamServerGetUserAchievement); \
	DECLARE_FUNCTION(execSteamServerClearUserAchievement); \
	DECLARE_FUNCTION(execSteamServerWasRestartRequested); \
	DECLARE_FUNCTION(execSteamServerUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSteamServerSetSpectatorName); \
	DECLARE_FUNCTION(execSteamServerSetSpectatorPort); \
	DECLARE_FUNCTION(execSteamServerSetName); \
	DECLARE_FUNCTION(execSteamServerSetRegion); \
	DECLARE_FUNCTION(execSteamServerSetProduct); \
	DECLARE_FUNCTION(execSteamServerSetPasswordProtected); \
	DECLARE_FUNCTION(execSteamServerSetModDirectoryName); \
	DECLARE_FUNCTION(execSteamServerSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSteamServerSetMapName); \
	DECLARE_FUNCTION(execSteamServerSetKeyValue); \
	DECLARE_FUNCTION(execSteamServerSetGameTags); \
	DECLARE_FUNCTION(execSteamServerSetDescription); \
	DECLARE_FUNCTION(execSteamServerSetGameData); \
	DECLARE_FUNCTION(execSteamServerSetDedicatedServer); \
	DECLARE_FUNCTION(execSteamServerSetBotPlayerCount); \
	DECLARE_FUNCTION(execSteamServerRequestUserGroupStatus); \
	DECLARE_FUNCTION(execSteamServerLogOnAnonymous); \
	DECLARE_FUNCTION(execSteamServerLogOn); \
	DECLARE_FUNCTION(execSteamServerLogOff); \
	DECLARE_FUNCTION(execSteamServerSetServerSettings); \
	DECLARE_FUNCTION(execSteamServerGetSteamID); \
	DECLARE_FUNCTION(execSteamServerGetPublicIP); \
	DECLARE_FUNCTION(execSteamServerGetAuthSessionTicket); \
	DECLARE_FUNCTION(execSteamServerEndAuthSession); \
	DECLARE_FUNCTION(execSteamServerSetAdvertiseServerActive); \
	DECLARE_FUNCTION(execSteamServerComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execSteamServerClearAllKeyValues); \
	DECLARE_FUNCTION(execSteamServerCancelAuthTicket); \
	DECLARE_FUNCTION(execSteamServerSecure); \
	DECLARE_FUNCTION(execSteamServerLoggedOn); \
	DECLARE_FUNCTION(execSteamServerBeginAuthSession); \
	DECLARE_FUNCTION(execSteamServerAssociateWithClan); \
	DECLARE_FUNCTION(execSteamUninstallDLC); \
	DECLARE_FUNCTION(execSteamMarkContentCorrupt); \
	DECLARE_FUNCTION(execSteamInstallDLC); \
	DECLARE_FUNCTION(execSteamGetLaunchQueryParam); \
	DECLARE_FUNCTION(execSteamGetLaunchCommandLine); \
	DECLARE_FUNCTION(execSteamGetInstalledDepots); \
	DECLARE_FUNCTION(execSteamGetEarliestPurchase); \
	DECLARE_FUNCTION(execSteamGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execSteamGetDLCCount); \
	DECLARE_FUNCTION(execSteamGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execSteamGetCurrentBetaName); \
	DECLARE_FUNCTION(execSteamGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execSteamGetAppOwner); \
	DECLARE_FUNCTION(execSteamGetAppInstallDir); \
	DECLARE_FUNCTION(execSteamGetAppBuildId); \
	DECLARE_FUNCTION(execSteamIsVACBanned); \
	DECLARE_FUNCTION(execSteamIsTimedTrial); \
	DECLARE_FUNCTION(execSteamIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execSteamIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execSteamIsSubscribedApp); \
	DECLARE_FUNCTION(execSteamIsSubscribed); \
	DECLARE_FUNCTION(execSteamIsLowViolence); \
	DECLARE_FUNCTION(execSteamIsDlcInstalled); \
	DECLARE_FUNCTION(execSteamIsCybercafe); \
	DECLARE_FUNCTION(execSteamIsAppInstalled); \
	DECLARE_FUNCTION(execSteamGetDLCDataByIndex); \
	DECLARE_FUNCTION(execSteamClientShouldRestart); \
	DECLARE_FUNCTION(execSteamGetServerRealTime); \
	DECLARE_FUNCTION(execSteamSteamIdToAccountId); \
	DECLARE_FUNCTION(execSteamAccountIdToSteamId); \
	DECLARE_FUNCTION(execSteamAppIdToGameId); \
	DECLARE_FUNCTION(execSteamGameIdToAppId); \
	DECLARE_FUNCTION(execSteamShutdown); \
	DECLARE_FUNCTION(execSteamGetAppId); \
	DECLARE_FUNCTION(execSteamRunCallbacks); \
	DECLARE_FUNCTION(execSteamServerInitialize); \
	DECLARE_FUNCTION(execSteamClientInitialize); \
	DECLARE_FUNCTION(execIsSteamInitialized);


#define FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUToolkitSteamworksBPLibrary(); \
	friend struct Z_Construct_UClass_UToolkitSteamworksBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UToolkitSteamworksBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolkitSteamworks"), NO_API) \
	DECLARE_SERIALIZER(UToolkitSteamworksBPLibrary)


#define FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolkitSteamworksBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolkitSteamworksBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolkitSteamworksBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolkitSteamworksBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolkitSteamworksBPLibrary(UToolkitSteamworksBPLibrary&&); \
	UToolkitSteamworksBPLibrary(const UToolkitSteamworksBPLibrary&); \
public: \
	NO_API virtual ~UToolkitSteamworksBPLibrary();


#define FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_14_PROLOG
#define FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_RPC_WRAPPERS \
	FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_INCLASS \
	FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLKITSTEAMWORKS_API UClass* StaticClass<class UToolkitSteamworksBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MainProjectLincolnLog_Plugins_ToolkitSteamworks_Source_ToolkitSteamworks_Public_ToolkitSteamworksBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
