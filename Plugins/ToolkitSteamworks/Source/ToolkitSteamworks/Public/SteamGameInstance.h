/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/CommandLine.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "Engine/GameInstance.h"
THIRD_PARTY_INCLUDES_START
#include <HeathenTools.h>
THIRD_PARTY_INCLUDES_END
#include "SteamGameInstance.generated.h"

/**********************************************
* Defines, common use macros
***********************************************/

DECLARE_DELEGATE_OneParam(SteamGameServerConnectionChangeDelegate, bool);

class FItemResultRequest
{
public:
	/// <summary>
	/// If this request is not for some other user then this flag tells us to clear the data assets and rebuild such as for a Get All
	/// </summary>
	bool clearAll = false;
	/// <summary>
	/// Only used when deserializing inventory results
	/// </summary>
	CSteamID userId;
	/// <summary>
	/// Callback to be executed when the results are finalized
	/// </summary>
	FItemResultsCallback callback;
	/// <summary>
	/// The list of property keys to read for on each item
	/// </summary>
	TArray<FString> properties;
};

//Forward delcare the InventoryItemDataAsset type
class UInventoryItemDataAsset;

UCLASS()
class TOOLKITSTEAMWORKS_API USteamGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Shutdown() override;
	virtual void Init() override;

	UFUNCTION(BlueprintCallable, Category = "Heathen's Toolkit|Steamworks")
	static USteamGameInstance* GetSteamGameInstance();

	UFUNCTION(BlueprintCallable, Category = "Steam Game Instance")
	FSteamworksInitializationResponse InitializeSteamAPI();

	UFUNCTION(BlueprintCallable, Category = "Steam Game Instance")
	void InitializeRelayNetworkAccess();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear Inventory Item Details", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Steam Game Instance")
	void ClearItemDetails();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update Inventory Item Details", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "Steam Game Instance")
	void UpdateItemDetails(TArray<FItemDetailWithProperties> Details);

	UPROPERTY(EditAnywhere, Category = "General")
	float callbackFrequency = 0.03333f;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Inventory Items", Keywords = "Heathen Toolkit Steamworks Inventory"), Category = "General")
	TArray<UInventoryItemDataAsset*> ItemDataAssets;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FUserStatsReceived SteamUserStatsReceived;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FUserStatsUnloaded SteamUserStatsUnloaded;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FUserStatsUnloaded SteamUserStatsStored;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FUserAchievementStored SteamUserAchievementStored;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FDlcInstalledEvent SteamDlcInstalled;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FSteamServerConnectFailureCallback SteamServerConnectFailure;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FSteamServersDisconnectedCallback SteamServersDisconnected;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FSteamServersConnectedCallback SteamServersConnected;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FGameConnectedFriendChatMsgCallback SteamFriendChatMsg;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FFriendRichPresenceUpdateCallback SteamFriendRichPresenceUpdate;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FPersonaStateChangeCallback SteamPersonaStateChange;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FGameRichPresenceJoinRequestedCallback SteamRichPresenceJoinRequested;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FGameLobbyJoinRequestedCallback SteamLobbyJoinRequested;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FGameOverlayActivatedCallback SteamGameOverlayActivated;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FGameOverlayActivatedCallbackLegacy SteamGameOverlayActivatedLegacy;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FSteamInventoryResultReadyCallback SteamInventoryResultReady;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FSteamInventoryDefinitionUpdateCallback SteamInventoryDefinitionUpdate;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FMicroTxnAuthorizationResponseCallback SteamMicroTxnAuthorizationResponse;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FFavoritesListAccountsUpdatedCallback SteamFavoritesListAccountsUpdated;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FFavoritesListChangedCallback SteamFavoritesListChanged;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FLobbyChatMsgCallback SteamLobbyChatMsg;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FLobbyChatUpdateCallback SteamLobbyChatUpdate;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FLobbyDataUpdateCallback SteamLobbyDataUpdate;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FLobbyEnterCallback SteamLobbyEnter;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FLobbyGameCreatedCallback SteamLobbyGameCreated;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks");
	FLobbyInviteCallback SteamLobbyInvite;

	UPROPERTY(BlueprintAssignable, Category = "Heathen's Toolkit|Steamworks")
	FGetTicketForWebApiResponseCallback SteamTicketForWebApiResponse;

	void LoadIcon(int handle, FString apiName, FIconLoadCallback callback);
	void GetAvatarBySteamId(CSteamID SteamId, FAvatarLoadCallback Callback);
	void LoadSteamAvatar(CSteamID SteamId);
	void CopySteamAvatar(int Handle, UTexture2D* AvatarTexture);

	TMap<FString, UTexture2D*> AchievementIcons;
	TMap<FString, FIconLoadCallback> AchievementIconRequests;
	TMap<uint64, UTexture2D*> Avatars;
	TMap<uint64, FAvatarLoadCallback> AvatarRequests;
	TMap<SteamInventoryResult_t, FItemResultRequest> InventoryRequests;

	SteamGameServerConnectionChangeDelegate SteamGameServerConnectionChanged;

