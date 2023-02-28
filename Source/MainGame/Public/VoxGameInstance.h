// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VoxGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MAINGAME_API UVoxGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FString GameVersion = TEXT("v0.0.0.0");

public:

};
