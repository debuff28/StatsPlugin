// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_BtComponent.h"
#include "GameFramework/Pawn.h"
#include "Runtime/AIModule/Classes/AIController.h"

// Sets default values for this component's properties
UAI_BtComponent::UAI_BtComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAI_BtComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAI_BtComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UAI_BtComponent::AI_CanActivate_Implementation()
{
	return false;
}

bool UAI_BtComponent::AI_Run_Implementation()
{
	if (PawnOwner&&BTAsset)
	{
		if (!Activated)
		{
			Activated = true;
			Cast<AAIController>(PawnOwner->GetController())->RunBehaviorTree(BTAsset);
		}
	}
	else
	{
		Activated = false;
	}
	return true;
}

bool UAI_BtComponent::AI_Stop_Implementation()
{
	Activated = false;
	return true;
}

