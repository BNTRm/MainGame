// Fill out your copyright notice in the Description page of Project Settings.


#include "VoxmanPlayerController.h"

#include "VoxmanCharacter.h"

void AVoxmanPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//InputComponent->BindAxis("Move Forward / Backward", Cast<AVoxmanCharacter>(this->GetCharacter()), &AVoxmanCharacter::MoveForward);
	//InputComponent->BindAxis("Move Right / Left", Cast<AVoxmanCharacter>(this->GetCharacter()), &AVoxmanCharacter::MoveRight);
}
