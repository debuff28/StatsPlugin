// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_HUD.h"
#include "TimerManager.h"
#include "AbilitiesComponent.h"
#include "Ability.h"
#include "StatsComponent.h"
#include "GameFramework/Pawn.h"

void AStats_HUD::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerHandle_getData;
	FTimerDynamicDelegate eventgetData;
	eventgetData.BindDynamic(this, &AStats_HUD::getData);
	GetWorldTimerManager().SetTimer(TimerHandle_getData, eventgetData, getDataPeriod, true);

}

void AStats_HUD::getData()
{
	TArray<FAbilities> FindedAbilities;
	if (GetOwningPawn())
	{
		UActorComponent* SComponent = GetOwningPawn()->GetComponentByClass(UStatsComponent::StaticClass());
		if (SComponent)
		{
			StatsComponent = Cast<UStatsComponent>(SComponent);
		}
		UActorComponent* AComponent = GetOwningPawn()->GetComponentByClass(UAbilitiesComponent::StaticClass());
		if (AComponent)
		{
			AbilityesComponent = Cast<UAbilitiesComponent>(AComponent);
			for (int i = 0; i <= AbilityesComponent->Abilities.Num()-1; i++)
			{
				if (AbilityesComponent->Abilities[i])
				{
					FAbilities findedAbility;
					findedAbility.ID = i;
					findedAbility.Ability = AbilityesComponent->Abilities[i];
					FindedAbilities.Add(findedAbility);
				}
			}
	
		}
	}
	Abilities = FindedAbilities;
	
}
