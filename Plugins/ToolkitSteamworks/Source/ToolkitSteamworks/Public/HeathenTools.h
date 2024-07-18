/**************************************************************************************
*                                                                                     *
* Copyright   2023-2024 by Heathen Engineering Limited, an Irish registered company   *
* # 556277, VAT IE3394133CH, contact Heathen via support@heathen.group                *
*                                                                                     *
***************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Sound/SoundWaveProcedural.h>
//#include <Engine.h>
#include <Engine/World.h>
#include <TimerManager.h>
THIRD_PARTY_INCLUDES_START
#include <steam/steam_api.h>
#include <steam/steam_gameserver.h>
THIRD_PARTY_INCLUDES_END
#include "HeathenTools.generated.h"

#define INT64_TO_STEAMID(int64Value) CSteamID(static_cast<uint64>(int64Value))
#define STEAMID_TO_INT64(steamID) static_cast<int64>(steamID.ConvertToUint64())
#define STEAM_CLIENT(returnValue) \
        if (!SteamUser()) \
        { \
            UE_LOG(LogTemp, Warning, TEXT("Steam API is not initialized or SteamGameInstance is not available")); \
            return returnValue; \
        } 
#define STEAM_CLIENT_INSTANCE(returnValue) \
        if (!SteamUser()) \
        { \
            UE_LOG(LogTemp, Warning, TEXT("Steam API is not initialized or SteamGameInstance is not available")); \
            return returnValue; \
        } \
		USteamGameInstance* SteamGameInstance = USteamGameInstance::GetSteamGameInstance(); \
        if (!SteamGameInstance) \
        { \
            UE_LOG(LogTemp, Warning, TEXT("SteamGameInstance is not available")); \
            return returnValue; \
        }
#define STEAM_SERVER(returnValue) \
        if (!SteamGameServer()) \
        { \
            UE_LOG(LogTemp, Warning, TEXT("Steam API is not initialized or SteamGameInstance is not available")); \
            return returnValue; \
        } 
#define STEAM_SERVER_INSTANCE(returnValue) \
        if (!SteamGameServer()) \
        { \
            UE_LOG(LogTemp, Warning, TEXT("Steam API is not initialized or SteamGameInstance is not available")); \
            return returnValue; \
        } \
		USteamGameInstance* SteamGameInstance = USteamGameInstance::GetSteamGameInstance(); \
        if (!SteamGameInstance) \
        { \
            UE_LOG(LogTemp, Warning, TEXT("SteamGameInstance is not available")); \
            return returnValue; \
        }
#define STEAMWORKS_ICON_SIZE 256
#define STEAMWORKS_ICON_BYTE_SIZE STEAMWORKS_ICON_SIZE * STEAMWORKS_ICON_SIZE * 4
#define STEAMWORKS_AVATAR_SIZE 184
#define STEAMWORKS_AVATAR_BYTE_SIZE STEAMWORKS_AVATAR_SIZE * STEAMWORKS_AVATAR_SIZE * 4

/************************************************
* Utilities few stubborn concepts for Steamworks
* that require a bit of extra handling and tooling
*************************************************/

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UESteamCurrencyCode : uint8
{
    Unknown UMETA(DisplayName = "Unknown"),
    AED UMETA(DisplayName = "AED"),
    ARS UMETA(DisplayName = "ARS"),
    AUD UMETA(DisplayName = "AUD"),
    BRL UMETA(DisplayName = "BRL"),
    CAD UMETA(DisplayName = "CAD"),
    CHF UMETA(DisplayName = "CHF"),
    CLP UMETA(DisplayName = "CLP"),
    CNY UMETA(DisplayName = "CNY"),
    COP UMETA(DisplayName = "COP"),
    CRC UMETA(DisplayName = "CRC"),
    EUR UMETA(DisplayName = "EUR"),
    GBP UMETA(DisplayName = "GBP"),
    HKD UMETA(DisplayName = "HKD"),
    ILS UMETA(DisplayName = "ILS"),
    IDR UMETA(DisplayName = "IDR"),
    INR UMETA(DisplayName = "INR"),
    JPY UMETA(DisplayName = "JPY"),
    KRW UMETA(DisplayName = "KRW"),
    KWD UMETA(DisplayName = "KWD"),
    KZT UMETA(DisplayName = "KZT"),
    MXN UMETA(DisplayName = "MXN"),
    MYR UMETA(DisplayName = "MYR"),
    NOK UMETA(DisplayName = "NOK"),
    NZD UMETA(DisplayName = "NZD"),
    PEN UMETA(DisplayName = "PEN"),
    PHP UMETA(DisplayName = "PHP"),
    PLN UMETA(DisplayName = "PLN"),
    QAR UMETA(DisplayName = "QAR"),
    RUB UMETA(DisplayName = "RUB"),
    SAR UMETA(DisplayName = "SAR"),
    SGD UMETA(DisplayName = "SGD"),
    THB UMETA(DisplayName = "THB"),
    TRY UMETA(DisplayName = "TRY"),
    TWD UMETA(DisplayName = "TWD"),
    UAH UMETA(DisplayName = "UAH"),
    USD UMETA(DisplayName = "USD"),
    UYU UMETA(DisplayName = "UYU"),
    VND UMETA(DisplayName = "VND"),
    ZAR UMETA(DisplayName = "ZAR")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEFriendFlags : uint8
{
    EPC_None UMETA(DisplayName = "None"),
    EPC_Blocked UMETA(DisplayName = "Blocked"),
    EPC_FriendshipRequested UMETA(DisplayName = "Friendship Requested"),
    EPC_Immediate UMETA(DisplayName = "Immediate"),
    EPC_ClanMember UMETA(DisplayName = "Clan Member"),
    EPC_OnGameServer UMETA(DisplayName = "On Game Server"),
    EPC_RequestingFriendship UMETA(DisplayName = "Requesting Friendship"),
    EPC_RequestingInfo UMETA(DisplayName = "Requesting Info"),
    EPC_Ignored UMETA(DisplayName = "Ignored"),
    EPC_IgnoredFriend UMETA(DisplayName = "Ignored Friend"),
    EPC_ChatMember UMETA(DisplayName = "Chat Member"),
    EPC_All UMETA(DisplayName = "All")
};

class HeathenTools
{
public:
    static FString IPAddress(uint32 IPAddressValue)
    {
        // Ensure the input is a valid 32-bit unsigned integer
        if (IPAddressValue > 0xFFFFFFFF)
        {
            // Handle invalid input as needed (e.g., return an error string)
            return FString("Invalid input");
        }

        // Extract octets using bitwise shift and masking
        uint8 Octet1 = (IPAddressValue >> 24) & 0xFF;
        uint8 Octet2 = (IPAddressValue >> 16) & 0xFF;
        uint8 Octet3 = (IPAddressValue >> 8) & 0xFF;
        uint8 Octet4 = IPAddressValue & 0xFF;

        // Construct the IP address string
        FString IPAddressString = FString::Printf(TEXT("%u.%u.%u.%u"), Octet1, Octet2, Octet3, Octet4);

        return IPAddressString;
    }

    static uint32 IPAddress(FString IPAddressValue)
    {
        // Split the IP address into octets
        TArray<FString> OctetStrings;
        IPAddressValue.ParseIntoArray(OctetStrings, TEXT("."), true);

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

        return address;
    }

    static bool IsHexadecimal(const FString& InString)
    {
        // Check if the input string consists of only hexadecimal characters
        for (TCHAR Char : InString)
        {
            if (!FChar::IsHexDigit(Char))
            {
                return false;
            }
        }
        return true;
    }

    static FString GetSymbol(UESteamCurrencyCode code)
    {
        switch (code)
        {
        case UESteamCurrencyCode::Unknown: return FString();
        case UESteamCurrencyCode::AED: return FString("د.إ");
        case UESteamCurrencyCode::BRL: return FString("R$");
        case UESteamCurrencyCode::CHF: return FString("CHF");
        case UESteamCurrencyCode::CNY: return FString("¥");
        case UESteamCurrencyCode::CRC: return FString("₡");
        case UESteamCurrencyCode::EUR: return FString("€");
        case UESteamCurrencyCode::GBP: return FString("£");
        case UESteamCurrencyCode::ILS: return FString("₪");
        case UESteamCurrencyCode::IDR: return FString("Rp");
        case UESteamCurrencyCode::INR: return FString("₹");
        case UESteamCurrencyCode::JPY: return FString("¥");
        case UESteamCurrencyCode::KRW: return FString("₩");
        case UESteamCurrencyCode::KWD: return FString("د.ك");
        case UESteamCurrencyCode::KZT: return FString("лв");
        case UESteamCurrencyCode::MYR: return FString("RM");
        case UESteamCurrencyCode::NOK: return FString("kr");
        case UESteamCurrencyCode::PEN: return FString("S/.");
        case UESteamCurrencyCode::PHP: return FString("₱");
        case UESteamCurrencyCode::PLN: return FString("zł");
        case UESteamCurrencyCode::QAR: return FString("﷼");
        case UESteamCurrencyCode::RUB: return FString("₽");
        case UESteamCurrencyCode::SAR: return FString("﷼");
        case UESteamCurrencyCode::THB: return FString("฿");
        case UESteamCurrencyCode::TRY: return FString("₺");
        case UESteamCurrencyCode::TWD: return FString("NT$");
        case UESteamCurrencyCode::UAH: return FString("₴");
        case UESteamCurrencyCode::UYU: return FString("$U");
        case UESteamCurrencyCode::VND: return FString("₫");
        case UESteamCurrencyCode::ZAR: return FString("R");
        default: return FString("$");
        }
    }

    static UESteamCurrencyCode MapSteamCurrencyCodeToEnum(const char steamCurrencyCode[4])
    {
        // Convert char array to a string
        FString currencyCodeString(steamCurrencyCode);

        // Check if the string is a valid 3-letter currency code
        if (currencyCodeString.Len() != 3)
        {
            return UESteamCurrencyCode::Unknown; // Invalid code, return Unknown
        }

        // Convert to uppercase
        currencyCodeString.ToUpperInline();

        // Iterate through the enum values and compare with the given currency code
        for (int32 i = static_cast<int32>(UESteamCurrencyCode::AED); i <= static_cast<int32>(UESteamCurrencyCode::ZAR); ++i)
        {
            UESteamCurrencyCode enumValue = static_cast<UESteamCurrencyCode>(i);
            FString enumCodeString = UEnum::GetValueAsString(enumValue);

            if (currencyCodeString == enumCodeString)
            {
                return enumValue; // Match found, return the enum
            }
        }

        return UESteamCurrencyCode::Unknown; // No match found, return Unknown
    }

    static EFriendFlags Convert(UEFriendFlags flag)
    {
        switch (flag)
        {
        case UEFriendFlags::EPC_None:
            return EFriendFlags::k_EFriendFlagNone;
        case UEFriendFlags::EPC_Blocked:
            return EFriendFlags::k_EFriendFlagBlocked;
        case UEFriendFlags::EPC_FriendshipRequested:
            return EFriendFlags::k_EFriendFlagFriendshipRequested;
        case UEFriendFlags::EPC_Immediate:
            return EFriendFlags::k_EFriendFlagImmediate;
        case UEFriendFlags::EPC_ClanMember:
            return EFriendFlags::k_EFriendFlagClanMember;
        case UEFriendFlags::EPC_OnGameServer:
            return EFriendFlags::k_EFriendFlagOnGameServer;
        case UEFriendFlags::EPC_RequestingFriendship:
            return EFriendFlags::k_EFriendFlagRequestingFriendship;
        case UEFriendFlags::EPC_RequestingInfo:
            return EFriendFlags::k_EFriendFlagRequestingInfo;
        case UEFriendFlags::EPC_Ignored:
            return EFriendFlags::k_EFriendFlagIgnored;
        case UEFriendFlags::EPC_IgnoredFriend:
            return EFriendFlags::k_EFriendFlagIgnoredFriend;
        case UEFriendFlags::EPC_ChatMember:
            return EFriendFlags::k_EFriendFlagChatMember;
        case UEFriendFlags::EPC_All:
            return EFriendFlags::k_EFriendFlagAll;
        default:
            return EFriendFlags::k_EFriendFlagNone;
        }
    }
};

/**************************************************
* Common Enums these wrap Steamworks E types
***************************************************/

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEResult : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_OK = 1 UMETA(DisplayName = "OK"),
    EPC_Fail = 2 UMETA(DisplayName = "Fail"),
    EPC_NoConnection = 3 UMETA(DisplayName = "No Connection"),
    EPC_InvalidPassword = 5 UMETA(DisplayName = "Invalid Password"),
    EPC_LoggedInElsewhere = 6 UMETA(DisplayName = "Logged In Elsewhere"),
    EPC_InvalidProtocolVer = 7 UMETA(DisplayName = "Invalid Protocol Ver"),
    EPC_InvalidParam = 8 UMETA(DisplayName = "Invalid Param"),
    EPC_FileNotFound = 9 UMETA(DisplayName = "File Not Found"),
    EPC_Busy = 10 UMETA(DisplayName = "Busy"),
    EPC_InvalidState = 11 UMETA(DisplayName = "Invalid State"),
    EPC_InvalidName = 12 UMETA(DisplayName = "Invalid Name"),
    EPC_InvalidEmail = 13 UMETA(DisplayName = "Invalid Email"),
    EPC_DuplicateName = 14 UMETA(DisplayName = "Duplicate Name"),
    EPC_AccessDenied = 0xF UMETA(DisplayName = "Access Denied"),
    EPC_Timeout = 0x10 UMETA(DisplayName = "Timeout"),
    EPC_Banned = 17 UMETA(DisplayName = "Banned"),
    EPC_AccountNotFound = 18 UMETA(DisplayName = "Account Not Found"),
    EPC_InvalidSteamID = 19 UMETA(DisplayName = "Invalid Steam ID"),
    EPC_ServiceUnavailable = 20 UMETA(DisplayName = "Service Unavailable"),
    EPC_NotLoggedOn = 21 UMETA(DisplayName = "Not Logged On"),
    EPC_Pending = 22 UMETA(DisplayName = "Pending"),
    EPC_EncryptionFailure = 23 UMETA(DisplayName = "Encryption Failure"),
    EPC_InsufficientPrivilege = 24 UMETA(DisplayName = "Insufficient Privilege"),
    EPC_LimitExceeded = 25 UMETA(DisplayName = "Limit Exceeded"),
    EPC_Revoked = 26 UMETA(DisplayName = "Revoked"),
    EPC_Expired = 27 UMETA(DisplayName = "Expired"),
    EPC_AlreadyRedeemed = 28 UMETA(DisplayName = "Already Redeemed"),
    EPC_DuplicateRequest = 29 UMETA(DisplayName = "Duplicate Request"),
    EPC_AlreadyOwned = 30 UMETA(DisplayName = "Already Owned"),
    EPC_IPNotFound = 0x1F UMETA(DisplayName = "IP Not Found"),
    EPC_PersistFailed = 0x20 UMETA(DisplayName = "Persist Failed"),
    EPC_LockingFailed = 33 UMETA(DisplayName = "Locking Failed"),
    EPC_LogonSessionReplaced = 34 UMETA(DisplayName = "Logon Session Replaced"),
    EPC_ConnectFailed = 35 UMETA(DisplayName = "Connect Failed"),
    EPC_HandshakeFailed = 36 UMETA(DisplayName = "Handshake Failed"),
    EPC_IOFailure = 37 UMETA(DisplayName = "IO Failure"),
    EPC_RemoteDisconnect = 38 UMETA(DisplayName = "Remote Disconnect"),
    EPC_ShoppingCartNotFound = 39 UMETA(DisplayName = "Shopping Cart Not Found"),
    EPC_Blocked = 40 UMETA(DisplayName = "Blocked"),
    EPC_Ignored = 41 UMETA(DisplayName = "Ignored"),
    EPC_NoMatch = 42 UMETA(DisplayName = "No Match"),
    EPC_AccountDisabled = 43 UMETA(DisplayName = "Account Disabled"),
    EPC_ServiceReadOnly = 44 UMETA(DisplayName = "Service Read Only"),
    EPC_AccountNotFeatured = 45 UMETA(DisplayName = "Acount Not Featured"),
    EPC_AdministratorOK = 46 UMETA(DisplayName = "Administrator OK"),
    EPC_ContentVersion = 47 UMETA(DisplayName = "Content Version"),
    EPC_TryAnotherCM = 48 UMETA(DisplayName = "Try Another CM"),
    EPC_PasswordRequiredToKickSession = 49 UMETA(DisplayName = "Password Required to Kick Session"),
    EPC_AlreadyLoggedInElsewhere = 50 UMETA(DisplayName = "Already Logged in Elsewhere"),
    EPC_Suspended = 51 UMETA(DisplayName = "Suspended"),
    EPC_Cancelled = 52 UMETA(DisplayName = "Cancelled"),
    EPC_DataCorruption = 53 UMETA(DisplayName = "Data Corruption"),
    EPC_DiskFull = 54 UMETA(DisplayName = "Disk Full"),
    EPC_RemoteCallFailed = 55 UMETA(DisplayName = "Remote Call Failed"),
    EPC_PasswordUnset = 56 UMETA(DisplayName = "Password Unset"),
    EPC_ExternalAccountUnlinked = 57 UMETA(DisplayName = "External Account Unlinked"),
    EPC_PSNTicketInvalid = 58 UMETA(DisplayName = "PSN Ticket Invalid"),
    EPC_ExternalAccountAlreadyLinked = 59 UMETA(DisplayName = "External Account Already Linked"),
    EPC_RemoteFileConflict = 60 UMETA(DisplayName = "Remote File Conflict"),
    EPC_IllegalPassword = 61 UMETA(DisplayName = "Illegal Password"),
    EPC_SameAsPreviousValue = 62 UMETA(DisplayName = "Same as Previous Value"),
    EPC_AccountLogonDenied = 0x3F UMETA(DisplayName = "Acount Logon Denied"),
    EPC_CannotUseOldPassword = 0x40 UMETA(DisplayName = "Cannot Use Old Password"),
    EPC_InvalidLoginAuthCode = 65 UMETA(DisplayName = "Invalid Login Auth Code"),
    EPC_AccountLogonDeniedNoMail = 66 UMETA(DisplayName = "Account Logon Denied No Mail"),
    EPC_HardwareNotCapableOfIPT = 67 UMETA(DisplayName = "Hardware Not Capable of IPT"),
    EPC_IPTInitError = 68 UMETA(DisplayName = "IPT Init Error"),
    EPC_ParentalControlRestricted = 69 UMETA(DisplayName = "Parental Control Restricted"),
    EPC_FacebookQueryError = 70 UMETA(DisplayName = "Facebook Query Error"),
    EPC_ExpiredLoginAuthCode = 71 UMETA(DisplayName = "Expired Login Auth Code"),
    EPC_IPLoginRestrictionFailed = 72 UMETA(DisplayName = "IP Login Restriction Failed"),
    EPC_AccountLockedDown = 73 UMETA(DisplayName = "Account Locked Down"),
    EPC_AccountLogonDeniedVerifiedEmailRequired = 74 UMETA(DisplayName = "Account Logon Denied Verified Email Required"),
    EPC_NoMatchingURL = 75 UMETA(DisplayName = "No Matching URL"),
    EPC_BadResponse = 76 UMETA(DisplayName = "Bad Response"),
    EPC_RequirePasswordReEntry = 77 UMETA(DisplayName = "Require Password ReEntry"),
    EPC_ValueOutOfRange = 78 UMETA(DisplayName = "Value Out of Range"),
    EPC_UnexpectedError = 79 UMETA(DisplayName = "Unexpected Error"),
    EPC_Disabled = 80 UMETA(DisplayName = "Disabled"),
    EPC_InvalidCEGSubmission = 81 UMETA(DisplayName = "Invalid CEG Submission"),
    EPC_RestrictedDevice = 82 UMETA(DisplayName = "Restricted Device"),
    EPC_RegionLocked = 83 UMETA(DisplayName = "Region Locked"),
    EPC_RateLimitExceeded = 84 UMETA(DisplayName = "Rate Limit Exceeded"),
    EPC_AccountLoginDeniedNeedTwoFactor = 85 UMETA(DisplayName = "Account Login Denied Need Two Factor"),
    EPC_ItemDeleted = 86 UMETA(DisplayName = "Item Deleted"),
    EPC_AccountLoginDeniedThrottle = 87 UMETA(DisplayName = "Account Login Denied Throttle"),
    EPC_TwoFactorCodeMismatch = 88 UMETA(DisplayName = "Two Factor Code Mismatch"),
    EPC_TwoFactorActivationCodeMismatch = 89 UMETA(DisplayName = "Two Factor Activation Code Mismatch"),
    EPC_AccountAssociatedToMultiplePartners = 90 UMETA(DisplayName = "Account Associated to Multiple Partners"),
    EPC_NotModified = 91 UMETA(DisplayName = "Not Modified"),
    EPC_NoMobileDevice = 92 UMETA(DisplayName = "No Mobile Device"),
    EPC_TimeNotSynced = 93 UMETA(DisplayName = "Time Not Synced"),
    EPC_SmsCodeFailed = 94 UMETA(DisplayName = "SMS Code Field"),
    EPC_AccountLimitExceeded = 95 UMETA(DisplayName = "Account Limit Exceeded"),
    EPC_AccountActivityLimitExceeded = 96 UMETA(DisplayName = "Account Activity Limit Exceeded"),
    EPC_PhoneActivityLimitExceeded = 97 UMETA(DisplayName = "Phone Activity Limit Exceeded"),
    EPC_RefundToWallet = 98 UMETA(DisplayName = "Refund to Wallet"),
    EPC_EmailSendFailure = 99 UMETA(DisplayName = "Email Send Failure"),
    EPC_NotSettled = 100 UMETA(DisplayName = "Not Settled"),
    EPC_NeedCaptcha = 101 UMETA(DisplayName = "Need Captcha"),
    EPC_GSLTDenied = 102 UMETA(DisplayName = "GSLT Denied"),
    EPC_GSOwnerDenied = 103 UMETA(DisplayName = "GS Owner Denied"),
    EPC_InvalidItemType = 104 UMETA(DisplayName = "Invalid Item Type"),
    EPC_IPBanned = 105 UMETA(DisplayName = "IP Banned"),
    EPC_GSLTExpired = 106 UMETA(DisplayName = "GSLT Expired"),
    EPC_InsufficientFunds = 107 UMETA(DisplayName = "Insufficient Funds"),
    EPC_TooManyPending = 108 UMETA(DisplayName = "Too Many Pending"),
    EPC_NoSiteLicensesFound = 109 UMETA(DisplayName = "No Site Licenses Found"),
    EPC_WGNetworkSendExceeded = 110 UMETA(DisplayName = "WG NEtwork Send Exceeded"),
    EPC_AccountNotFriends = 111 UMETA(DisplayName = "Account Not Friends"),
    EPC_LimitedUserAccount = 112 UMETA(DisplayName = "Limited User Account"),
    EPC_CantRemoveItem = 113 UMETA(DisplayName = "Cant Remove Item"),
    EPC_AccountDeleted = 114 UMETA(DisplayName = "Account Deleted"),
    EPC_ExistingUserCancelledLicense = 115 UMETA(DisplayName = "Existing User Cancelled License"),
    EPC_CommunityCooldown = 116 UMETA(DisplayName = "Community Cooldown"),
    EPC_NoLauncherSpecified = 117 UMETA(DisplayName = "No Launcher Specified"),
    EPC_MustAgreeToSSA = 118 UMETA(DisplayName = "Must Agree To SSA"),
    EPC_LauncherMigrated = 119 UMETA(DisplayName = "Launcher Migrated"),
    EPC_SteamRealmMismatch = 120 UMETA(DisplayName = "Steam Realm Mismatch"),
    EPC_InvalidSignature = 121 UMETA(DisplayName = "Invalid Signature"),
    EPC_ParseFailure = 122 UMETA(DisplayName = "Parse Failure"),
    EPC_NoVerifiedPhone = 123 UMETA(DisplayName = "No Verified Phone"),
    EPC_InsufficientBattery = 124 UMETA(DisplayName = "Insufficient Battery"),
    EPC_ChargerRequired = 125 UMETA(DisplayName = "Charge Required"),
    EPC_CachedCredentialInvalid = 126 UMETA(DisplayName = "Cached Credential Invalid"),
    EPC_PhoneNumberIsVOIP = 0x7F UMETA(DisplayName = "Phone Number Is VOIP")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UELeaderboardDataRequest : uint8
{
    EPC_Global = 0 UMETA(DisplayName = "Global"),
    EPC_GlobalAroundUser = 1 UMETA(DisplayName = "Global Around User"),
    EPC_Friends = 2 UMETA(DisplayName = "Friends"),
    EPC_Users = 3 UMETA(DisplayName = "Users")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEAccountType : uint8
{
    EPC_Invalid = 0 UMETA(DisplayName = "Invalid"),
    EPC_Individual = 1 UMETA(DisplayName = "Individual (aka User)"),
    EPC_Multiseat = 2 UMETA(DisplayName = "Multiseat"),
    EPC_GameServer = 3 UMETA(DisplayName = "Game Server"),
    EPC_AnonGameServer = 4 UMETA(DisplayName = "Anon Game Server"),
    EPC_Pending = 5 UMETA(DisplayName = "Pending"),
    EPC_ContentServer = 6 UMETA(DisplayName = "Content Server"),
    EPC_Clan = 7 UMETA(DisplayName = "Clan (aka Group)"),
    EPC_Chat = 8 UMETA(DisplayName = "Chat (aka Lobby)"),
    EPC_ConsoleUser = 9 UMETA(DisplayName = "Console User (Not Used)"),
    EPC_AnonUser = 10 UMETA(DisplayName = "Anon User (Not Used)")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UELeaderboardSortMethod : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_MethodAscending = 1 UMETA(DisplayName = "Method Ascending"),
    EPC_MethodDescending = 2 UMETA(DisplayName = "Method Descending")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UELeaderboardDisplayType : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_Numeric = 1 UMETA(DisplayName = "Numeric"),
    EPC_TimeSeconds = 2 UMETA(DisplayName = "Time Seconds"),
    EPC_TimeMilliSeconds = 3 UMETA(DisplayName = "Time MilliSeconds")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEAuthSessionResponse : uint8
{
    EPC_OK = 0 UMETA(DisplayName = "OK"),
    EPC_UserNotConnectedToSteam = 1 UMETA(DisplayName = "User not Connected to Steam"),
    EPC_NoLicenseOrExpired = 2 UMETA(DisplayName = "No License or Expired"),
    EPC_VACBanned = 3 UMETA(DisplayName = "VAC Banned"),
    EPC_LoggedInElsewhere = 4 UMETA(DisplayName = "Logged In Elsewhere"),
    EPC_VACCheckTimedOut = 5 UMETA(DisplayName = "VAC Check TimedOut"),
    EPC_AuthTicketCanceled = 6 UMETA(DisplayName = "Auth Ticket Canceled"),
    EPC_AuthTicketInvalidAlreadyUsed = 7 UMETA(DisplayName = "Auth Ticket Invalid Already Used"),
    EPC_AuthTicketInvalid = 8 UMETA(DisplayName = "Auth Ticket Invalid"),
    EPC_PublisherIssuedBan = 9 UMETA(DisplayName = "Publisher Issued Ban")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEVoiceResult : uint8
{
    EPC_OK = 0 UMETA(DisplayName = "OK"),
    EPC_NotInitialized = 1 UMETA(DisplayName = "Not Initialized"),
    EPC_NotRecording = 2 UMETA(DisplayName = "Not Recording"),
    EPC_NoData = 3 UMETA(DisplayName = "No Data"),
    EPC_BufferTooSmall = 4 UMETA(DisplayName = "Buffer Too Small"),
    EPC_DataCorrupted = 5 UMETA(DisplayName = "Data Corrupted"),
    EPC_Restricted = 6 UMETA(DisplayName = "Restricted")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEUserHasLicenseForAppResult : uint8
{
    EPC_HasLicense = 0 UMETA(DisplayName = "Has License"),
    EPC_DoesNotHaveLicense = 1 UMETA(DisplayName = "Does Not Have License"),
    EPC_NoAuth = 2 UMETA(DisplayName = "No Auth")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UELobbyDistanceFilter : uint8
{
    EPC_Close = 0 UMETA(DisplayName = "Close"),
    EPC_Default = 1 UMETA(DisplayName = "Default"),
    EPC_Far = 2 UMETA(DisplayName = "Far"),
    EPC_Worldwide = 3 UMETA(DisplayName = "Worldwide")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UELobbyComparison : uint8
{
    EPC_EqualToOrLessThan UMETA(DisplayName = "Equal To or Less Than"),
    EPC_LessThan UMETA(DisplayName = "Less Than"),
    EPC_Equal UMETA(DisplayName = "Equal"),
    EPC_GreaterThan UMETA(DisplayName = "Greater Than"),
    EPC_EqualToOrGreaterThan UMETA(DisplayName = "Equal To or Greater Than"),
    EPC_NotEqual UMETA(DisplayName = "Not Equal"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UELobbyType : uint8
{
    EPC_Private = 0 UMETA(DisplayName = "Private"),
    EPC_FriendsOnly = 1 UMETA(DisplayName = "Friends Only"),
    EPC_Public = 2 UMETA(DisplayName = "Public"),
    EPC_Invisible = 3 UMETA(DisplayName = "Invisible")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEChatEntryType : uint8
{
    EPC_Invalid = 0 UMETA(DisplayName = "Invalid"),
    EPC_ChatMsg = 1 UMETA(DisplayName = "Chat Message"),
    EPC_Typing = 2 UMETA(DisplayName = "Type"),
    EPC_InviteGame = 3 UMETA(DisplayName = "Invite Game"),
    EPC_Emote = 4 UMETA(DisplayName = "Emote"),
    EPC_LeftConversation = 6 UMETA(DisplayName = "Left Conversation"),
    EPC_Entered = 7 UMETA(DisplayName = "Entered"),
    EPC_WasKicked = 8 UMETA(DisplayName = "Was Kicked"),
    EPC_WasBanned = 9 UMETA(DisplayName = "Was Banned"),
    EPC_Disconnected = 10 UMETA(DisplayName = "Disconnected"),
    EPC_HistoricalChat = 11 UMETA(DisplayName = "Historical Chat"),
    EPC_LinkBlocked = 14 UMETA(DisplayName = "Link Blocked")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEChatRoomEnterResponse : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_Success = 1 UMETA(DisplayName = "Success"),
    EPC_DoesntExist = 2 UMETA(DisplayName = "Doesnt Exist"),
    EPC_NotAllowed = 3 UMETA(DisplayName = "Not Allowed"),
    EPC_Full = 4 UMETA(DisplayName = "Full"),
    EPC_Error = 5 UMETA(DisplayName = "Error"),
    EPC_Banned = 6 UMETA(DisplayName = "Banned"),
    EPC_Limited = 7 UMETA(DisplayName = "Limited"),
    EPC_ClanDisabled = 8 UMETA(DisplayName = "Clan Disabled"),
    EPC_CommunityBan = 9 UMETA(DisplayName = "Community Ban"),
    EPC_MemberBlockedYou = 10 UMETA(DisplayName = "Member Blocked You"),
    EPC_YouBlockedMember = 11 UMETA(DisplayName = "You Blocked Member"),
    EPC_RatelimitExceeded = 15 UMETA(DisplayName = "Ratelimit Exceeded"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEChatMemberStateChange : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_Entered = 0x0001 UMETA(DisplayName = "Entered"),
    EPC_Left = 0x0002 UMETA(DisplayName = "Left"),
    EPC_Disconnected = 0x0004 UMETA(DisplayName = "Disconnected"),
    EPC_Kicked = 0x0008 UMETA(DisplayName = "Kicked"),
    EPC_Banned = 0x0010 UMETA(DisplayName = "Banned")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEPersonaChange : uint8
{
    EPC_None,
    EPC_Name UMETA(DisplayName = "Name"),
    EPC_Status UMETA(DisplayName = "Status"),
    EPC_Online UMETA(DisplayName = "Online"),
    EPC_Offline UMETA(DisplayName = "Offline"),
    EPC_GamePlayed UMETA(DisplayName = "Game Played"),
    EPC_GameServer UMETA(DisplayName = "Game Server"),
    EPC_Avatar UMETA(DisplayName = "Avatar"),
    EPC_JoinedSource UMETA(DisplayName = "Joined Source"),
    EPC_LeftSource UMETA(DisplayName = "Left Source"),
    EPC_RelationshipChanged UMETA(DisplayName = "Relationship Changed"),
    EPC_NameFirstSet UMETA(DisplayName = "Name First Set"),
    EPC_Broadcast UMETA(DisplayName = "Broadcast"),
    EPC_Nickname UMETA(DisplayName = "Nickname"),
    EPC_SteamLevel UMETA(DisplayName = "Steam Level"),
    EPC_RichPresence UMETA(DisplayName = "Rich Presence")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks", meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class UEUserRestrition : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_Unknown = 1 UMETA(DisplayName = "Unknown"),
    EPC_AnyChat = 2 UMETA(DisplayName = "Any Chat"),
    EPC_VoiceChat = 4 UMETA(DisplayName = "Voice Chat"),
    EPC_GroupChat = 8 UMETA(DisplayName = "Group Chat"),
    EPC_Rating = 16 UMETA(DisplayName = "Rating"),
    EPC_GameInvites = 32 UMETA(DisplayName = "Game Invites"),
    EPC_Trading = 64 UMETA(DisplayName = "Trading"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEPersonaState : uint8
{
    EPC_Offline UMETA(DisplayName = "Offline"),
    EPC_Online UMETA(DisplayName = "Online"),
    EPC_Busy UMETA(DisplayName = "Busy"),
    EPC_Away UMETA(DisplayName = "Away"),
    EPC_Snooze UMETA(DisplayName = "Snooze"),
    EPC_LookingToTrade UMETA(DisplayName = "Looking to Trade"),
    EPC_LookingToPlay UMETA(DisplayName = "Looking to Play"),
    EPC_Invisible UMETA(DisplayName = "Invisible"),
    EPC_Max UMETA(DisplayName = "Max")
};

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true", BitmaskEnum = "/Script/ToolkitSteamworks.UESteamItemFlags"), Category = "Heathen's Toolkit|Steamworks")
enum class UESteamItemFlags : uint8
{
    EPC_None UMETA(DisplayName = "None"),
    EPC_NoTrade UMETA(DisplayName = "No Trade"),
    EPC_Removed UMETA(DisplayName = "Removed"),
    EPC_Consumed UMETA(DisplayName = "Consumed")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEBeginAuthSessionResult : uint8
{
    EPC_Ok UMETA(DisplayName = "Ok"),
    EPC_InvalidTicket UMETA(DisplayName = "Invalid Ticket"),
    EPC_DuplicateRequest UMETA(DisplayName = "Duplicate Request"),
    EPC_InvalidVersion UMETA(DisplayName = "Invalid Version"),
    EPC_GameMismatch UMETA(DisplayName = "Game Mismatch"),
    EPC_ExpiredTicket UMETA(DisplayName = "Expired Ticket")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEServerMode : uint8
{
    EPC_Invalid = 0 UMETA(DisplayName = "Invalid - DO NOT USE THIS VALUE"),
    EPC_NoAuthentication = 1 UMETA(DisplayName = "No Authentication"),
    EPC_Authentication = 2 UMETA(DisplayName = "Authentication"),
    EPC_AuthenticationAndSecure = 3 UMETA(DisplayName = "Authentication & Secure")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UERemoteStoragePlatform : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_Windows = (1 << 0) UMETA(DisplayName = "Windows"),
    EPC_OSX = (1 << 1) UMETA(DisplayName = "OSX"),
    EPC_PS3 = (1 << 2) UMETA(DisplayName = "PS3 (Depricated)"),
    EPC_Linux = (1 << 3) UMETA(DisplayName = "Linux"),
    EPC_Reserved = (1 << 4) UMETA(DisplayName = "Reserved"),
    EPC_All = 255 UMETA(DisplayName = "All")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEItemPreviewType : uint8
{
    EPC_Image = 0 UMETA(DisplayName = "Image"),
    //EPC_YouTubeVideo = 1 UMETA(DisplayName = "YouTube Video"),
    //EPC_Sketchfab = 2 UMETA(DisplayName = "Sketchfab"),
    EPC_EnvironmentMap_HorizontalCross = 3 UMETA(DisplayName = "Environment Map (Cross)"),
    EPC_EnvironmentMap_EnvironmentMap_LatLong = 4 UMETA(DisplayName = "Environment Map (Lat/Long)")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEWorkshopFileType : uint8
{
    EPC_Community = 0 UMETA(DisplayName = "Community"),
    EPC_Microtransaction = 1 UMETA(DisplayName = "Microtransaction"),
    EPC_Collection = 2 UMETA(DisplayName = "Collection"),
    EPC_Art = 3 UMETA(DisplayName = "Art"),
    EPC_Video = 4 UMETA(DisplayName = "Video"),
    EPC_Screenshot = 5 UMETA(DisplayName = "Screenshot"),
    EPC_WebGuide = 9 UMETA(DisplayName = "Web Guide"),
    EPC_IntegrationGuide = 10 UMETA(DisplayName = "Integration Guide"),
    EPC_Merch = 11 UMETA(DisplayName = "Merchandise"),
    EPC_Bindings = 12 UMETA(DisplayName = "Controller Bindings"),
    EPC_SteamVideo = 14 UMETA(DisplayName = "Steam Video"),
    EPC_ManagedItem = 0 UMETA(DisplayName = "Game Managed Item"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEOverlayCorner : uint8
{
    EPC_TL UMETA(DisplayName = "Top Left"),
    EPC_TR UMETA(DisplayName = "Top Right"),
    EPC_BL UMETA(DisplayName = "Bottom Left"),
    EPC_BR UMETA(DisplayName = "Bottom Right")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEOverlayDialog : uint8
{
    EPC_Friends UMETA(DisplayName = "Friends"),
    EPC_Community UMETA(DisplayName = "Community"),
    EPC_Players UMETA(DisplayName = "Players"),
    EPC_Settings UMETA(DisplayName = "Settings"),
    EPC_OfficialGameGroup UMETA(DisplayName = "Official Game Group"),
    EPC_Stats UMETA(DisplayName = "Stats"),
    EPC_Achievements UMETA(DisplayName = "Achievements")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEOverlayUserDialog : uint8
{
    EPC_SteamId UMETA(DisplayName = "Steam ID"),
    EPC_Chat UMETA(DisplayName = "Chat"),
    EPC_JoinTrade UMETA(DisplayName = "Join Trade"),
    EPC_Stats UMETA(DisplayName = "Stats"),
    EPC_Achievements UMETA(DisplayName = "Achievements"),
    EPC_FriendAdd UMETA(DisplayName = "Friend Add"),
    EPC_FriendRemove UMETA(DisplayName = "Friend Remove"),
    EPC_FriendRequestAccept UMETA(DisplayName = "Friend Request Accept"),
    EPC_FriendRequestIgnore UMETA(DisplayName = "Friend Request Ignore")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEUGCQuery : uint8
{
    EPC_RankedByVote = 0 UMETA(DisplayName = "Rank by Vote"),
    EPC_RankedByPublicationDate = 1 UMETA(DisplayName = "Rank by Publication Date"),
    EPC_AcceptedForGameRankedByAcceptanceDate = 2 UMETA(DisplayName = "Accepted for Game Ranked by Acceptance Date"),
    EPC_RankedByTrend = 3 UMETA(DisplayName = "Ranked by Trend"),
    EPC_FavoritedByFriendsRankedByPublicationDate = 4 UMETA(DisplayName = "Favorited by Friends Ranked by Publication Date"),
    EPC_CreatedByFriendsRankedByPublicationDate = 5 UMETA(DisplayName = "Created by Friends Ranked by Publication Date"),
    EPC_RankedByNumTimesReported = 6 UMETA(DisplayName = "Ranked by Number of Times Reported"),
    EPC_CreatedByFollowedUsersRankedByPublicationDate = 7 UMETA(DisplayName = "Created by Followed Users Ranked by Publication Date"),
    EPC_NotYetRated = 8 UMETA(DisplayName = "Not Yet Rated"),
    EPC_RankedByTotalVotesAsc = 9 UMETA(DisplayName = "Ranked by Total Votes Ascending"),
    EPC_RankedByVotesUp = 10 UMETA(DisplayName = "Ranked by Vote Ups"),
    EPC_RankedByTextSearch = 11 UMETA(DisplayName = "Ranked by Text Search"),
    EPC_RankedByTotalUniqueSubscriptions = 12 UMETA(DisplayName = "Ranked by Total Unique Subscriptions"),
    EPC_RankedByPlaytimeTrend = 13 UMETA(DisplayName = "Ranked by Playtime Trend"),
    EPC_RankedByTotalPlaytime = 14 UMETA(DisplayName = "Ranked by Total Playtime"),
    EPC_RankedByAveragePlaytimeTrend = 15 UMETA(DisplayName = "Ranked by Average Playtime Trend"),
    EPC_RankedByLifetimeAveragePlaytime = 16 UMETA(DisplayName = "Ranked by Lifetime Average Playtime"),
    EPC_RankedByPlaytimeSessionsTrend = 17 UMETA(DisplayName = "Ranked by Playtime Sessions Trend"),
    EPC_RankedByLifetimePlaytimeSessions = 18 UMETA(DisplayName = "Ranked by Lifetime Playtime Sessions"),
    EPC_RankedByLastUpdatedDate = 19 UMETA(DisplayName = "Ranked by Last Updated Date"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEUGCMatchingUGCType : uint8
{
    EPC_Items = 0 UMETA(DisplayName = "Items"),		// both mtx items and ready-to-use items
    EPC_Items_Mtx = 1 UMETA(DisplayName = "Items Microtransaction"),
    EPC_Items_ReadyToUse = 2 UMETA(DisplayName = "Items Ready to Use"),
    EPC_Collections = 3 UMETA(DisplayName = "Collections"),
    EPC_Artwork = 4 UMETA(DisplayName = "Art"),
    EPC_Videos = 5 UMETA(DisplayName = "Videos"),
    EPC_Screenshots = 6 UMETA(DisplayName = "Screenshots"),
    EPC_AllGuides = 7 UMETA(DisplayName = "All Guides"),		// both web guides and integrated guides
    EPC_WebGuides = 8 UMETA(DisplayName = "Web Guides"),
    EPC_IntegratedGuides = 9 UMETA(DisplayName = "Integrated Guides"),
    EPC_UsableInGame = 10 UMETA(DisplayName = "Usable In Game"),		// ready-to-use items and integrated guides
    EPC_ControllerBindings = 11 UMETA(DisplayName = "Controller Bindings"),
    EPC_GameManagedItems = 12 UMETA(DisplayName = "Game Managed Items"),		// game managed items (not managed by users)
    EPC_All = 255 UMETA(DisplayName = "All"),		// @note: will only be valid for CreateQueryUserUGCRequest requests
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEUserUGCList : uint8
{
    EPC_Published UMETA(DisplayName = "Published"),
    EPC_VotedOn UMETA(DisplayName = "Voted On"),
    EPC_VotedUp UMETA(DisplayName = "Voted Up"),
    EPC_VotedDown UMETA(DisplayName = "Voted Down"),
    EPC_WillVoteLater UMETA(DisplayName = "Will Vote Later"),
    EPC_Favorited UMETA(DisplayName = "Favorited"),
    EPC_Subscribed UMETA(DisplayName = "Subscribed"),
    EPC_UsedOrPlayed UMETA(DisplayName = "Used or Played"),
    EPC_Followed UMETA(DisplayName = "Followed"),
}; //EUserUGCListSortOrder

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEUserUGCListSortOrder : uint8
{
    EPC_CreationOrderDesc UMETA(DisplayName = "Creation Order Descending"),
    EPC_CreationOrderAsc UMETA(DisplayName = "Creation Order Ascending"),
    EPC_TitleAsc UMETA(DisplayName = "Title Ascending"),
    EPC_LastUpdatedDesc UMETA(DisplayName = "Last Update Descending"),
    EPC_SubscriptionDateDesc UMETA(DisplayName = "Subscription Date Descending"),
    EPC_VoteScoreDesc UMETA(DisplayName = "Vote Score Descending"),
    EPC_ForModeration UMETA(DisplayName = "For Moderation"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEItemState : uint8
{
    EPC_None = 0 UMETA(DisplayName = "None"),
    EPC_Subscribed = 1 UMETA(DisplayName = "Subscribed"),
    EPC_LegacyItem = 2 UMETA(DisplayName = "Legacy Item"),
    EPC_Installed = 4 UMETA(DisplayName = "Installed"),
    EPC_NeedsUpdate = 8 UMETA(DisplayName = "Needs Update"),
    EPC_Downloading = 16 UMETA(DisplayName = "Downloading"),
    EPC_DownloadPending = 32 UMETA(DisplayName = "Download Pending"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEItemUpdateStatus : uint8
{
    EPC_Invalid = 0 UMETA(DisplayName = "Invalid"),
    EPC_PreparingConfig = 1 UMETA(DisplayName = "Preparing Config"),
    EPC_PreparingContent = 2 UMETA(DisplayName = "Preparing Content"),
    EPC_UploadingContent = 3 UMETA(DisplayName = "Uploading Content"),
    EPC_UploadingPreviewFile = 4 UMETA(DisplayName = "Uploading Preview File"),
    EPC_CommittingChanges = 5 UMETA(DisplayName = "Committing Changes")
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEUGCContentDescriptorID : uint8
{
    EPC_Default = 0 UMETA(DisplayName = "NOT USED"),
    EPC_NudityOrSexualContent = 1 UMETA(DisplayName = "Nudity or Sexual Content"),
    EPC_FrequentViolenceOrGore = 2 UMETA(DisplayName = "Frequent Violence or Gore"),
    EPC_AdultOnlySexualContent = 3 UMETA(DisplayName = "Adult Only Sexual Content"),
    EPC_GratuitousSexualContent = 4 UMETA(DisplayName = "Gratuitous Sexual Content"),
    EPC_AnyMatureContent = 5 UMETA(DisplayName = "Any Mature Content"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UERemoteStoragePublishedFileVisibility : uint8
{
    EPC_Public = 0 UMETA(DisplayName = "Public"),
    EPC_FriendsOnly = 1 UMETA(DisplayName = "Friends Only"),
    EPC_Private = 2 UMETA(DisplayName = "Private"),
    EPC_Unlisted = 3 UMETA(DisplayName = "Unlisted"),
};

UENUM(BlueprintType, Category = "Heathen's Toolkit|Steamworks")
enum class UEItemStatistic : uint8
{
    EPC_NumSubscriptions = 0 UMETA(DisplayName = "Number of Subscriptions"),
    EPC_NumFavorites = 1 UMETA(DisplayName = "Number of Favorites"),
    EPC_NumFollowers = 2 UMETA(DisplayName = "Number of Followers"),
    EPC_NumUniqueSubscriptions = 3 UMETA(DisplayName = "Number of Subscriptions"),
    EPC_NumUniqueFav = 4 UMETA(DisplayName = "Number of Unique Favorites"),
    EPC_NumUniqueFollowers = 5 UMETA(DisplayName = "Number of Unique Followers"),
    EPC_NumUniqueWebViews = 6 UMETA(DisplayName = "Number of Unique Website Views"),
    EPC_ReportScore = 7 UMETA(DisplayName = "Report Score"),
    EPC_NumSecondsPlayed = 8 UMETA(DisplayName = "Number of Seconds Played"),
    EPC_NumPlaytimeSessions = 9 UMETA(DisplayName = "Number of Sessions"),
    EPC_NumComments = 10 UMETA(DisplayName = "Number of Comments"),
    EPC_NumTPSecondsPlayed = 11 UMETA(DisplayName = "Number of Seconds Played (Time Period)"),
    EPC_NumTPSessions = 12 UMETA(DisplayName = "Number of Sessions (Time Period)"),
};

/*************************************************
* Common structs
* These handle blueprint bindable return types
**************************************************/

USTRUCT(BlueprintType)
struct FSteamworksInitializationResponse
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bShouldRestart = false;
};

USTRUCT(BlueprintType)
struct FUserAchievementStatus
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bAchieved = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime UnlockTime;
};

USTRUCT(BlueprintType)
struct FGlobalAchievementStatus
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString ApiName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bAchieved = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        float Percent = false;
};

USTRUCT(BlueprintType)
struct FIntStat
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bValid = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Value = 0;
};

USTRUCT(BlueprintType)
struct FFloatStat
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bValid = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        float Value = 0.0f;
};

USTRUCT(BlueprintType)
struct FKeyValuePair
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Key;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Value;
};

USTRUCT(BlueprintType)
struct FAuthTicketData
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 AuthTicketHandle = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<uint8> Ticket;
};

USTRUCT(BlueprintType)
struct FDLCData
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 AppId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bAvailable = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Name;
};

USTRUCT(BlueprintType)
struct FTimeTrial
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bIsTrial = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 PlayedSeconds = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 AllowedSeconds = 0;
};

USTRUCT(BlueprintType)
struct FServerAchievementStatus
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bAchieved = false;
};

USTRUCT(BlueprintType)
struct FServerStatIntValue
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Value = 0;
};

USTRUCT(BlueprintType)
struct FServerStatFloatValue
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        float Value = 0.0f;
};

USTRUCT(BlueprintType)
struct FMyGameInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bInGame = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString IpAddress;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 GamePort = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 QueryPort = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 GameId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 LobbyId = 0;
};

USTRUCT(BlueprintType)
struct FItemDetailWithProperties
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 InstanceId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 DefinitionId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Quantity = 0;

    UPROPERTY(EditAnywhere, meta = (Bitmask, BitmaskEnum = "/Script/ToolkitSteamworks.UESteamItemFlags"), BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Flags = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<FKeyValuePair> Properties;
};

USTRUCT(BlueprintType)
struct FItemDetail
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 InstanceId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 DefinitionId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Quantity = 0;

    UPROPERTY(EditAnywhere, meta = (Bitmask, BitmaskEnum = "/Script/ToolkitSteamworks.UESteamItemFlags"), BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Flags = 0;
};

USTRUCT(BlueprintType)
struct FItemPrice
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 CurrentPrice = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 BasePrice = 0;
};

USTRUCT(BlueprintType)
struct FHexParseResults
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 SteamId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;
};

USTRUCT(BlueprintType)
struct FItemWithPrice
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ItemDef = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 CurrentPrice = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 BasePrice = 0;
};

USTRUCT(BlueprintType)
struct FInventoryResult
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ResultHandle = 0;
};

USTRUCT(BlueprintType)
struct FItemCount
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 InstanceId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Quantity = 0;
};

USTRUCT(BlueprintType)
struct FItemDefCount
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ItemDef = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Quantity = 0;
};

USTRUCT(BlueprintType)
struct FFavoriteGame
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 AppId = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Ip;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ConnectionPort = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 QueryPort = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bHistory = false;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime LastPlayedOnServer;
};

USTRUCT(BlueprintType)
struct FChatEntry
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<uint8> Data;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString String;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 UserId = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEChatEntryType Type = UEChatEntryType::EPC_ChatMsg;
};

USTRUCT(BlueprintType)
struct FLobbyData
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Key;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Value;
};

USTRUCT(BlueprintType)
struct FLobbyGameServer
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bIsSet = false;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Ip;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Port = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 GameServerId = 0;
};

USTRUCT(BlueprintType)
struct FGameServerItemWrapper
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Address;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 QueryPort = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ConnectionPort = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Ping = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bHadSuccessfulResponse = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bDoNotRefresh = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString GameDirectory;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Map;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString GameDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 AppID = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Players = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 MaxPlayers = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 BotPlayers = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bPassword = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSecure = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime TimeLastPlayed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ServerVersion = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 ServerId = 0;
};

USTRUCT(BlueprintType)
struct FGameServerPlayerDetailsWrapper
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Score = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        float TimePlayed = 0.0f;
};

USTRUCT(BlueprintType)
struct FRemoteStorageFileInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString FileName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 FileSize = 0;
};

USTRUCT(BlueprintType)
struct FRemoteStorageQuota
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 TotalCapacity = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 Available = 0;
};

USTRUCT(BlueprintType)
struct FRemoteStorageUGCDownloadProgress
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Downloaded = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Expected = 0;
};

USTRUCT(BlueprintType)
struct FRemoteStorageUGCDetails
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 AppId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString FileName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 FileSize = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 OwnerId = 0;
};

USTRUCT(BlueprintType)
struct FUSGCItemDownloadInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bRequestResult = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 Downloaded = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 Total = 0;
};

USTRUCT(BlueprintType)
struct FSteamInstallationInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bRequestResult = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 DiskSize = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Path;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime Timestamp;
};

USTRUCT(BlueprintType)
struct FUGCItemUpdateProgress
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEItemUpdateStatus status = UEItemUpdateStatus::EPC_Invalid;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 Processed = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 Total = 0;
};

USTRUCT(BlueprintType)
struct FUGCAdditionalPreviewResult
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bRequestResult = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEItemPreviewType Type = UEItemPreviewType::EPC_Image;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString UrlOrVideoId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString OriginalFileName;
};

