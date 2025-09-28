// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ESBZoneTriggerDoingType.generated.h"

UENUM(BlueprintType)
enum class ESBZoneTriggerDoingType : uint8 {
    Do_Interaction,
    Do_InRange,
    Do_Box,
};
