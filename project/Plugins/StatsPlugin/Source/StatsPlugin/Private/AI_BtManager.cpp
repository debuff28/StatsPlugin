// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_BtManager.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "AI_BtComponent.h"

// Sets default values for this component's properties
UAI_BtManager::UAI_BtManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAI_BtManager::BeginPlay()
{
	Super::BeginPlay();
	PawnOwner = Cast<APawn>(GetOwner());
	if (PawnOwner)
	{
		if (BT_ComponentsClasses.Num() > 0)
		{
			for (TSubclassOf<class UAI_BtComponent> BtClass : BT_ComponentsClasses)
			{
				UAI_BtComponent* NewBtComponent = (UAI_BtComponent*)NewObject<UActorComponent>(GetOwner(), *BtClass);
				if (NewBtComponent != nullptr)
				{
					NewBtComponent->RegisterComponent();
					NewBtComponent->PawnOwner = PawnOwner;
					BT_Components.Add(NewBtComponent);
				}
			}
			if (GetNetMode() != NM_Client)
			{
				FTimerHandle TimerHandle_FindAvailableBT;
				FTimerDynamicDelegate eventFindAvailableBT;
				eventFindAvailableBT.BindDynamic(this, &UAI_BtManager::FindAvailableBT);
				GetOwner()->GetWorldTimerManager().SetTimer(TimerHandle_FindAvailableBT, eventFindAvailableBT, FindAvailableBT_Period, true);
			}
		}
	}
}


// Called every frame
void UAI_BtManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAI_BtManager::FindAvailableBT()
{
	TArray<UAI_BtComponent*> AvailableBT_Components;
	AvailableBT_Components.Empty();
	for (UAI_BtComponent* BtComponent : BT_Components)
	{
		if (BtComponent->AI_CanActivate())
		{
			AvailableBT_Components.Add(BtComponent);
		}
	}
	if (AvailableBT_Components.Num() > 0)
	{
		
		int32 id = FMath::RandRange(0, AvailableBT_Components.Num() - 1);
		if (AvailableBT_Components.IsValidIndex(id))
		{
			ActivatedComponent = AvailableBT_Components[id];
			if (ActivatedComponent)
			{
				
				for (UAI_BtComponent* BtComponent : BT_Components)
				{
					if (ActivatedComponent != BtComponent)
					{
						BtComponent->AI_Stop();
					}
				}
				ActivatedComponent->AI_Run();
			}
		}
	}
}

