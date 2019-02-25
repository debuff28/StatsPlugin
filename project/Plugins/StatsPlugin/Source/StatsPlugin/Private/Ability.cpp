// Fill out your copyright notice in the Description page of Project Settings.

#include "Ability.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AAbility::AAbility()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	StatComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatComponent"));
}

// Called when the game starts or when spawned
void AAbility::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAbility::Tick(float DeltaTime)
{
	if (GetOwner())
	{
		if (OwnerStatComponent)
		{

		}
	}

	Super::Tick(DeltaTime);

}

bool AAbility::AbilityPress(AActor * ActionIniciator)
{
	return false;
}

bool AAbility::AbilityRelease(AActor * ActionIniciator)
{
	return false;
}
