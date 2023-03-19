// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

float AMyGameMode::precision(float Num, int32 Decimals) const
{
	const int32 Multiplier = pow(10, Decimals);
	return floor(Num * Multiplier) / Multiplier;
}
