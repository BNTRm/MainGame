// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VoxmanCharacter.generated.h"

UCLASS(Blueprintable)
class MAINGAME_API AVoxmanCharacter : public ACharacter
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FName HeadBoneName;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FVector HeadBoneLocation;
	
public:
	// Sets default values for this character's properties
	AVoxmanCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveForward(float AxisValue);
	virtual void MoveRight(float AxisValue);
};
