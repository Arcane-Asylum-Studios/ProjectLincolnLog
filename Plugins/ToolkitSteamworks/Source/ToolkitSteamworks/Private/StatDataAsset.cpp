/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/


#include "StatDataAsset.h"

float UStatDataAsset::GetFloatValue()
{
	STEAM_CLIENT(0.0f);

	float value;
	if (SteamUserStats()->GetStat(StringCast<ANSICHAR>(*ApiName).Get(), &value))
		return value;
	else
		return 0.0f;
}

int32 UStatDataAsset::GetIntValue()
{
	STEAM_CLIENT(0);

	int32 value;
	if (SteamUserStats()->GetStat(StringCast<ANSICHAR>(*ApiName).Get(), &value))
		return value;
	else
		return 0;
}

float UStatDataAsset::GetFloatValueForUser(int64 user)
{
	STEAM_CLIENT(0.0f);

	float value;
	CSteamID steamId = INT64_TO_STEAMID(user);
	if (SteamUserStats()->GetUserStat(steamId, StringCast<ANSICHAR>(*ApiName).Get(), &value))
		return value;
	else
		return 0.0f;
}

int32 UStatDataAsset::GetIntValueForUser(int64 user)
{
	STEAM_CLIENT(0);

	int32 value;
	CSteamID steamId = INT64_TO_STEAMID(user);
	if (SteamUserStats()->GetUserStat(steamId, StringCast<ANSICHAR>(*ApiName).Get(), &value))
		return value;
	else
		return 0.0f;
}

float UStatDataAsset::ServerGetFloatValueForUser(int64 user)
{
	STEAM_SERVER(0.0f);

	float value;
	CSteamID steamId = INT64_TO_STEAMID(user);
	if (SteamGameServerStats()->GetUserStat(steamId, StringCast<ANSICHAR>(*ApiName).Get(), &value))
		return value;
	else
		return 0.0f;
}

int32 UStatDataAsset::ServerGetIntValueForUser(int64 user)
{
	STEAM_SERVER(0);

	int32 value;
	CSteamID steamId = INT64_TO_STEAMID(user);
	if (SteamGameServerStats()->GetUserStat(steamId, StringCast<ANSICHAR>(*ApiName).Get(), &value))
		return value;
	else
		return 0.0f;
}

bool UStatDataAsset::SetFloatValue(float value)
{
	STEAM_CLIENT(false);

	return SteamUserStats()->SetStat(StringCast<ANSICHAR>(*ApiName).Get(), value);
}

bool UStatDataAsset::SetIntValue(int32 value)
{
	STEAM_CLIENT(false);

	return SteamUserStats()->SetStat(StringCast<ANSICHAR>(*ApiName).Get(), value);
}

bool UStatDataAsset::SetFloatValueForUser(int64 user, float value)
{
	STEAM_SERVER(false);

	CSteamID steamId = INT64_TO_STEAMID(user);
	return SteamGameServerStats()->SetUserStat(steamId, StringCast<ANSICHAR>(*ApiName).Get(), value);
}

bool UStatDataAsset::SetIntValueForUser(int64 user, int32 value)
{
	STEAM_SERVER(false);

	CSteamID steamId = INT64_TO_STEAMID(user);
	return SteamGameServerStats()->SetUserStat(steamId, StringCast<ANSICHAR>(*ApiName).Get(), value);
}