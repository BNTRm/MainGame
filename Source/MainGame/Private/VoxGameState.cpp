// Fill out your copyright notice in the Description page of Project Settings.


#include "VoxGameState.h"

float AVoxGameState::precision(float Num, int32 Decimals) const
{
	const int32 Multiplier = pow(10, Decimals);
	return floor(Num * Multiplier) / Multiplier;
}