USTRUCT(BlueprintType)
struct FUGCQueryUGCChildrenResult
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bRequestStatus = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<int64> FileIDs;
};

USTRUCT(BlueprintType)
struct FSteamUGCDetails
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 FileId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEResult Result = UEResult::EPC_Fail;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEWorkshopFileType FileType = UEWorkshopFileType::EPC_Community;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 CreatorAppId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 ConsumerAppId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Title;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 OwnerId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime TimeCreated;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime TimeUpdated;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime TimeAddedToUserList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UERemoteStoragePublishedFileVisibility Visibility = UERemoteStoragePublishedFileVisibility::EPC_Private;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bBanned = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bAcceptedForUse = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bTagsTruncated = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<FString> Tags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 FileHandle = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 PreviewFileHandle = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString FileName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 FileSize = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 PreviewFileSize = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Url;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 VotesUp = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 VotesDown = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        float Score = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 NumberOfChildren = 0;
};

USTRUCT(BlueprintType)
struct FDecompressVoiceResult
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bSuccess = false;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEVoiceResult Result = UEVoiceResult::EPC_NoData;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<uint8> DecompressedVoiceData;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        USoundWaveProcedural* ProceduralSoundWave = nullptr;
};

USTRUCT(BlueprintType)
struct FVoiceResult
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEVoiceResult Result = UEVoiceResult::EPC_NoData;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<uint8> VoiceData;
};

