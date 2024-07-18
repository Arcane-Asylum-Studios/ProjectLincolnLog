/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "SteamGameInstance.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EnterLobbyAsyncTask.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEnterLobbyTaskDelegate, int64, lobbyId, bool, blocked, UEChatRoomEnterResponse, response);

UCLASS()
class TOOLKITSTEAMWORKS_API UEnterLobbyAsyncTask : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FEnterLobbyTaskDelegate Completed;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Join Lobby - Steam ID Task", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static UEnterLobbyAsyncTask* SteamEnterLobby(UObject* WorldContextObject, int64 LobbyId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Join Lobby - Hex ID Task", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static UEnterLobbyAsyncTask* SteamEnterLobbyHex(UObject* WorldContextObject, FString Hex);

	void Activate() override;

private:
	CCallResult<UEnterLobbyAsyncTask, LobbyEnter_t> m_LobbyEnter_t;
	UObject* WorldContextObject;
	CSteamID LobbyId;

	void SteamCallback(LobbyEnter_t* Response, bool bIOError);
};
