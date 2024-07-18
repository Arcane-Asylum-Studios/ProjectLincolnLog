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
#include "QuickMatchLobbyAsyncTask.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FQuickMatchTaskDelegate, int64, lobbyId, UEResult, CreateResult, UEChatRoomEnterResponse, EnterResponse);

UCLASS()
class TOOLKITSTEAMWORKS_API UQuickMatchLobbyAsyncTask : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FQuickMatchTaskDelegate CreatedNew;

	UPROPERTY(BlueprintAssignable)
	FQuickMatchTaskDelegate JoinedExisting;

	UPROPERTY(BlueprintAssignable)
	FQuickMatchTaskDelegate Failed;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Quick Match - Task", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
	static UQuickMatchLobbyAsyncTask* SteamQuickMatchLobby(UObject* WorldContextObject);

	void Activate() override;

private:
	UObject* WorldContextObject;
	CCallResult<UQuickMatchLobbyAsyncTask, LobbyCreated_t> m_LobbyCreate_t;
	CCallResult<UQuickMatchLobbyAsyncTask, LobbyEnter_t> m_LobbyEnter_t;
	CCallResult<UQuickMatchLobbyAsyncTask, LobbyMatchList_t> m_LobbyMatchList_t;

	void MatchCallback(LobbyMatchList_t* Response, bool bIOError);
	void CreateCallback(LobbyCreated_t* Response, bool bIOError);
	void EnterCallback(LobbyEnter_t* Response, bool bIOError);
};