USTRUCT(BlueprintType)
struct FVoiceAvailableResult
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        UEVoiceResult Result = UEVoiceResult::EPC_NoData;

    UPROPERTY(BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 VoiceData = 0;
};

/*****************************************
* Delegates
******************************************/

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUserStatsReceived, int64, gameId, UEResult, result, int64, userId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUserStatsUnloaded, int64, userId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserStatsStored, int64, userId, UEResult, result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUserAchievementStored, int64, gameId, const FString&, achievementId, int32, currentProgress, int32, progressRequiredToUnlock);
DECLARE_DYNAMIC_DELEGATE_OneParam(FNumberOfCurrentPlayers, int32, playerCount);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FGlobalStatsReceived, int64, gameId, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FUserStatsReceivedResult, int64, gameId, UEResult, result, int64, userId);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FLeaderboardFindResult, int64, boardId, bool, found);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FLeaderboardScoresDownloaded, int64, entriesHandle, int32, count);
DECLARE_DYNAMIC_DELEGATE_FourParams(FLeaderboardScoreUploaded, bool, success, bool, scoreChanged, int32, newRank, int32, oldRank);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardUGCSet, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FIconLoadCallback, UTexture2D*, icon);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FGlobalStatsIntHistoryReceived, const TArray<int64>&, history, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FGlobalStatsDoubleHistoryReceived, const TArray<double>&, history, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FNumCurrentPlayers, int32, result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDlcInstalledEvent, int32, DlcId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSteamServerConnectFailureCallback, UEResult, result, bool, stillRetrying);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamServersDisconnectedCallback, UEResult, result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSteamServersConnectedCallback);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAssociateWithClanResult, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_FourParams(FComputeNewPlayerCompatibilityResult, UEResult, result, int32, countPlayersDountLike, int32, countSubjectDontLike, int32, countClanDontLike);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FGSStatsCallback, UEResult, result, int64, userId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameConnectedFriendChatMsgCallback, int64, steamId, const FString&, message, UEChatEntryType, entryType);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFriendRichPresenceUpdateCallback, int64, steamId, int32, appId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPersonaStateChangeCallback, int64, steamId, UEPersonaChange, changeFlags);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameRichPresenceJoinRequestedCallback, int64, steamId, const FString&, connectionString);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameLobbyJoinRequestedCallback, int64, lobbyId, int64, userId);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameOverlayActivatedCallback, bool, active, bool, userInitiated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameOverlayActivatedCallbackLegacy, bool, active);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FFriendsEnumerateFollowingListCallback, UEResult, result, const TArray<int64>&, friends);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAvatarLoadCallback, UTexture2D*, Avatar);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSetPersonaNameResponseCallback, bool, success, bool, localSuccess, UEResult, result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSteamInventoryResultReadyCallback, UEResult, result, int32, resultsHandle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMicroTxnAuthorizationResponseCallback, int32, appId, int64, orderId, bool, autorized);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamInventoryDefinitionUpdateCallback, const TArray<int32>&, itemDefs);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSteamInventoryStartPurchaseResultCallback, UEResult, result, int64, orderId, int64, transactionId);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRequestPricesCallback, UEResult, result, UESteamCurrencyCode, currencyCode, const FString&, currencySymbol);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSteamInventoryEligiblePromoItemDefIDsCallback, UEResult, result, const TArray<int32>&, eligiblePromoItemDefs, bool, cachedData);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemResultsCallback, UEResult, result, const TArray<FItemDetailWithProperties>&, items);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFavoritesListAccountsUpdatedCallback, UEResult, result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FFavoritesListChangedCallback, int32, appId, const FString&, ip, int32, queryPort, int32, connectionPort, bool, isFavorite, bool, wasAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyChatMsgCallback, int64, lobbyId, int64, userId, UEChatEntryType, type, int32, index);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyChatUpdateCallback, int64, lobbyId, int64, userChanged, int64, userMadeChange, UEChatMemberStateChange, stateChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyDataUpdateCallback, int64, lobbyId, int64, subject, bool, success);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyEnterCallback, int64, lobbyId, UEChatRoomEnterResponse, responce);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyGameCreatedCallback, int64, lobbyId, int64, serverId, const FString&, ip, int32, port);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyInviteCallback, int64, fromUserId, int64, lobbyId, int64, gameId);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbyCreate, UEResult, result, int64, lobbyId);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FLobbyEnter, int64, lobbyId, bool, blocked, UEChatRoomEnterResponse, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyMatchList, int32, count);
DECLARE_DYNAMIC_DELEGATE_FiveParams(FLobbyMatch, int64, lobbyId, bool, createdNew, UEResult, createdResult, bool, enterBlocked, UEChatRoomEnterResponse, enterResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamServerListResponce, const TArray<FGameServerItemWrapper>&, servers);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FSteamMatchmakingPingResponse, FGameServerItemWrapper, details, bool, ioError);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FSteamMatchmakingPlayersResponse, const TArray<FGameServerPlayerDetailsWrapper>&, details, bool, ioError);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FSteamMatchmakingRulesResponse, const TArray<FKeyValuePair>&, details, bool, ioError);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FSteamClientFileReadAsyncCallback, UEResult, result, const TArray<uint8>&, data);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FSteamClientFileShareCallback, UEResult, result, int64, ugcHandle);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamClientFileWriteAsyncCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddAppDependencyResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddUGCDependencyResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FCreateItemResultCallback, UEResult, result, int64, fileId, bool, needsToAcceptLegalAgreement);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDeleteItemResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppDependenciesResultCallback, UEResult, result, const TArray<int32>&, appIds);
DECLARE_DYNAMIC_DELEGATE_FourParams(FGetUserItemVoteResultCallback, UEResult, result, bool, votedUp, bool, votedDown, bool, voteSkipped);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRemoveAppDependencyResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRemoveUGCDependencyResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUserFavoriteItemsListChangedCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_FiveParams(FSteamUGCQueryCompletedCallback, int64, handle, UEResult, result, int32, resultsReturned, int32, totalMatchingResults, bool, dataFromCashe);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetUserItemVoteResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStartPlaytimeTrackingResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStopPlaytimeTrackingResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FSubmitItemUpdateResultCallback, UEResult, result, bool, needsToAcceptLegalAgreement);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRemoteStorageSubscribePublishedFileResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRemoteStorageUnsubscribePublishedFileResultCallback, UEResult, result);
DECLARE_DYNAMIC_DELEGATE_SixParams(FWorkshopEULAStatusCallback, UEResult, result, int32, appId, int32, version, FDateTime, timeStamp, bool, accepted, bool, needed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGetTicketForWebApiResponseCallback, UEResult, result, int32, authTicketHandle, const TArray<uint8>&, ticket);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FStoreAuthURLCallback, const FString&, url, bool, ioError);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FEncryptedAppTicket, const TArray<uint8>&, ticket, bool, ioError);

