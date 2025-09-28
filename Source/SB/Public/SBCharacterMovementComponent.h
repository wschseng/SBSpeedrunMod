// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SBCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup = Custom, Config = Game, meta = (BlueprintSpawnableComponent))
class SB_API USBCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainCheckFallFlagDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bLastCheckFall;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bCheckFallAtNoMoveInput;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector CustomFlyFollowLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector PreCustomFlyFollowLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FRotator CustomFlyFollowRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bCustomFlyPathFollowRotation2D;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CustomFlyMoveSpeedPow;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bCustomFlyFollowRotationVelocityBase;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bCustomFlyMoveDroneMode;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxClimbingSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxSlopeMoveSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxEventMoveSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxGrabMoveDefaultSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bEventMoveApplyGravity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float ApplyEventMoveGravityMoveTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float GravitiedAccelSpeedPerSec;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float GravitiedMaxEventMoveSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float EventMoveGravityCurrentMoveTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CurrentEventMoveRodAngleRadian;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float EventMoveRodArmLength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float EventMoveRodVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bBeginEventMoveRodAccel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector EventMoveRodPivot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector EventMoveRodVelocityForNormal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float EventMoveRodAccelInput;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector EventMoveSearchSideRodDir;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        int32 LastSideRodMoveDir;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        int32 LastSideRodMoveAnimIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector EventMoveRodOrigin;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxWallRunSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxFlyingActionSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float FlyingActionSideMoveAttenuation;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float FlyingActionVerticalMoveAttenuation;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float ChangeTargetFowardSensitive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bApplyCustomBuoyancyScaleAtFirstWaterTouch;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainBlockChangeSwimState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bFirstSwimStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainPenetrationDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector LastPenetrationDelta;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float HoldPenetrationDuration;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float HoldPenetrationSpeedPerSec;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float SwimUpDownTargetDepth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainCustomYawRateDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CustomYawRate;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxRunSpeedOverride;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxWalkSpeedOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MaxWalkSpeedLimit;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxGuardRunSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxLockOnRunSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxLockOnWalkSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float MaxJoggingRunSpeed;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float SprintBurstSpeedScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float SprintBurstDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainSprintBurstDuration;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float FallSlideControl;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float SprintSpeedScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float ExtraSprintSpeedScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float LockOnSprintSpeedScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float SprintJumpScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float NormalJumpScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float DoubleJumpScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float GlideGravityScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float FlyingActionGravityScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float WallRunGravityScale;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
        float GlideAirControlScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bDisablePerchRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bSliding;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        int32 SlidingValueDirBetweenVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveStruggleAnimAlpha;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bActiveMoveStruggleAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        int32 DisableMoveStruggleCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveSpeedScaleOnSliding;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float SlidingFriction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector SlidingForce;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float BackupMaxStepHeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bSlidingSlip;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector SlidingSlipCollisionNormal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainSlidingSlipCollisionNormal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CameraDownBoundBasedPhysicMat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainSlidingSlipAccelControlDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float SlidingSlipCurrentDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainMaxSpeedToWalkDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainHoldSlidingSlipDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bCompleteHoldSlidingSlip;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bFixedSlidingSlipDir;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bSwiming;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bDive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bTransitSwimBeetweenDive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CurrentSwimDepthValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MaxOverrideCustomMovementSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        TArray<UCurveFloat*> MoveSpeedScaleCache;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainCustomMoveScaleCurveDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CustomMoveScaleCurveDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainSwimAccelerationControlDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainHoldCurrentSprintVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float AdditiveWalkSpeedScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bDisableGravity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        UCurveFloat* CustomMoveScaleCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        UCurveFloat* WallRunGravityCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        UCurveFloat* JumpFallingGravityCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUseJumpFallingGravityCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float JumpFallingTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        UCurveFloat* RodDampingCurveFromAngleRadian;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        UCurveVector* FallToMoveCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUseFallToMoveCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float ComputeFloorSweepRadiusRate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bDisableRotationScaleOnPathWay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUseRotationScaleByAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinScaleByMoveAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUseRotationScaleByMinMaxAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinScaleByMinMaxAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMaxScaleByMinMaxAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinAngleMinMaxAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMaxAngleByMinMaxAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUseRotationScaleByVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinScaleByVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMaxScaleByVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinVelocityByVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMaxVelocityByVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUseRotationScaleByDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinScaleByDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMaxScaleByDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMinVelocityByDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationMaxVelocityByDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        bool bUsScaleRotationOvertime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float ScaleRotationStartTimeByOvertime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float ScaleRotationRateByOvertime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float ScaleRotationLimitRateByOvertime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float RotationForceScaleWhenBlocking;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        float GrabRotationLerpAlphaDefault;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainFallToMoveDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float FallToMoveSpeedScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector VelocityForFallToMove;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector TargetCharacterFoward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float TargetCharacterRotationPlayTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector TargetCharacterMotionVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector PathFollowingTargetLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector TargetSprintVelocityForward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector CurrentSprintVelocityForward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bUnlockSprintRotChange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector4 LastMoveDirectionWeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector TargetCharacterForceTurnFoward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FRotator TargetCharacterForceTurnRotationRate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector WallRunDir;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector WallRunNormal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector WallHitBounceDirectMove;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float WallHitBounceDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float WallHitBounceStartDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float WallHitBounceTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bDisableFalling;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bDisableSlopeMoving;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RequestDisableSlopeMovingDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float SlopeMoveMaxSpeedControlDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float SlopeMoveMaxSpeedBlendOutDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float RemainSlopeMoveMaxSpeedDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float ControledSlopeMoveMaxSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CurrentSlopeMaxMoveSpeed;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        //FSBActorRootMotionData RootMotionData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bDisableDesiredRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bTempDisableForwardVectorJump;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector PreviousActorLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float LastVelocityXAxis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float LastVelocityYAxis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float AnimGraphGetVelocityXAxis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float AnimGraphGetVelocityYAxis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bRunningMoveToLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bFinishMoveToLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationOverrideBrakingDist;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bMoveToLocationWaitFinishCustomAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bMoveToLocationUseSpeedAnimGraph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToTargetLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToBrakingEndLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToPrevActorLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToDirection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToLocationVector;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool MoveToLocationUseBraking;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool MoveToLocationFinishBraking;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        //TEnumAsByte<ESBMoveInputType> MoveToLocationBrakingInputType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationBrakingDistStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationBrakingDistEnd;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool MoveToLocationUseRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FRotator MoveToTargetRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToTargetRotationForward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationSpeedScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationOverrideAnimSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationLastAnimSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationEndAnimRetentionRemainTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool MoveToLocationManualStop;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveToLocationLastVector;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveToLocationLastScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector LastOnGroundLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        TEnumAsByte<EMovementMode> PreMovementMode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        uint8 PreCustomMovementMode;

    UPROPERTY(EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        uint32 RefreshFrameCountIgnoredCollisionActors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        TArray<AActor*> IgnoredCollisionActors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float InterpolationTimeAnimAcceleration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector InterpolationAnimAcceleration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CachedMaxSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bMoveAreaLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bMoveAreaLimitOutLocation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector MoveAreaLimitCenterPosition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float MoveAreaLimitDistance;

    UPROPERTY(EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        uint64 FallingToWalkingFrameCount;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        FVector BlendVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float BlendVelocityMaxTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        float CurrentBlendVelocityTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bOnceSlidingSlipAccelControlTimeZero;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
        bool bIsEnableParallelTick;
};
