// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceablesManager.h"

// Sets default values
APlaceablesManager::APlaceablesManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlaceablesManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlaceablesManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<FVector> APlaceablesManager::FindLocationsInBoxArea(FVector Center, FVector Extent) const
{
	TArray<FVector> FoundLocations;

	const bool IsCenterNoShiftX = static_cast<int>(Center.X) % BlockSize == 0;
	const bool IsCenterNoShiftY = static_cast<int>(Center.Y) % BlockSize == 0;
	const bool IsCenterNoShiftZ = static_cast<int>(Center.Z) % BlockSize == 0;

	const int MinX = static_cast<int>(IsCenterNoShiftX ? Center.X - Extent.X : Center.X - Extent.X + BlockSize / 2);
	const int MaxX = static_cast<int>(IsCenterNoShiftX ? Center.X + Extent.X : Center.X + Extent.X - BlockSize / 2);

	const int MinY = static_cast<int>(IsCenterNoShiftY ? Center.Y - Extent.Y : Center.Y - Extent.Y + BlockSize / 2);
	const int MaxY = static_cast<int>(IsCenterNoShiftY ? Center.Y + Extent.Y : Center.Y + Extent.Y - BlockSize / 2);

	const int MinZ = static_cast<int>(IsCenterNoShiftZ ? Center.Z - Extent.Z : Center.Z - Extent.Z + BlockSize / 2);
	const int MaxZ = static_cast<int>(IsCenterNoShiftZ ? Center.Z + Extent.Z : Center.Z + Extent.Z - BlockSize / 2);

	for (int X = MinX; X <= MaxX; X += BlockSize)
	{
		for (int Y = MinY; Y <= MaxY; Y += BlockSize)
		{
			for (int Z = MinZ; Z <= MaxZ; Z += BlockSize)
			{
				FoundLocations.Push(FVector{static_cast<float>(X), static_cast<float>(Y), static_cast<float>(Z)});
			}
		}
	}

	return FoundLocations;
}