USTRUCT(BlueprintType)
struct FAchievementStatus
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bIsHidden = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        bool bAchieved = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        float Percent = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        FDateTime UnlockTime;
};
DECLARE_DYNAMIC_DELEGATE_OneParam(FMostAchievedStatusInfo, const TArray<FGlobalAchievementStatus>&, results);

USTRUCT(BlueprintType)
struct FLeaderboardEntry
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 UserId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Rank = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int32 Score = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        int64 UgcHandle = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heathen's Toolkit|Steamworks")
        TArray<int32> Details;
};
DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaderboardEntriesDownloaded, const TArray<FLeaderboardEntry>&, results);

/************************************************
* Predefined classes for Linkers
*************************************************/

class ULobbyDataAsset;

/************************************************
* Linkers
* These handle translation between a Steam
* CallResult callback and a Unreal delegate
*
* These should always be created as pointers
* and will self dispose when no longer required
*************************************************/

class APIUserStatsClientUserStatsReceivedResultLinker
{
public:
    APIUserStatsClientUserStatsReceivedResultLinker(CSteamID userId, FUserStatsReceivedResult InCallback);

    // Steam callback handler
    void SteamCallback(UserStatsReceived_t* Response, bool bIOError);

private:
    FUserStatsReceivedResult Callback;
    CCallResult<APIUserStatsClientUserStatsReceivedResultLinker, UserStatsReceived_t> m_UserStatsReceived_t;
};

