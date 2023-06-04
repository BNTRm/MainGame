// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlaceablesManager.generated.h"

UCLASS()
class MAINGAME_API APlaceablesManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlaceablesManager();

protected:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 BlockSize = 16;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	TArray<FVector> FindLocationsInBoxArea(FVector Center, FVector Extent) const;
};
