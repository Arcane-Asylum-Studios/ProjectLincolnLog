/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "SteamGameInstance.h"
#include "GameFramework/SaveGame.h"
#include "SteamRemoteStorageSaveGame.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FSteamFileReadAsyncCallback, UEResult, result, USteamRemoteStorageSaveGame*, instance);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamFileWriteAsyncCallback, UEResult, result);

UCLASS()
class TOOLKITSTEAMWORKS_API USteamRemoteStorageSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "SaveGame|SteamRemoteStorageSaveGame")
	bool SteamFileWrite(FString fileName);

	UFUNCTION(BlueprintCallable, Category = "SaveGame|SteamRemoteStorageSaveGame")
	void SteamFileWriteAsync(FString fileName, FSteamFileWriteAsyncCallback callback);

	UFUNCTION(BlueprintCallable, Category = "SaveGame|SteamRemoteStorageSaveGame")
	static USteamRemoteStorageSaveGame* SteamFileRead(FString fileName);

	UFUNCTION(BlueprintCallable, Category = "SaveGame|SteamRemoteStorageSaveGame")
	static void SteamFileReadAsync(FString fileName, FSteamFileReadAsyncCallback callback);
};

class RemoteStorageFileWriteAsyncCompleteLinker
{
public:
	RemoteStorageFileWriteAsyncCompleteLinker(FString name, USteamRemoteStorageSaveGame* instance, FSteamFileWriteAsyncCallback InCallback);

	void SteamCallback(RemoteStorageFileWriteAsyncComplete_t* Response, bool bIOError);

private:
	FSteamFileWriteAsyncCallback Callback;
	CCallResult<RemoteStorageFileWriteAsyncCompleteLinker, RemoteStorageFileWriteAsyncComplete_t> m_RemoteStorageFileWriteAsyncComplete_t;
};

class RemoteStorageFileReadAsyncCompleteLinker
{
public:
	RemoteStorageFileReadAsyncCompleteLinker(FString name, FSteamFileReadAsyncCallback InCallback);

	void SteamCallback(RemoteStorageFileReadAsyncComplete_t* Response, bool bIOError);

private:
	FSteamFileReadAsyncCallback Callback;
	TArray<uint8> InSaveData;
	CCallResult<RemoteStorageFileReadAsyncCompleteLinker, RemoteStorageFileReadAsyncComplete_t> m_RemoteStorageFileReadAsyncComplete_t;
};