class APIUserStatsClientLeaderboardFindResultLinker
{
public:
    APIUserStatsClientLeaderboardFindResultLinker(FString board, FLeaderboardFindResult InCallback);

    // Steam callback handler
    void SteamCallback(LeaderboardFindResult_t* Response, bool bIOError);

private:
    FLeaderboardFindResult Callback;
    CCallResult<APIUserStatsClientLeaderboardFindResultLinker, LeaderboardFindResult_t> m_LeaderboardFindResult_t;
};

class APIUserStatsClientLeaderboardFindOrCreateResultLinker
{
public:
    APIUserStatsClientLeaderboardFindOrCreateResultLinker(FString board, UELeaderboardSortMethod sortMethod, UELeaderboardDisplayType displayType, FLeaderboardFindResult InCallback);

    // Steam callback handler
    void SteamCallback(LeaderboardFindResult_t* Response, bool bIOError);

private:
    FLeaderboardFindResult Callback;
    CCallResult<APIUserStatsClientLeaderboardFindOrCreateResultLinker, LeaderboardFindResult_t> m_LeaderboardFindResult_t;
};

class APIUserStatsClientLeaderboardScoreUploadedLinker
{
public:
    APIUserStatsClientLeaderboardScoreUploadedLinker(int64 boardId, bool keepBest, int32 score, TArray<int32> data, FLeaderboardScoreUploaded InCallback);

