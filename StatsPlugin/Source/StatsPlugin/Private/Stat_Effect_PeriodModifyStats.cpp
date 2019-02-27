// Fill out your copyright notice in the Description page of Project Settings.

#include "Stat_Effect_PeriodModifyStats.h"

#include "StatsComponent.h"
#include "TimerManager.h"



void AStat_Effect_PeriodModifyStats::Client_StartWork_Implementation()
{
	StartEffect();
	if(StartEffect_Multicast.IsBound())
		StartEffect_Multicast.Broadcast();
}


void AStat_Effect_PeriodModifyStats::StartWorkServer()
{
	Super::StartWorkServer();
	if (StartEffect_Server.IsBound())
		StartEffect_Server.Broadcast();

	if (GetNetMode() != NM_Client)
	{
		//FTimerManager timer;
		FTimerHandle TimerHandle_ApplyModificator;
		FTimerDynamicDelegate eventApplyModificator;
		eventApplyModificator.BindDynamic(this, &AStat_Effect_PeriodModifyStats::ApplyModificators);
		GetWorldTimerManager().SetTimer(TimerHandle_ApplyModificator, eventApplyModificator, ApplyModificatorsPeriod, true);
		
	}
}

void AStat_Effect_PeriodModifyStats::ApplyModificators()
{

	UStatsComponent* StatComponent = (UStatsComponent*)ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
	if (StatComponent)
	{
		for (FStatsModifications statsMod : StatsModifications)
		{
			bool WasModified = false;
			//Вызываем функцию модификации на удаленном компоненте статов
			float delta = 0;
			float newValue = 0;
			FGameplayTag ModifiedStat;

			/** Модицикация стата
			float delta = значение на которое изменился стат
			float newValue = новое значение стата
			FGameplayTag ModifiedStat = какой стат в итоге поменялся
			*/
			StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue, statsMod.ChangeType, statsMod.ValueType, statsMod.AffectingStats, WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);



			
		}
	}
}


void AStat_Effect_PeriodModifyStats::FinishServer()
{
	Super::FinishServer();
	if(FinishEffect_Server.IsBound())
		FinishEffect_Server.Broadcast();

	
	this->K2_DestroyActor();
	//GetWorld()->ForceGarbageCollection(true);
	
}

void AStat_Effect_PeriodModifyStats::FinishAll_Implementation()
{
	FinishEffect();
	if(FinishEffect_Multicast.IsBound())
		FinishEffect_Multicast.Broadcast();
	
	
}