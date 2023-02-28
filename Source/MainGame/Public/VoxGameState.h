// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "VoxGameState.generated.h"

/**
 * 
 */
UCLASS()
class MAINGAME_API AVoxGameState : public AGameState
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="World")
	int32 BlockSize = 64;

	UFUNCTION(BlueprintPure, Category="World")
	int32 convertWorldToGameCoord(int32 WorldCoord) const { return WorldCoord / BlockSize; }
	
	UFUNCTION(BlueprintPure, Category="World")
	int32 convertGameToWorldCoord(int32 GameCoord) const { return GameCoord * BlockSize; }

public:

	UFUNCTION(BlueprintPure, Category="World")
	int32 getBlockSize() const { return BlockSize; }

	UFUNCTION(BlueprintPure, Category="Math")
	float precision(float Num, int32 Decimals = 3) const;
	
	
};