    // Steam callback handler
    void SteamCallback(LeaderboardScoreUploaded_t* Response, bool bIOError);

private:
    FLeaderboardScoreUploaded Callback;
    CCallResult<APIUserStatsClientLeaderboardScoreUploadedLinker, LeaderboardScoreUploaded_t> m_LeaderboardScoreUploaded_t;
};

class APIUserStatsClientLeaderboardUGCSetLinker
{
public:
    APIUserStatsClientLeaderboardUGCSetLinker(SteamLeaderboard_t board, UGCHandle_t ugc, FLeaderboardUGCSet InCallback);

    // Steam callback handler
    void SteamCallback(LeaderboardUGCSet_t* Response, bool bIOError);

private:
    FLeaderboardUGCSet Callback;
    CCallResult<APIUserStatsClientLeaderboardUGCSetLinker, LeaderboardUGCSet_t> m_LeaderboardUGCSet_t;
};

class APIUserStatsClientGlobalStatIntLinker
{
public:
    int numDays;
    FString name;

    APIUserStatsClientGlobalStatIntLinker(FString apiName, int32 days, FGlobalStatsIntHistoryReceived InCallback);

    // Steam callback handler
    void SteamCallback(GlobalStatsReceived_t* Response, bool bIOError);

private:
    FGlobalStatsIntHistoryReceived Callback;
    CCallResult<APIUserStatsClientGlobalStatIntLinker, GlobalStatsReceived_t> m_GlobalStatsReceived_t;
};

