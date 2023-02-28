// Fill out your copyright notice in the Description page of Project Settings.


#include "VoxmanCharacter.h"

#include "InventoryComponent.h"

// Sets default values
AVoxmanCharacter::AVoxmanCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AVoxmanCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AVoxmanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HeadBoneLocation = this->GetMesh()->GetBoneLocation(HeadBoneName, EBoneSpaces::WorldSpace);
}

// Called to bind functionality to input
void AVoxmanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVoxmanCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void AVoxmanCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue);
}

