// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "SBCheatManager.generated.h"

UCLASS(Blueprintable)
class SB_API USBCheatManager : public UCheatManager
{
	GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable, Exec)
        void StopManualLoadingScreen() {};

    UFUNCTION(BlueprintCallable, Exec)
        void StartManualLoadingScreen() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SetMaxUndilatedFrameTime(float inMaxUndilatedFPS) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SetFixedFrameRate(float inFixedFrameRate) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBZoneEvent(FName InEventAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SbWorldObjReInit() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWorldGlobalMotionBlurScale(bool bSet, float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWorldEnvPostProcessDisable(bool bDisable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWorldEnvCounter(int32 InType, bool bActive) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWaypoint(int32 InWaypoint) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWaveMerge(const FString& overwriteFileName, float Delay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWarpWorld(FName inWorldAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWarpPosition(float InX, float InY, float InZ, bool bNoUseWarp) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWarpPlayer(FName TargetTagName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWarpCampToPointName(FName InCampAlias, FName TargetSpawnPoint) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWarpCampToLocation(FName InCampAlias, float X, float Y, float Z) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBWarpCamp(FName InCampAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBVisibleLoadingScreen(bool bVisible) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBVariationText(int32 InTextIndex, const FString& InKey) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBValidatePakDuplication() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBValidatePakCount(int32 InCount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUsePDODitherAlpha(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUseOcclusionDebugging() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUpdateNierDLCUI(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUpdateMoveSpeed(float UpdateDelayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUpdateCouponUserInfo(const FString& inPlatform, const FString& inUserId, int32 InPlayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUpdateCognitoStatus(const FString& inPlayerName, const FString& inPassWord) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUnuseOcclusionDebugging() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUnLoadLevel(const FString& InLevelPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIWorkShopEnableDefaultShop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIWorkShopDisableDefaultShop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIToggleShowFriendShipGain() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIToggleForceValidShopItem() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIStudioShowPlay(const FString& ShowTag, bool bSameStop, bool bBlendCamera) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIStudioSetItem(const FString& inAssetPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIStudioSequencePlay(const FString& SequenceTag, bool bSameStop, bool bBlendCamera) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIStudioPreviewOpen() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIStudioEvent(const FString& inEvent) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIStudioAttachEquipment(const FString& inTargetTag, const FString& InItemAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIOpenWorkShop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIOpenShop(const FString& OpenShopDataAlias, const FString& OpenShopInstanceAlias, const FString& OpenShopTitleTag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIOpenHairSalonToGameMenu() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIOpenGameMenuToHairSalon() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIOpenGameMenu() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIOpen(const FString& UILogicTypeName, bool bDuplicateCheck) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIEventUnlockBurst(float InTime, float InDelay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIActionWidgetCreate(const FString& widgetAssetPath, float InDelay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIActionUnlockMode(const FString& TitleKey, float InTime, float InDelay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIActionRequestAlias(const FString& Group) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIActionNikkeLostArticlePopup(const FString& NikkeLostArticleAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIActionGuideVideo(const FString& TitleKey, const FString& DescKey, const FString& MovieAssetPath, float InTime, float InDelay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBUIActionControllerStatePrint() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTrinityMode(bool bIsTrinityMode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTrialVersionSet(bool bEnable) {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBTrainingRoomMode(TEnumAsByte<ESBTrainningRoomChangeType> ChangeType, bool Infinite, TEnumAsByte<ESBTrainningRoomNpcAIType> EnemyAIType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToLobby() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleUseLog(FName inLogKey) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleUseDrawDebug(FName inDrawKey) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleStudioOnOff() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleStencilLog() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleSoundDebugger() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleSimpleFishing() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleSigManShowDebug() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleRopeSwingPhysic() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleRewardRateForceSuccess() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleResourceCacheRecorder() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleResourceCacheManagerShowDebug() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePrintQuartzBeat() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePlayerState() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePlayerIgnoreCoolTime() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePlayerDamageInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePhotoModeUI() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePhotoModeScreenShotCaptureForceFail() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTogglePadSpeaker() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleObjectID() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleMotionMatching() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleMailBox() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleLockOnCamera() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleLevelInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleGCControl() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleFullBodyIK(const FString& Name) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleFootIK() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleFoliageTypeDensityScale(const bool inEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleFlyCamera() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleFishMove() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleFishingDebugger() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleEngineFlag(FName InFlag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleEnemyDamageInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleEnableSTS() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleEnableSliceMesh() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleEnableFootIKWhenSequence() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleDrawPlayerMove(bool bAddMoveTrackActor, float AddMoveTrackActorDist) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleDisplayLamsID() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleDeviceProfileDebugDisplay() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleDebugSTS() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleDebugSliceMesh() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleDebugAudioComponent() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleCheatCommandDistribution() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleCharacterMovementParallelUpdate() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleBossChallengeDebug() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBToggleAimIK() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterTestInteractionYesNo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterTestInteractionSelect() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterTestInteractionAdamFusion() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterStop(int32 uid) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterSkip(int32 uid) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterPrintLevelSeqPlaying() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterPlayLevelSeq(const FString& ResourcePath, float InOverridePriority, float LocX, float LocY, float LocZ, float Pitch, float Yaw, float Roll) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterPlay(const FString& ResourcePath, float InOverridePriority, float LocX, float LocY, float LocZ, float Pitch, float Yaw, float Roll) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterOptionCheck(const FString& inResourcePath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterNotifyCompleteSequence(const FString& SequenceName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTheaterIgnoreFirstSkip(bool bSkip) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestPlayGoUI() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestPlayGoLabelAssetCache() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestKrulosLog() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestEanbleBoid() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestCharacterAnim(const FString& InAnimName, float PlayStartTime, float PlayEndTime, float PlayRate, float BlendInTime, float BlendOutTime, bool bLoop, int32 LoopCount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestChangeBlendSpace(int32 SlotIndex, const FString& InAnimName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestBridgeLog() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestBool(FName InKey, bool InBool) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTestBlackboardComponent() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTerminateLevelStreamProfiling() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTeleportTo(float InX, float InY, float InZ) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBTalkTest(const FString& TalkAssetPath, const FString& CharacterAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw, const FString& InTag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSystemSetAppActivate(bool bActivate, float DelayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSuicide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStudioState(bool bEnter) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStudioResetPhysics() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStudioCameraSetManualDistance(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStudioCameraSetCurrentFocalLength(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStudioCameraSetCurrentAperture(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStudioCameraFocusInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStopMatchRequest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStopKeepPlaySingleSound() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStopAllSounds() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStartSingleLevelStreamProfiling(const FString& InLevelStreamName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStartLevelStreamProfiling() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBStartKeepPlaySingleSound() {};

    UFUNCTION(BlueprintCallable, Exec)
        bool SBStartActivity(FName inActivityName) { return false; };

    UFUNCTION(BlueprintCallable, Exec)
        void SBSpawnEnemy() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSoundUnMute() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSoundMute() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSnapShot(const FString& SnapshotName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSignOutCognito(const FString& inPlayerName, const FString& inPassWord) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSignInCognito(const FString& inPlayerName, const FString& inPassWord) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManUseDebugActors(bool bUse) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManUnregisterAll() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManToggleZoneEnvOptimizationConfigs(bool Enable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManToggleCharacterOptimizationConfigs(bool Enable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManShowDebugFilter(const FString& ActorClass) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManSetDummyViewportLocationToPlayer() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManSetDummyViewportLocation(float InX, float InY, float InZ) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManResetSignificance() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManRegisterAll() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManHideDebugActors(bool bHide) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManEnableDummyViewport(bool bInEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSigManDumpLog() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShowStoreUI(const FString& ProductId) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShowRes() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShowEventContentsDate() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShowControllerBindingPanel() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShowActorID(int32 InShow) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShaderPrecompileEnable() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBShaderPrecompileDisable() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetVoice(const FString& InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetUTCCountryCode(const FString& InCode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSlowLevelStreamingUpdate(int32 Level) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSkillSlot(FName inSkillAlias, int32 SlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSettingVersion(int32 InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenTypeWindowedFullScreen() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenTypeWindowed() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenTypeFullScreen() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenType(int32 InScreenType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenResolution4K() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenResolution2K() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenResolution1K() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetScreenResolution(int32 InValueX, int32 InValueY) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSaveSlot(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSaveMajorVersionLatest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSaveMajorVersion(int32 MajorVersion) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSaveAppContentVersionLatest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetSaveAppContentVersion(int32 SaveAppVersion) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetResolutionQuality(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetPurchaseInTrial(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetPlayerPawnAnimMode(int32 inMode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetPhotoModeLightLocation(int32 LightIndex, float X, float Y, float Z) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetNewGamePlus() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetMultiRuleRemainTime(float InRemainTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetLoadSlot(const FString& TargetFileName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetLanguage(const FString& InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetIgnoreEntitlementList(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetHintType(FName inHintType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetHDRDisplayNit(int32 DisplayNit) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetHDR(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetGamma(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetFreezeIK(float InFreezeTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetFishingLogBook(FName InFishAlias, int32 InCount, float InMaxWeightRecord) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetFishingAssist(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetDollyCamMode(bool bFlag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetDisplayCropAspectRatio(bool bUse) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetDifficultyAlias(FName inDifficultyAlias) {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBSetDifficulty(ESBGameDifficultyType InDifficulty) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetCustomVector2D(const FString& InKey, float inValue1, float inValue2) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetCustomInt(const FString& InKey, int32 InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetCustomFloat(const FString& InKey, float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetCustomBool(const FString& InKey, bool InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetCouponUserInfo(const FString& inPlatform, const FString& inUserId, const FString& inUserName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetCamBlend(TEnumAsByte<EViewTargetBlendFunction> InNewType, float BlendExp) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetBuySB(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetBuyNikkeDLC(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetBuyNierDLC(bool bEnable) {};

    UFUNCTION(Exec)
        void SBSetBodySuitLevel(const FString& InItemAlias, uint32 inLevel, bool bConsumeItem) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetAsyncLoadingScreenDisable(bool bDisable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetAssetGroupCulture(const FString& culture) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetAppRegionUP(bool bUPRegion) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetAppRegionJP(bool bJPRegion) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSetAppRegionEP(bool bEPRegion) {};

    UFUNCTION(BlueprintCallable, Exec)
        bool SBSetActivityAvailability(FName inActivityName, bool inbEnabled) { return false; };

    UFUNCTION(BlueprintCallable, Exec)
        void SBServerTravel(const FString& inMultiMapAlias, bool bRandomMap) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBServer(const FString& InCmd) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSequenceMovie(const FString& AssetPath, float FadeIn, float FadeOut) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSequenceAttachWidget(bool bActive, bool bReset, const FString& inAssetPath, int32 hAlign, int32 vAlign, float offsetX, float offsetY, const FString& Arg1, const FString& Arg2, const FString& Arg3, const FString& Arg4, const FString& Arg5, const FString& Arg6) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSendPlayerSessionInviteName(const FString& inFriendName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSendPlayerSessionInviteIndex(int32 inFriendIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSendHelloToAWSLambda() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSelfiePhotoMode() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSceErrorDialog(int32 inErrorCode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveToManualSaveSlot(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveToAutoSaveSlot(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveResetTrigger(FName TriggerAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveObjectCount() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveGameOption() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveGame() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBSaveEveryZone(bool bClearZoneContainer) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRunSpawnEvent(FName InAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRunItemSpawnEvent(FName InAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRunGameWorldEvent(int32 InType, FName InEventAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRunEventUIAction(const FString& InAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRSToPC(const FString& InScriptPath, const FString& InFunctionName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRSToPA(const FString& InScriptPath, const FString& InFunctionName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRewardGroupDropSequentialArc(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnStartInterval, float SpawnNextInterval, float Distance, float Degree, float ColumnCount, float DistanceAdditional, float DecreaseCountFactor, float DecreaseDegree) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRewardGroupDropRandomRange(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnStartInterval, float SpawnNextInterval, float DropDistanceMin, float DropDistanceMax, float DropDirXMin, float DropDirXMax, float DropDirYMin, float DropDirYMax, float DropDirZMin, float DropDirZMax) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRewardGroupDropInven(FName RewardGroupAlias, bool NotifyUI) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRewardGroupDropFormationPathLocation(FName RewardGroupAlias, float LocX, float LocY, float LocZ, const FString& formationPath, float DirX, float DirY, float DirZ) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRewardGroupDropFormationPath(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, const FString& formationPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRewardGroupDrop(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float DelayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBReturnToSinglePlay() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRetryNikkeStage() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRestoreSkillPoint(bool bConsumeItem, FName SkillTreeAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRestoreDeviceProfile() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResourceCacheUpdate() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResourceCacheSequenceList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResourceCacheManagerLog() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResourceCacheManagerEnable(const bool inEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResourceCacheEnable(const bool inEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResetZone() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResetTrainingRoom() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResetRope() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResetNoticeScreenSkip() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResetDifficultyAlias() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBResetCam() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRequestTargetZone(const FName& ZoneAlias, const FName& SpawnPoint) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRequestExit() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRenderHair(bool inOn) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRenderFace(bool inOn) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRemoveSkillAll() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRemoveSkill(FName inAcquisitionSkillAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRemovedWidgetFindReferences(int32 InIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBReloadConfig() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRegisterPlayerSessionName(const FString& inPlayerName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRegisterPlayerSessionFriendIndex(int32 inFriendIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBRefreshWidgetViewportSize() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestTrackOnOff() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestTrackingTargetFilterPrint() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestRemoveAllQuest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestPause(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestFailed(FName QuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerTaskGroupDescriptionShow() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerTaskGroupDescriptionHide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerTaskDescriptionShow() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerTaskDescriptionHide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerShow() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerSetCompleteQuestVisible(bool bVisible) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerQuestTitleShow() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerQuestTitleHide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerQuestDescriptionShow() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerQuestDescriptionHide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestDebuggerHide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestCompleteTaskGroup(FName TaskGroupAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestCompleteTask(FName TaskAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestCompleteList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestComplete(FName QuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestAcquireReward(FName QuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQuestAcquire(FName QuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQueryPresence() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBQueryAchievements() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPVDConnect() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPushSoundMix(const FString& Path) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPushSoundEvent(FName InSoundEventAlias, float DelayTime) {};

    UFUNCTION(Exec)
        bool SBProgressTrophy(FName inTrophyName, uint32 inProgressValue) { return false; };

    UFUNCTION(BlueprintCallable, Exec)
        bool SBProgressAllTrophy() { return false; };

    UFUNCTION(BlueprintCallable, Exec)
        void SBProfilingUI() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintWorldTimeSeconds() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintUTCOffset() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintSupportedWindowedscreenResolutions() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintSupportedFullscreenResolutions() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintSteamInputActive() {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBPrintSoundVolume(ESBSoundVolumeChannel InChannel, ESBSoundVolumeControlType InControlType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintScreenSize() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintSaveVersion() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintPlayerCharacterInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintNewGamePlusCount() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintLogLockOnPoint() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintLanguageDefaultCode() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintKeyboardLayout() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintHdrToneMapLuminance() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintGPUAdapterDedicatedMemoryUsage() {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBPrintGameOptionDefaultValue(ESBGameOptionType GameOptionType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintFixedFrameRate() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintEquipLilyMeshAssetPath() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintEntitlementList(bool bInRefresh) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintCurrentLanguage() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintBuildInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintAvailableLanguages() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintAppId() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintAllScreenSize() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPrintActiveVolume() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPopUpPlayGoDebugUI() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPopSoundMix(const FString& Path) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPointRectLightCastShadow(bool inCastShadow) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayVibration(const FString& InPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayTestSound(const FString& InPath, float SeekToTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayTestQuartzSound(const FString& InSoundPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayTest3dSound(const FString& InSoundPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayShow(const FString& InShowDataPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayLevelSeq(FName InSeqName, float InPlayTime, const FString& InAttachActors) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayGoTest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerUseSkill(FName InSkillName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerUngrabObject() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerTransform(FName inCharacterAlias) {};

    UFUNCTION(Exec)
        void SBPlayerSP(uint32 InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerShowMultiMapLevel() {};

    UFUNCTION(Exec)
        void SBPlayerShowAchievementInfo(uint32 inAchievementId, const FString& inAchievementAlias) {};

    UFUNCTION(Exec)
        void SBPlayerSetLevel(FName inLevelType, uint32 inLevel, bool bConsumeItem) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerSetCameraLock(bool bLock) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerRevival() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerResetPhysics(bool bResetPhysics, bool bResetCloth, float FadeTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerRemoveAchievement(const FString& inAchievementAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerRecreatePhysicsState() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerRecoveryItems() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerReceiveAchievementReward(const FString& inAchievementAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerProcessAchievementOnlyOne(const FString& inAchievementAlias, int32 inProgressValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerMoveTo(float InLocationX, float InLocationY, float InLocationZ, bool InManualStop, bool InCheckLocation, bool InUseBraking, int32 InBrakingInputType, float InBrakingDistStart, float InBrakingDistEnd) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerMovementMode(const FString& inMode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerMovementDisableDesireRotation(bool bActive) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerMaxTachyGauge() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerMaterialChange(int32 Index) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerLockOnSpeed(float inWalkSpeed, float inRunSpeed) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerLevelList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerJaliFace(bool bActive) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerItemRecharge(const FString& ItemAlias, bool bNotifyUI) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerItemBucketList(bool EquipOnly) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerItemBucketItemRemove(FName InItemAlias, int32 InCount, int32 InPocketIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerItemBucketItemConsume(FName InItemAlias, int32 InCount, int32 InPocketIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerItemBucketItemAdd(FName InItemAlias, int32 InCount, int32 InStatLevel, bool bNotifyUI) {};

    UFUNCTION(Exec)
        void SBPlayerIsCompleteAchievement(uint32 inAchievementId, const FString& inAchievementAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerInputState(bool bState, bool bControlChar, bool bControlCharState) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerIncreaseMultiMapLevel(int32 inDiffValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerHP(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerHintList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerFrontGrabObject() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerForceTurn() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerEventTagClear() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerEventTag(const FString& InTag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerEquipItem(const FString& EquipType, bool bEquip, const FString& ItemAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerEnableExtraSprint(bool bFlag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerCompleteAchievementOnlyOne(const FString& inAchievementAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerCompleteAchievement(const FString& inAchievementAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerChangeStance(const FString& Stance) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerChangeBulletAlias(const FString& BulletAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerCameraInterpolMode(float InTime, bool bCalcNewTargetDir, bool bOnlyRotation) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerCameraFadeManualPriority(bool bFade, float inFadeAmount, float InPriority) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerCameraFadeAutoPriority(bool bFade, float inFadeStart, float inFadeEnd, float inFadeTime, float inFadeDelay, float InPriority) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerCameraFade(bool bFade, float inFadeAmount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerBurstGauge(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerBetaGauge(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerBattleState(bool bBattleState) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayerAchievementList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayCustomBlendSpace(float InDuration) {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBPlayCustomAnimMeshSlotByTag(const FString& InActorTag, const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot) {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBPlayCustomAnimMeshSlot(const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayCustomAnimByTag(const FString& InActorTag, const FString& InAnimName, int32 inCustomIndex, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayCustomAnimByFolder(const FString& InFolderPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayCustomAnim(const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, int32 inCustomIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPlayCameraAnim(const FString& InPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPhotoModeTakeScreenshot() {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBPhotoModeFacialAnimType(TEnumAsByte<ESBPhotoModeFacialAnimType> SBIdleAnimType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPhotoModeFacialAnimPosition(float position) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPhotoModeDebug() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPhotoMode() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPerformanceProfilerStop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPerformanceProfilerStartForLevelStream() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPerformanceProfilerStart(bool bCheckGPU, float inLimit) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPerformanceProfilerMoveCamera(float InDistance) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPDODitherAlphaThreshold(float AlphaThreshold) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBPauseAllSounds(bool bPause) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBOverrideDeviceProfile(const FString& InProfileName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBOpenRequestBoard(bool IsNikke) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBOpenLevel(FName LevelName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBOpenCredit(bool bAllowClose, bool bStartScroll) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBNikkeMiniGameResultTest(const FString& LostArticleAlias, bool IsCleared) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBNikkeMiniGameNextWaveUITest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBNikkeMiniGameForceVictory() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBNikkeMiniGameDefenseGaugeTest(int32 AddScore) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBNextChangeBody() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBNewGUID() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMetaAIThink(FName inThink, FName inBehaviorAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMetaAISpecialBehaviorTag(FName inTargetNodeTag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMetaAISetNodeIndex(int32 inNodeIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMetaAIAlias(FName inMetaAIAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMessageBoxV3Text(const FString& inTitleText, const FString& inDescText, int32 InType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMessageBoxV3StringTable(const FString& inTitleKey, const FString& inDescKey, bool bShowSaveTimeMessage, int32 InType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMeshStudioShowTest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMemRecordStop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMemRecordStart(float Interval, int32 FlushCount, float MemSpikeThreshold) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMaterialTest(int32 Index) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMatchRequestWithName(const FString& InMapName, const FString& inOwnerName, const FString& inMatchName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBMatchRequest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBManualSaveList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLuaCheat(const FString& CallFunc) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLookAtTargetTag(FName inSourceTag, const FString& inTargetTag, const FString& inTargetSocket, float inLookAtZOffset) {};

    UFUNCTION(Exec)
        void SBLogTickToTime(int64 Tick) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogThreadCount() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogShowDataContainsKey(int32 ShowKeyEnum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogSaveData(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogPlayerLocation() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogPackageDependency(FName InPackageName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogEnvState() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogDLSSEstimatedVRAM() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogDirectoriesNeverCook() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogDeviceProfileName() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogCVarValue(const FString& InCVar) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogAllVibrationComponent(bool bDetail) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogAllAudioComponent() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLogActiveInteraction() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadSnapShot(const FString& SnapshotName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadShortcutData(int32 InIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadSaveData(const FString& InPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadMap(const FString& InMapName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadLevel(const FString& InLevelPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadingScreenFadeOut(float InDuration, float InFromAlpha, float InEndAlpha, float InDelay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadingScreenFadeIn(float InDuration, float InFromAlpha, float InEndAlpha, float InDelay) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadingScreenFadeAuto(float InLifeTime, float InStartDuration, float InStartAlphaFrom, float InStartAlphaEnd, float InEndDuration, float InEndAlphaFrom, float InEndAlphaEnd) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadingScreenAlpha(float InAlpha) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadGameOption() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadFromShortcut(const FString& InMapName, const FString& InFilename) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadFromManualSaveSlot(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLoadFromAutoSaveSlot(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLLMRecordStop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLLMRecordStart(float Interval) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLineNotify(const FString& inMessage, const FString& inToken) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLiftUpFish(FName InFishAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBLeaveTrainingRoom() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBJoinPlayerSession() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBJiraLoginUI() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBJiraLogin(const FString& ID, const FString& pw) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBItemTableGroupPrint(int32 inCategory, int32 inRarity) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBItemMustAcquisition() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBIsHeadphonePluggedIn() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInvalidationRoot() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInputKeyMappingTest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInputKeyMappingSave() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInputKeyMappingRestore() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInputKeyMappingForceRebuild() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInputBlockTimer(float inBlockTime, bool inUseRealTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBInputBlockManual(bool bInputBlock, float DelayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBIgnoreHintActivateZoneTrigger(bool bIgnore) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDViewportSize(int32 Width, int32 Height) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDViewportPos(bool bSet, int32 X, int32 Y) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDSkillRefreshIcon() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDRefresh(float DelayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDPlayerInfoSendWigetEvent(const FString& inEvent) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDPlayerInfoDetailToggle() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDModeChange(int32 Mode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDEnemyStatInfoDetailToggle() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHUDAspectRatio(float Value) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHideActor(const FString& TagName, bool bHide) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHDRTextureRenderShow(const FString& InTexturePath, bool bImageView) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHDRTextureRenderHide() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHDRTextureRefreshDPI() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHDRContrastDetail(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBHDRBrightnessDetail(float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGWorldOrigin(int32 InLocationX, int32 InLocationY, int32 InLocationZ) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetRewardFish(FName InRewardGroupBy, FName InLureAlias, float InWeight) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetPublicIP() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetPhotoModeLightPresetData(int32 LightIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetPhotoModeLightLocation(int32 LightIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetGameIntentInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetFriendList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetCouponUserInfo(const FString& inPlatform, const FString& inUserId) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGetCoupon(const FString& inPlatform, const FString& inUserId, const FString& inUserName, const FString& inUserAccessToken, const FString& inCouponServer) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGenerateSpawnGroupRuleFromZone(const FString& inZoneAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGenerateSpawnGroupRule(const FString& inSpawnGroupRuleAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGenerateMapResPosition(int32 RequestNum, float MinRadius, float MaxRadius, float Threshold, float GenerateMinBoundX, float GenerateMinBoundY, float GenerateMaxBoundX, float GenerateMaxBoundY, int32 CollisionCheckCount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGenerateCirclePack(int32 RequestNum, float MinRadius, float MaxRadius, float Threshold, float GenerateMinBoundX, float GenerateMinBoundY, float GenerateMaxBoundX, float GenerateMaxBoundY, int32 CollisionCheckCount, int32 OccluderNum, float MinOccluderRadius, float MaxOccluderRadius) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameUserSettings_StopBenchmark() {};

    UFUNCTION(Exec)
        void SBGameUserSettings_SetPreset(int64 inQuality) {};

    UFUNCTION(Exec)
        void SBGameUserSettings_Set(const FString& inOption, int64 inQuality) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameUserSettings_RunBenchmark(int32 inStep) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameUserSettings_ResolutionScale(float InScale) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameUserSettings_HDDMode(bool inEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameProgressSubQuest(FName CheatQuestAlias, FName Difficulty, int32 CommandSlotIndex, int32 Round) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameProgressEpicQuest(FName CheatQuestAlias, FName Difficulty, int32 CommandSlotIndex, int32 Round) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameProgressCommand(FName CheatQuestAlias, bool bEnableNewGamePlus, FName DifficultyAlias, int32 DebugCommandSlotIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGamePauseTagListPrint() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGamePaused(bool inPaused) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionSubtitleVisible(bool bVisible) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionSetActiveHDRLuminanceController(bool bActive) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionResetNeedInitialSetup() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionResetNeedInitialContentsSetup() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionMasterVolume(float InVolume) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionKeyMappingReload() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionHUDVisible(bool bVisible) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionContrast(int32 InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBGameOptionBGMVolume(float InVolume) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceLOD(int32 inLOD) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceLag(float inDelayStart, float inLagTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceHitFish(FName InFishAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceHapticVibration(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceGCActorPool() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceGC() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceEnsure() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBForceCrash() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackWarpIssue(const FString& InIssueName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackUMapRefresh() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackUMapIssueMapChange(const FString& InIssueName, const FString& ChangeMapName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackUMapIssueCreate(const FString& InSummary, const FString& InDesc, int32 InPriority) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackUMapIssueClose(const FString& InIssueName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackOpenList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackIssueUpdate(const FString& InIssueName, const FString& InSummary, const FString& InDesc, int32 InPriority, int32 InProgress) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackIssueRefresh(const FString& InIssueName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackCommentRemove(const FString& InIssueName, const FString& InCommentID) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackCommentRefresh(const FString& InIssueName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackCommentEdit(const FString& InIssueName, const FString& InCommentID, const FString& InCommentBody) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackCommentAdd(const FString& InIssueName, const FString& InCommentBody) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackCloseList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFeedbackChangeNextState() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBFailedQuest(FName QuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBExitNikkeStage() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEquipBodySuit(int32 ShortCutNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnvState(FName EnvAlias, FName TagName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnvControlVolControlOverride(const FString& VolumeName, bool bActive) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEntitlementInfinityLoading(bool bInEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnterWorld(const FName& EnterWorldAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnterTrainingRoom(FName TrainningRoomAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnterNikkeStage(FName NikkeStage, FName EnvSpawnAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnteredByActivityFakeClear() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnteredByActivityFake() {};

    UFUNCTION(BlueprintCallable, Exec)
        bool SBEndActivity(FName inActivityName) { return false; };

    UFUNCTION(BlueprintCallable, Exec)
        void SBEnableAreaVolume(FName& InName, bool bFlag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDumpPackageList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseVibrationMode(int32 Mode) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseVibration(uint8 LargeMotor, uint8 SmallMotor) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseToggleAdaptiveTriggerStateLog(int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseToggleAdaptiveTriggerPositionLog(int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseCheckUpdate() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseCheckAudioSupport() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseApplyTriggerEffectWithData(const FString& DataPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerWeapon(uint8 StartPosition, uint8 EndPosition, uint8 Strength, int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerVibration(uint8 position, uint8 Frequency, uint8 Amplitude, int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerSlopeFeedback(uint8 InStartPosition, uint8 InEndPosition, uint8 InStartStrength, uint8 InEndStrength, int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerMultiplePositionVibration(uint8 Frequency, uint8 Amplitude0, uint8 Amplitude1, uint8 Amplitude2, uint8 Amplitude3, uint8 Amplitude4, uint8 Amplitude5, uint8 Amplitude6, uint8 Amplitude7, uint8 Amplitude8, uint8 Amplitude9, int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerMultiplePositionFeedback(uint8 Strength0, uint8 Strength1, uint8 Strength2, uint8 Strength3, uint8 Strength4, uint8 Strength5, uint8 Strength6, uint8 Strength7, uint8 Strength8, uint8 Strength9, int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerFeedback(uint8 position, uint8 Strength, int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDualSenseAdaptiveTriggerClear(int32 Direction) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDroneSpotLightCastShadow(bool Inactive) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDrawTestCurve(float InDrawTime, float TargetDist, float ControlPointLength) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDrawPlayerMove(float InDrawTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDoesPakExist(int32 PakNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDiffCaptureObjectList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDetachPlayerEquipment(FName inEquipmentAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugTheaterPlay(int32 InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugSave(bool Flag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugManualSaveData(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugLogStatLLMFull(bool bRecord, bool bReportAndClear) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugLogOnSyncLoadPackage(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugLogOnSyncLoadingFlush(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugLogOnAsyncLoadPackage(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugLogOnAsyncLoadingFlush(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBDebugAutoSaveData(int32 InSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCurrentWorldInfo() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCurrentViewTarget() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCurrentDeviceSteamDeck(bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCreditDebugCloseAllow(bool bDebugAllowClose) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCreatePlayerSession() {};

    UFUNCTION(Exec)
        void SBCreateItemRange(FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnDelayTime) {};

    UFUNCTION(Exec)
        void SBCreateItemArc(FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, float Distance, float angle, int32 ArcCount, float DistanceAdditional, float DecreaseCountFactor, float DecreaseDegree, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnDelayTime) {};

    UFUNCTION(Exec)
        void SBCreateItem(FName InItemAlias, uint32 InStatLevel, uint32 InItemCount, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw, float SpawnDelayTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCreateCharacter(FName inCharacterAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConnectDedicatedServer(const FString& inServerIP, const FString& inMultiMapAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConfigOverrideString(const FString& inOptionName, const FString& InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConfigOverrideInt(const FString& inOptionName, int32 InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConfigOverrideFloatArray(const FString& inOptionName, const FString& InData) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConfigOverrideFloat(const FString& inOptionName, float InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConfigOverrideBool(const FString& inOptionName, bool InValue) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConditionTest(const FString& inConditionAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBConditionGroupTest(const FString& inConditionAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCompleteQuest(FName QuestAlias, bool bForceAcquireRequestReward) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCompleteNikkeStage(bool bVictory) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCompleteHint(FName inHintAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBColorVisionDeficiency(int32 InType, float inSeverity, bool inCorrectDeficiency, bool inShowCorrectionWithDeficiency) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBClearFixedEntitlement() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBClearDebugLog(const FString& LogCategoryName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBClearCaptureObjectList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBClearACPool() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheckTrialVersion() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheckPlayGoDebug() {};

    UFUNCTION(Exec)
        void SBCheckChunkSize(uint32 PakchunkID) {};

    UFUNCTION(Exec)
        void SBCheckChunkProgress(uint32 PakchunkID) {};

    UFUNCTION(Exec)
        void SBCheckChunkLocation(uint32 PakchunkID) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheckAvaiableLocationFromLineCheck(float StartX, float StartY, float startZ, float EndX, float EndY, float endZ, float checkRadius) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatTableCommand(const FString& inCommandGroup) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressSubQuestNewGamePlusMinMax(FName CheatQuestAlias, FName DifficultyAlias, int32 DebugCommandSlotIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressSubQuestMinMax(FName CheatQuestAlias, int32 DebugCommandSlotIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressSubQuestCommand(FName CheatQuestAlias, bool bEnableNewGamePlus, FName DifficultyAlias, int32 DebugCommandSlotIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressSubQuest(FName CheatQuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressQuestNewGamePlusMinMax(FName CheatQuestAlias, FName DifficultyAlias, int32 DebugCommandSlotIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressQuestNewGamePlus(FName CheatQuestAlias, FName DifficultyAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressQuestMinMax(FName CheatQuestAlias, int32 DebugCommandSlotIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatProgressQuest(FName CheatQuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatGroupLoop(FName GroupName, int32 LoopCount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCheatGroup(FName GroupName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCharacterSetting(FName GamePlayProgressAlias, int32 CommandSlotIndexm, int32 Round) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCharacterDespawnFromTag(const FString& InTag) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBChangeWorld(const FString& changeWorld) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBChangeRule(FName InRuleAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBChangeMesh(int32 MeshInfoIndex, FName MeshPath, FName AnimPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBChangeFace(FName MeshPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBChangeBody(FName MeshPath) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCaptureObjectList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBCameraFOV(float InNewFov) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossKillInfinity(bool bActive, float inRepeatTime) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeUnlockStageReset() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeUnlockAllStage() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeUnlockAllPreset() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeUnlockAllMode() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeUnlockAll() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeResetAllPreset() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeResetAllMode() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeResetAll() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeRecordResetStage(const FString& InStageAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeRecordReset() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengePrintBestRecord() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeExit() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallengeCompleteAllStage() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBossChallenge(const FName& BossChallengeAlias, const int32 PlayerPreset, int32 Difficulty) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBoneToBone(float InKeepDur, float InInterpTime, int32 InIndex) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBlockLevelStreaming(bool bBlock) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBackupTest(int32 BackupSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBBackupDelete(int32 BackupSlotNum) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAutoSaveList() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAutoMemReportStop() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAutoMemReportStart(float Interval) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAutoLoginWithOnlineIdentity() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAudioHRTFEnabledForAllEnable() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAudioHRTFEnabledForAllDisable() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAudio3DMixdownPassthroughEnable() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAudio3DMixdownPassthroughDisable() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAttenuationVisualize(bool bVisualize) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAttachPlayerEquipment(FName inEquipmentAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAsyncLoadingScreenStop(float FadeDuration) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAsyncLoadingScreenPlay(float FadeDuration) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBArcEventSpawn(int32 MaxCount) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBApplyEffectMe(FName inEffectAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBApplyEffect(FName inEffectAlias, int32 InActorGUID) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAppFunc(FName AppRegionName, bool bEnable) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAnimSequenceGetTimeFromPos(const FString& AssetPath, const FString& BoneName, float InX, float InY, float InZ) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAnimSequenceBake(const FString& AssetPath) {};

    UFUNCTION(Exec)
        void SBAIMovePath(FName InAlias, uint32 InActorGUID) {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBAdjustSoundVolume(ESBSoundVolumeChannel InChannel, float Volume, ESBSoundVolumeControlType InControlType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAddMaterialParamTest() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAddFixedEntitlement(const FString& InEntitlementId) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAddEntitlement(const FString& InEntitlementId) {};

    //UFUNCTION(BlueprintCallable, Exec)
    //    void SBAddDebugMessageFromStringTable(const FString& InDebugStringTableKey, TEnumAsByte<ESBLocalize> InLocalizeType) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAddDebugMessage(const FString& InDebugString) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBActorTickDistance(float InDistance) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBActorRenderDistance(float InDistance) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBActorInfo(const FString& inActorName) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBActiveCamp(FName CampAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBActivateHint(FName inHintAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAcquireSkillAll(bool bProgressAchievement, bool bNewGamePlusSkill, bool bDroneSkill) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAcquireSkill(FName inAcquisitionSkillAlias, bool bProgressAchievement, bool bDonotConsumeSP) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SBAcquireQuest(FName QuestAlias) {};

    UFUNCTION(BlueprintCallable, Exec)
        void SB720p() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SB2160p() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SB1440p() {};

    UFUNCTION(BlueprintCallable, Exec)
        void SB1080p() {};

    UFUNCTION(BlueprintCallable, Exec)
        void ProfilePoint_F02(int32 Index) {};

    UFUNCTION(BlueprintCallable, Exec)
        void ProfilePoint_F01(int32 Index) {};

    UFUNCTION(BlueprintCallable, Exec)
        void ProfilePoint_E05(int32 Index) {};

    UFUNCTION(BlueprintCallable, Exec)
        void ProfilePoint_E03(int32 Index) {};

    UFUNCTION(BlueprintCallable, Exec)
        void ProfilePoint_C05(int32 Index) {};

};
