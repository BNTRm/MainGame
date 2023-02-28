// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "VoxmanPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MAINGAME_API AVoxmanPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
};