class APIUserStatsClientGlobalStatDoubleLinker
{
public:
    int numDays;
    FString name;

    APIUserStatsClientGlobalStatDoubleLinker(FString apiName, int32 days, FGlobalStatsDoubleHistoryReceived InCallback);

    // Steam callback handler
    void SteamCallback(GlobalStatsReceived_t* Response, bool bIOError);

private:
    FGlobalStatsDoubleHistoryReceived Callback;
    CCallResult<APIUserStatsClientGlobalStatDoubleLinker, GlobalStatsReceived_t> m_GlobalStatsReceived_t;
};

class APIUserStatsClientNumberOfCurrentPlayersLinker
{
public:
    int numDays;
    FString name;

    APIUserStatsClientNumberOfCurrentPlayersLinker(FNumCurrentPlayers InCallback);

    // Steam callback handler
    void SteamCallback(NumberOfCurrentPlayers_t* Response, bool bIOError);

private:
    FNumCurrentPlayers Callback;
    CCallResult<APIUserStatsClientNumberOfCurrentPlayersLinker, NumberOfCurrentPlayers_t> m_NumberOfCurrentPlayers_t;
};

class APIUserStatsClientMostAchievedLinker
{
public:
    APIUserStatsClientMostAchievedLinker(FMostAchievedStatusInfo InCallback);

    // Steam callback handler
    void SteamCallback(GlobalAchievementPercentagesReady_t* Response, bool bIOError);
    CCallResult<APIUserStatsClientMostAchievedLinker, GlobalAchievementPercentagesReady_t> m_GlobalAchievementPercentagesReady_t;

private:
    FMostAchievedStatusInfo Callback;
};

class LeaderboardDownloadRequestLinker
{
public:
    LeaderboardDownloadRequestLinker(SteamAPICall_t handle, int detailsPerEntry, FLeaderboardEntriesDownloaded InCallback);

    void SteamCallback(LeaderboardScoresDownloaded_t* Response, bool bIOError);

private:
    int maxDetailsPerEntry;
    FLeaderboardEntriesDownloaded Callback;
    CCallResult<LeaderboardDownloadRequestLinker, LeaderboardScoresDownloaded_t> m_LeaderboardScoresDownloaded_t;
};

class FAssociateWithClanResultLinker
{
public:
    FAssociateWithClanResultLinker(int64 clanId, FAssociateWithClanResult InCallback);

    // Steam callback handler
    void SteamCallback(AssociateWithClanResult_t* Response, bool bIOError);

private:
    FAssociateWithClanResult Callback;
    CCallResult<FAssociateWithClanResultLinker, AssociateWithClanResult_t> m_AssociateWithClanResult_t;
};

class FComputeNewPlayerCompatibilityResultLinker
{
public:
    FComputeNewPlayerCompatibilityResultLinker(int64 userId, FComputeNewPlayerCompatibilityResult InCallback);

    // Steam callback handler
    void SteamCallback(ComputeNewPlayerCompatibilityResult_t* Response, bool bIOError);

private:
    FComputeNewPlayerCompatibilityResult Callback;
    CCallResult<FComputeNewPlayerCompatibilityResultLinker, ComputeNewPlayerCompatibilityResult_t> m_ComputeNewPlayerCompatibilityResult_t;
};

class FGSStatsReceivedLinker
{
public:
    FGSStatsReceivedLinker(int64 userId, FGSStatsCallback InCallback);

    // Steam callback handler
    void SteamCallback(GSStatsReceived_t* Response, bool bIOError);

private:
    FGSStatsCallback Callback;
    CCallResult<FGSStatsReceivedLinker, GSStatsReceived_t> m_GSStatsReceived_t;
};

class APIFriendsClientFriendsEnumerateFollowingListLinker
{
public:
    APIFriendsClientFriendsEnumerateFollowingListLinker(FFriendsEnumerateFollowingListCallback InCallback);

    // Steam callback handler
    void SteamCallback(FriendsEnumerateFollowingList_t* Response, bool bIOError);

private:
    FFriendsEnumerateFollowingListCallback Callback;
    TArray<int64> results;
    CCallResult<APIFriendsClientFriendsEnumerateFollowingListLinker, FriendsEnumerateFollowingList_t> m_FriendsEnumerateFollowingList_t;
};

class SetPersonaNameResponseLinker
{
public:
    SetPersonaNameResponseLinker(FString name, FSetPersonaNameResponseCallback InCallback);

    void SteamCallback(SetPersonaNameResponse_t* Response, bool bIOError);

private:
    FSetPersonaNameResponseCallback Callback;
    CCallResult<SetPersonaNameResponseLinker, SetPersonaNameResponse_t> m_SetPersonaNameResponse_t;
};

class SteamInventoryStartPurchaseResultLinker
{
public:
    SteamInventoryStartPurchaseResultLinker(TArray<FItemDefCount> items, FSteamInventoryStartPurchaseResultCallback InCallback);

    // Steam callback handler
    void SteamCallback(SteamInventoryStartPurchaseResult_t* Response, bool bIOError);

private:
    FSteamInventoryStartPurchaseResultCallback Callback;
    CCallResult<SteamInventoryStartPurchaseResultLinker, SteamInventoryStartPurchaseResult_t> m_SteamInventoryStartPurchaseResult_t;
};

class SteamInventoryRequestPricesResultLinker
{
public:
    SteamInventoryRequestPricesResultLinker(FRequestPricesCallback InCallback);

    // Steam callback handler
    void SteamCallback(SteamInventoryRequestPricesResult_t* Response, bool bIOError);

private:
    FRequestPricesCallback Callback;
    CCallResult<SteamInventoryRequestPricesResultLinker, SteamInventoryRequestPricesResult_t> m_SteamInventoryRequestPricesResult_t;
};

class SteamInventoryEligiblePromoItemDefIDsLinker
{
public:
    SteamInventoryEligiblePromoItemDefIDsLinker(FSteamInventoryEligiblePromoItemDefIDsCallback InCallback);

    // Steam callback handler
    void SteamCallback(SteamInventoryEligiblePromoItemDefIDs_t* Response, bool bIOError);

private:
    FSteamInventoryEligiblePromoItemDefIDsCallback Callback;
    CCallResult<SteamInventoryEligiblePromoItemDefIDsLinker, SteamInventoryEligiblePromoItemDefIDs_t> m_SteamInventoryEligiblePromoItemDefIDs_t;
};

class FLobbyMatchListLinker
{
public:
    FLobbyMatchListLinker(FLobbyMatchList InCallback);

    // Steam callback handler
    void SteamCallback(LobbyMatchList_t* Response, bool bIOError);

private:
    FLobbyMatchList Callback;
    TArray<int64> results;
    CCallResult<FLobbyMatchListLinker, LobbyMatchList_t> m_LobbyMatchList_t;
};

class FLobbyEnterLinker
{
public:
    FLobbyEnterLinker(int64 lobbyId, FLobbyEnter InCallback);
    FLobbyEnterLinker(ULobbyDataAsset* InTarget, int64 lobbyId, FLobbyEnter InCallback);

    // Steam callback handler
    void SteamCallback(LobbyEnter_t* Response, bool bIOError);

private:
    ULobbyDataAsset* Target;
    FLobbyEnter Callback;
    CCallResult<FLobbyEnterLinker, LobbyEnter_t> m_LobbyEnter_t;
};

class FLobbyCreateLinker
{
public:
    FLobbyCreateLinker(UELobbyType type, int32 maxMembers, FLobbyCreate InCallback);
    FLobbyCreateLinker(ULobbyDataAsset* InTarget, UELobbyType type, int32 maxMembers, FLobbyCreate InCallback);

    // Steam callback handler
    void SteamCallback(LobbyCreated_t* Response, bool bIOError);

private:
    ULobbyDataAsset* Target;
    FLobbyCreate Callback;
    CCallResult<FLobbyCreateLinker, LobbyCreated_t> m_LobbyCreate_t;
};

class FLobbyQuickMatchLinker
{
public:
    FLobbyQuickMatchLinker(FLobbyMatch InCallback);
    FLobbyQuickMatchLinker(ULobbyDataAsset* InTarget, FLobbyMatch InCallback);

    void MatchCallback(LobbyMatchList_t* Response, bool bIOError);
    void CreateCallback(LobbyCreated_t* Response, bool bIOError);
    void EnterCallback(LobbyEnter_t* Response, bool bIOError);

private:
    ULobbyDataAsset* Target;
    FLobbyMatch Callback;
    CCallResult<FLobbyQuickMatchLinker, LobbyCreated_t> m_LobbyCreate_t;
    CCallResult<FLobbyQuickMatchLinker, LobbyEnter_t> m_LobbyEnter_t;
    CCallResult<FLobbyQuickMatchLinker, LobbyMatchList_t> m_LobbyMatchList_t;
};

class SteamMatchmakingRulesResponseLinker : ISteamMatchmakingRulesResponse
{
public:
    SteamMatchmakingRulesResponseLinker(FString address, int32 port, FSteamMatchmakingRulesResponse InCallback);
    virtual ~SteamMatchmakingRulesResponseLinker();

    // Steam callback handler
    void RulesResponded(const char* pchRule, const char* pchValue);
    void RulesFailedToRespond();
    void RulesRefreshComplete();

private:
    FSteamMatchmakingRulesResponse Callback;
    HServerQuery queryHandle;
    TArray<FKeyValuePair> results;
};

class SteamMatchmakingPingResponseLinker : public ISteamMatchmakingPingResponse
{
public:
    SteamMatchmakingPingResponseLinker(FString address, int32 port, FSteamMatchmakingPingResponse InCallback);
    virtual ~SteamMatchmakingPingResponseLinker();

    // Steam callback handler
    void ServerResponded(gameserveritem_t& server);
    void ServerFailedToRespond();

private:
    FSteamMatchmakingPingResponse Callback;
    HServerQuery queryHandle;
};

class SteamMatchmakingPlayersResponseLinker : public ISteamMatchmakingPlayersResponse
{
public:
    SteamMatchmakingPlayersResponseLinker(FString address, int32 port, FSteamMatchmakingPlayersResponse InCallback);
    virtual ~SteamMatchmakingPlayersResponseLinker();

    // Steam callback handler
    void AddPlayerToList(const char* pchName, int nScore, float flTimePlayed);
    void PlayersFailedToRespond();
    void PlayersRefreshComplete();

private:
    FSteamMatchmakingPlayersResponse Callback;
    HServerQuery queryHandle;
    TArray<FGameServerPlayerDetailsWrapper> results;
};

class SteamMatchmakingServerListResponseLinker : public ISteamMatchmakingServerListResponse
{
public:
    HServerListRequest listHandle;

    SteamMatchmakingServerListResponseLinker(FSteamServerListResponce InCallback);
    virtual ~SteamMatchmakingServerListResponseLinker();

