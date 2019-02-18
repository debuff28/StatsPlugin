// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_Effect_OneTimeModifyStats.h"
#include "StatsComponent.h"

void AStats_Effect_OneTimeModifyStats::Client_StartWork_Implementation()
{
	if (StartEffect_Multicast.IsBound())
		StartEffect_Multicast.Broadcast();
}

void AStats_Effect_OneTimeModifyStats::StartWorkServer()
{
	Super::StartWorkServer();
	if (StartEffect_Server.IsBound())
		StartEffect_Server.Broadcast();


	UStatsComponent* StatComponent = (UStatsComponent*)ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
	if (StatComponent)
	{
		for (FStatsModifications statsMod : StatsModifications)
		{
			bool WasModified = false;
			//�������� ������� ����������� �� ��������� ���������� ������
			float delta = 0;
			float newValue = 0;
			FGameplayTag ModifiedStat;

			/** ����������� �����
			float delta = �������� �� ������� ��������� ����
			float newValue = ����� �������� �����
			FGameplayTag ModifiedStat = ����� ���� � ����� ���������
			*/
			StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue, statsMod.ChangeType, statsMod.ValueType, statsMod.AffectingStats, WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);



			if (WasModified)
			{
				FStatsModifications StatsModCashe;
				StatsModCashe.ChangeType = EStatChangeType::SCT_Sub;
				StatsModCashe.ModificationValue = delta;
				StatsModCashe.Stat = statsMod.Stat;
				StatsModCashe.ValueType = statsMod.ValueType;
				StatsModCashe.ClearChange = true;
				StatsModificationsCashe.Add(StatsModCashe);
			}
		}
	}
	
}


void AStats_Effect_OneTimeModifyStats::FinishServer()
{
	Super::FinishServer();
	if (FinishEffect_Server.IsBound())
		FinishEffect_Server.Broadcast();
	if (EffectModifyType == EEffectModifyType::EMT_Temporary)
	{
		UStatsComponent* StatComponent = (UStatsComponent*)ParentActor->GetComponentByClass(UStatsComponent::StaticClass());
		if (StatComponent)
		{
			for (FStatsModifications statsMod : StatsModificationsCashe)
			{
				bool WasModified = false;
				//�������� ������� ����������� �� ��������� ���������� ������
				float delta = 0;
				float newValue = 0;
				FGameplayTag ModifiedStat;

				/** ����������� �����
				float delta = �������� �� ������� ��������� ����
				float newValue = ����� �������� �����
				FGameplayTag ModifiedStat = ����� ���� � ����� ���������
				*/
				StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue, statsMod.ChangeType, statsMod.ValueType, statsMod.AffectingStats, WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);
				
			}
		}
	}

	this->K2_DestroyActor();
	//GetWorld()->ForceGarbageCollection(true);
}

void AStats_Effect_OneTimeModifyStats::FinishAll_Implementation()
{
	if (FinishEffect_Multicast.IsBound())
		FinishEffect_Multicast.Broadcast();
	
}