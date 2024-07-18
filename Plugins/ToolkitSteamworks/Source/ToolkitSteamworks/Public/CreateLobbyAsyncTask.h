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
#include "CreateLobbyAsyncTask.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateLobbyTaskDelegate, UEResult, Result, int64, LobbyID);


UCLASS()
class TOOLKITSTEAMWORKS_API UCreateLobbyAsyncTask : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
    UPROPERTY(BlueprintAssignable)
    FCreateLobbyTaskDelegate Completed;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Lobby - Task", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Heathen's Toolkit|Steamworks|Matchmaking")
    static UCreateLobbyAsyncTask* SteamCreateLobby(UObject* WorldContextObject, UELobbyType Type, int32 MaxMembers);

    void Activate() override;

private:
    CCallResult<UCreateLobbyAsyncTask, LobbyCreated_t> m_LobbyCreate_t;
    UObject* WorldContextObject;
    UELobbyType LobbyType;
    int32 MaxMembers; 
    
    void HandleCreateLobby(LobbyCreated_t* Response, bool bIOError);
};