    // Server has responded ok with updated data
    void ServerResponded(HServerListRequest hRequest, int iServer);
    // Server has failed to respond
    void ServerFailedToRespond(HServerListRequest hRequest, int iServer);
    // A list refresh you had initiated is now 100% completed
    void RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response);

private:
    FSteamServerListResponce Callback;
    TArray<FGameServerItemWrapper> results;
};

class RemoteStorageClientFileWriteAsyncCompleteLinker
{
public:
    RemoteStorageClientFileWriteAsyncCompleteLinker(FString name, TArray<uint8> data, FSteamClientFileWriteAsyncCallback InCallback);

    void SteamCallback(RemoteStorageFileWriteAsyncComplete_t* Response, bool bIOError);

private:
    FSteamClientFileWriteAsyncCallback Callback;
    CCallResult<RemoteStorageClientFileWriteAsyncCompleteLinker, RemoteStorageFileWriteAsyncComplete_t> m_RemoteStorageFileWriteAsyncComplete_t;
};

class RemoteStorageClientFileReadAsyncCompleteLinker
{
public:
    RemoteStorageClientFileReadAsyncCompleteLinker(FString name, FSteamClientFileReadAsyncCallback InCallback);

    void SteamCallback(RemoteStorageFileReadAsyncComplete_t* Response, bool bIOError);

private:
    FSteamClientFileReadAsyncCallback Callback;
    CCallResult<RemoteStorageClientFileReadAsyncCompleteLinker, RemoteStorageFileReadAsyncComplete_t> m_RemoteStorageFileReadAsyncComplete_t;
};

class FSteamClientFileShareLinker
{
public:
    FSteamClientFileShareLinker(FString name, FSteamClientFileShareCallback InCallback);

    void SteamCallback(RemoteStorageFileShareResult_t* Response, bool bIOError);

private:
    FSteamClientFileShareCallback Callback;
    CCallResult<FSteamClientFileShareLinker, RemoteStorageFileShareResult_t> m_RemoteStorageFileShareResult_t;
};

class AddAppDependencyResultLinker
{
public:
    AddAppDependencyResultLinker(int64 parentFileId, int32 appId, FAddAppDependencyResultCallback InCallback);

    void SteamCallback(AddAppDependencyResult_t* Response, bool bIOError);

private:
    FAddAppDependencyResultCallback Callback;
    CCallResult<AddAppDependencyResultLinker, AddAppDependencyResult_t> m_AddAppDependencyResult_t;
};

class AddUGCDependencyResultLinker
{
public:
    AddUGCDependencyResultLinker(int64 parentFileId, int64 childFileId, FAddUGCDependencyResultCallback InCallback);

    void SteamCallback(AddUGCDependencyResult_t* Response, bool bIOError);

private:
    FAddUGCDependencyResultCallback Callback;
    CCallResult<AddUGCDependencyResultLinker, AddUGCDependencyResult_t> m_AddUGCDependencyResult_t;
};

class CreateItemResultLinker
{
public:
    CreateItemResultLinker(int32 appId, UEWorkshopFileType type, FCreateItemResultCallback InCallback);

    void SteamCallback(CreateItemResult_t* Response, bool bIOError);

private:
    FCreateItemResultCallback Callback;
    CCallResult<CreateItemResultLinker, CreateItemResult_t> m_CreateItemResult_t;
};

class DeleteItemResultLinker
{
public:
    DeleteItemResultLinker(int64 fileId, FDeleteItemResultCallback InCallback);

    void SteamCallback(DeleteItemResult_t* Response, bool bIOError);

private:
    FDeleteItemResultCallback Callback;
    CCallResult<DeleteItemResultLinker, DeleteItemResult_t> m_DeleteItemResult_t;
};

class GetUserItemVoteResultLinker
{
public:
    GetUserItemVoteResultLinker(int64 fileId, FGetUserItemVoteResultCallback InCallback);

    void SteamCallback(GetUserItemVoteResult_t* Response, bool bIOError);

private:
    FGetUserItemVoteResultCallback Callback;
    CCallResult<GetUserItemVoteResultLinker, GetUserItemVoteResult_t> m_GetUserItemVoteResult_t;
};

class RemoveAppDependencyResultLinker
{
public:
    RemoveAppDependencyResultLinker(int64 fileId, int32 appId, FRemoveAppDependencyResultCallback callback);

    void SteamCallback(RemoveAppDependencyResult_t* Response, bool bIOError);

private:
    FRemoveAppDependencyResultCallback Callback;
    CCallResult<RemoveAppDependencyResultLinker, RemoveAppDependencyResult_t> m_RemoveAppDependencyResult_t;
};

class RemoveUGCDependencyResultLinker
{
public:
    RemoveUGCDependencyResultLinker(int64 parentFileId, int64 childFileId, FRemoveUGCDependencyResultCallback callback);

    void SteamCallback(RemoveUGCDependencyResult_t* Response, bool bIOError);

private:
    FRemoveUGCDependencyResultCallback Callback;
    CCallResult<RemoveUGCDependencyResultLinker, RemoveUGCDependencyResult_t> m_RemoveUGCDependencyResult_t;
};

class UserFavoriteItemsListChangedLinker
{
public:
    UserFavoriteItemsListChangedLinker(int32 appId, int64 fileId, FUserFavoriteItemsListChangedCallback callback);

    void SteamCallback(UserFavoriteItemsListChanged_t* Response, bool bIOError);

private:
    FUserFavoriteItemsListChangedCallback Callback;
    CCallResult<UserFavoriteItemsListChangedLinker, UserFavoriteItemsListChanged_t> m_UserFavoriteItemsListChanged_t;
};

class SteamUGCQueryCompletedLinker
{
public:
    SteamUGCQueryCompletedLinker(int64 queryHandle, FSteamUGCQueryCompletedCallback callback);

    void SteamCallback(SteamUGCQueryCompleted_t* Response, bool bIOError);

private:
    FSteamUGCQueryCompletedCallback Callback;
    CCallResult<SteamUGCQueryCompletedLinker, SteamUGCQueryCompleted_t> m_SteamUGCQueryCompleted_t;
};

class SetUserItemVoteResultLinker
{
public:
    SetUserItemVoteResultLinker(int64 fileId, bool voteUp, FSetUserItemVoteResultCallback callback);

    void SteamCallback(SetUserItemVoteResult_t* Response, bool bIOError);

private:
    FSetUserItemVoteResultCallback Callback;
    CCallResult<SetUserItemVoteResultLinker, SetUserItemVoteResult_t> m_SetUserItemVoteResult_t;
};

class StartPlaytimeTrackingResultLinker
{
public:
    StartPlaytimeTrackingResultLinker(TArray<int64> fileIDs, FStartPlaytimeTrackingResultCallback callback);

    void SteamCallback(StartPlaytimeTrackingResult_t* Response, bool bIOError);

private:
    FStartPlaytimeTrackingResultCallback Callback;
    CCallResult<StartPlaytimeTrackingResultLinker, StartPlaytimeTrackingResult_t> m_StartPlaytimeTrackingResult_t;
};

class StopPlaytimeTrackingResultLinker
{
public:
    StopPlaytimeTrackingResultLinker(TArray<int64> fileIDs, FStopPlaytimeTrackingResultCallback callback);

    void SteamCallback(StopPlaytimeTrackingResult_t* Response, bool bIOError);

private:
    FStopPlaytimeTrackingResultCallback Callback;
    CCallResult<StopPlaytimeTrackingResultLinker, StopPlaytimeTrackingResult_t> m_StopPlaytimeTrackingResult_t;
};

class StopAllPlaytimeTrackingResultLinker
{
public:
    StopAllPlaytimeTrackingResultLinker(FStopPlaytimeTrackingResultCallback callback);

    void SteamCallback(StopPlaytimeTrackingResult_t* Response, bool bIOError);

private:
    FStopPlaytimeTrackingResultCallback Callback;
    CCallResult<StopAllPlaytimeTrackingResultLinker, StopPlaytimeTrackingResult_t> m_StopPlaytimeTrackingResult_t;
};

class SubmitItemUpdateResultLinker
{
public:
    SubmitItemUpdateResultLinker(int64 updateHandle, FString changeNote, FSubmitItemUpdateResultCallback callback);

    void SteamCallback(SubmitItemUpdateResult_t* Response, bool bIOError);

private:
    FSubmitItemUpdateResultCallback Callback;
    CCallResult<SubmitItemUpdateResultLinker, SubmitItemUpdateResult_t> m_SubmitItemUpdateResult_t;
};

class RemoteStorageSubscribePublishedFileResultLinker
{
public:
    RemoteStorageSubscribePublishedFileResultLinker(int64 fileId, FRemoteStorageSubscribePublishedFileResultCallback callback);

    void SteamCallback(RemoteStorageSubscribePublishedFileResult_t* Response, bool bIOError);

private:
    FRemoteStorageSubscribePublishedFileResultCallback Callback;
    CCallResult<RemoteStorageSubscribePublishedFileResultLinker, RemoteStorageSubscribePublishedFileResult_t> m_RemoteStorageSubscribePublishedFileResult_t;
};

class RemoteStorageUnsubscribePublishedFileResultLinker
{
public:
    RemoteStorageUnsubscribePublishedFileResultLinker(int64 fileId, FRemoteStorageUnsubscribePublishedFileResultCallback callback);

    void SteamCallback(RemoteStorageUnsubscribePublishedFileResult_t* Response, bool bIOError);

private:
    FRemoteStorageUnsubscribePublishedFileResultCallback Callback;
    CCallResult<RemoteStorageUnsubscribePublishedFileResultLinker, RemoteStorageUnsubscribePublishedFileResult_t> m_RemoteStorageUnsubscribePublishedFileResult_t;
};

class WorkshopEULAStatusLinker
{
public:
    WorkshopEULAStatusLinker(FWorkshopEULAStatusCallback InCallback);

    void SteamCallback(WorkshopEULAStatus_t* Response, bool bIOError);

private:
    FWorkshopEULAStatusCallback Callback;
    CCallResult<WorkshopEULAStatusLinker, WorkshopEULAStatus_t> m_WorkshopEULAStatus_t;
};

class APIUserClientCallbackLinker
{
public:
    APIUserClientCallbackLinker(FString RedirectUrl, FStoreAuthURLCallback InCallback);

    // Steam callback handler
    void SteamCallback(StoreAuthURLResponse_t* Response, bool bIOError);

private:
    FStoreAuthURLCallback Callback;
    CCallResult<APIUserClientCallbackLinker, StoreAuthURLResponse_t> m_StoreAuthURLResponse_t;
};

class APIUserClientEncryptedAppTicketLinker
{
public:
    APIUserClientEncryptedAppTicketLinker(TArray<uint8> data, FEncryptedAppTicket InCallback);

    // Steam callback handler
    void SteamCallback(EncryptedAppTicketResponse_t* Response, bool bIOError);

private:
    FEncryptedAppTicket Callback;
    CCallResult<APIUserClientEncryptedAppTicketLinker, EncryptedAppTicketResponse_t> m_EncryptedAppTicketResponse_t;
};