private:
	static USteamGameInstance* pInstance;

	bool SelfInitalized;
	FTimerHandle SteamCallbackTimerHandle;

	STEAM_CALLBACK(USteamGameInstance, EventUserStatsReceived, UserStatsReceived_t);
	STEAM_CALLBACK(USteamGameInstance, EventUserStatsUnloaded, UserStatsUnloaded_t);
	STEAM_CALLBACK(USteamGameInstance, EventUserStatsStored, UserStatsStored_t);
	STEAM_CALLBACK(USteamGameInstance, EventUserAchievementStored, UserAchievementStored_t);
	STEAM_CALLBACK(USteamGameInstance, EventUserAchievementIconFetched, UserAchievementIconFetched_t);
	STEAM_CALLBACK(USteamGameInstance, EventDlcInstalled, DlcInstalled_t);
	STEAM_CALLBACK(USteamGameInstance, EventSteamServerConnectFailure, SteamServerConnectFailure_t);
	STEAM_CALLBACK(USteamGameInstance, EventSteamServersConnected, SteamServersConnected_t);
	STEAM_CALLBACK(USteamGameInstance, EventSteamServersDisconnected, SteamServersDisconnected_t);
	STEAM_CALLBACK(USteamGameInstance, EventGameConnectedFriendChatMsg, GameConnectedFriendChatMsg_t);
	STEAM_CALLBACK(USteamGameInstance, EventFriendRichPresenceUpdate, FriendRichPresenceUpdate_t);
	STEAM_CALLBACK(USteamGameInstance, EventPersonaStateChange, PersonaStateChange_t);
	STEAM_CALLBACK(USteamGameInstance, EventAvatarImageLoaded, AvatarImageLoaded_t);
	STEAM_CALLBACK(USteamGameInstance, EventGameRichPresenceJoinRequested, GameRichPresenceJoinRequested_t);
	STEAM_CALLBACK(USteamGameInstance, EventGameLobbyJoinRequested, GameLobbyJoinRequested_t);
	STEAM_CALLBACK(USteamGameInstance, EventGameOverlayActivated, GameOverlayActivated_t);
	STEAM_CALLBACK(USteamGameInstance, EventSteamInventoryResultReady_t, SteamInventoryResultReady_t);
	STEAM_CALLBACK(USteamGameInstance, EventSteamInventoryDefinitionUpdate_t, SteamInventoryDefinitionUpdate_t);
	STEAM_CALLBACK(USteamGameInstance, EventMicroTxnAuthorizationResponse_t, MicroTxnAuthorizationResponse_t);
	STEAM_CALLBACK(USteamGameInstance, EventFavoritesListAccountsUpdated, FavoritesListAccountsUpdated_t);
	STEAM_CALLBACK(USteamGameInstance, EventFavoritesListChanged, FavoritesListChanged_t);
	STEAM_CALLBACK(USteamGameInstance, EventLobbyChatMsg, LobbyChatMsg_t);
	STEAM_CALLBACK(USteamGameInstance, EventLobbyChatUpdate, LobbyChatUpdate_t);
	STEAM_CALLBACK(USteamGameInstance, EventLobbyDataUpdate, LobbyDataUpdate_t);
	STEAM_CALLBACK(USteamGameInstance, EventLobbyEnter, LobbyEnter_t);
	STEAM_CALLBACK(USteamGameInstance, EventLobbyGameCreated, LobbyGameCreated_t);
	STEAM_CALLBACK(USteamGameInstance, EventLobbyInvite, LobbyInvite_t);

#if STEAM_MAJOR > 1 || (STEAM_MAJOR == 1 && STEAM_MINOR >= 57)
	STEAM_CALLBACK(USteamGameInstance, EventGetTicketForWebApiResponse, GetTicketForWebApiResponse_t);
#endif

	//STEAM_GAMESERVER_CALLBACK
	STEAM_GAMESERVER_CALLBACK(USteamGameInstance, EventSteamGameServerConnectFailure, SteamServerConnectFailure_t);
	STEAM_GAMESERVER_CALLBACK(USteamGameInstance, EventSteamGameServersConnected, SteamServersConnected_t);
	STEAM_GAMESERVER_CALLBACK(USteamGameInstance, EventSteamGameServersDisconnected, SteamServersDisconnected_t);
};
