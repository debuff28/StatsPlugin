// Fill out your copyright notice in the Description page of Project Settings.

#include "Ability.h"
#include "Stats_Effect_Base.h"
#include "StatsComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"

// Sets default values for this component's properties
UAbility::UAbility()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
}


// Called when the game starts
void UAbility::BeginPlay()
{
	Super::BeginPlay();


	if (GetNetMode() != NM_Client)
	{
		StatsComponent = (UStatsComponent*)GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
		if (StatsComponent)
		{
			StatsComponent->OnStatChange.AddDynamic(this, &UAbility::OwnerStatChanged);
			StatsComponent->OnMyEffectApplicated.AddDynamic(this, &UAbility::OwnerEffectAplicated);
			StatsComponent->OnEffectApplicated.AddDynamic(this, &UAbility::AnotherActorEffectAplicated);
			StatsComponent->OnMyEffectRemoved.AddDynamic(this, &UAbility::OwnerEffectRemoved);
			StatsComponent->OnEffectRemoved.AddDynamic(this, &UAbility::AnotherActorEffectRemoved);
		}
	}
	// ...
	
}


// Called every frame
void UAbility::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (GetNetMode() != NM_Client)
	{
		if (IsCooldown)
		{
			CooldownTimePassed += CalculateCooldownSpeed(DeltaTime);
			CooldownPercent = FMath::Clamp(CooldownTimePassed / CooldownRule.CooldownDuration, 0.0f, 1.0f);
			if (CooldownTimePassed >= CooldownRule.CooldownDuration)
			{
				IsCooldown = false;
				CooldownIsFinished();

			}
			//CooldownRule.AffectingStats
		}
	}
	// ...
}


///////////////////////////////////////////////////////////////////////////
//активация абилки
///////////////////////////////////////////////////////////////////////////

//пытаемся запустить абилку
bool UAbility::TryActivateAbility(TArray<FGameplayTag> CurrentTags)
{


	//если нет тегов блочащих абилку запускаем активацию.
	if (!IsCooldown)
	{
		if (CurrentTags.Num() > 0)
		{
			TArray<FGameplayTag> AbilitiesTags = CurrentTags;
			if (AbilityActivateBlockingTags.Num() > 0)
			{
				if (!FGameplayTagContainer::CreateFromArray(AbilityActivateBlockingTags).HasAny(FGameplayTagContainer::CreateFromArray(AbilitiesTags)))
				{
					//проверяем требования для активации
					bool RequirementsCompleted = false;
					if (AbilityActivateRequirementTags.Num() > 0)
					{
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateRequirementTags).HasAny(FGameplayTagContainer::CreateFromArray(AbilitiesTags)))
						{
							RequirementsCompleted = true;
						}
					}
					else
					{
						RequirementsCompleted = true;
					}
					//если требования выполнены запускаем спелл
					if (RequirementsCompleted)
					{
						ActivateAbility();
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			//блокирующих условий нет
			else
			{
				ActivateAbility();
				return true;
			}
		}
		//не получили тэгов
		else
		{
			//абилка требует тэги для активации 
			if (AbilityActivateRequirementTags.Num() > 0)
			{
				return false;
			}
			//абилка не требует тэги для активации можно юзать =)
			else
			{
				ActivateAbility();
				return true;
			}
		}
	}
	else
	{
		return false;
	}

}
//запустили абилку
void UAbility::ActivateAbility()
{
	IsActivated = true;
	ActivateEffects();
	AbilityActivated();

	TryStartCooldown(false);

	if (OnAbilityActivated.IsBound())
	{
		OnAbilityActivated.Broadcast(this);
	}
}




//активирует эффекты
void UAbility::ActivateEffects()
{
	if (AbilityActivateEffectsTags.Num() > 0)
	{
		for (TActorIterator<AStats_Effect_Base> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AStats_Effect_Base *Effect = *ActorItr;
			if (Effect->GetOwner())
			{
				if (Effect->GetOwner() == GetOwner())
				{
					if (Effect->EffectInfoTag.Num() > 0)
					{
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateEffectsTags).HasAny(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
						{
							Effect->ActivateEffectAll();
						}
					}
					
				}
			}
		}
	}

}

///////////////////////////////////////////////////////////////////////////
//деактивация абилки
///////////////////////////////////////////////////////////////////////////

//пытаемся выключить абилку
bool UAbility::TryDeactivateAbility()
{
	if (IsActivated)
	{
		DeactivateAbility();
		return true;
	}
	else
	{
		return false;
	}
}
//выключили абилку
void UAbility::DeactivateAbility()
{
	IsActivated = false;
	DeactivateEffects();
	AbilityDeactivated();
	TryStartCooldown(true);
	if (OnAbilityDeactivated.IsBound())
	{
		OnAbilityDeactivated.Broadcast(this);
	}
}
//деактивирует эффекты
void UAbility::DeactivateEffects()
{
	if (AbilityActivateEffectsTags.Num() > 0)
	{
		for (TActorIterator<AStats_Effect_Base> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AStats_Effect_Base *Effect = *ActorItr;
			if (Effect->GetOwner())
			{
				if (Effect->GetOwner() == GetOwner())
				{
					if (Effect->EffectInfoTag.Num() > 0)
					{
						if (FGameplayTagContainer::CreateFromArray(AbilityActivateEffectsTags).HasAny(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
						{
							Effect->DeactivateEffectAll();
						}
					}
				}
			}
		}
	}
}


///////////////////////////////////////////////////////////////////////////
//другие абилки
///////////////////////////////////////////////////////////////////////////

//включилась другая абилка
void UAbility::AnotherAbilityActivated(UAbility* ActivatedAbility)
{
	OnAnotherAbilityActivation(ActivatedAbility);
		if (ActivatedAbility->AbilityTags.Num() > 0)
		{
			if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(ActivatedAbility->AbilityTags)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(ActivatedAbility->AbilityTags));
		}
}
//владелец абилки получил изменение статов
void UAbility::OwnerStatChanged(FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange)
{		
	OnStatModification(tag, AdditinsTags, deltaChange);
	FGameplayTagContainer TempContainer = AdditinsTags;
	TempContainer.AddTag(tag);
	if (!DeactivateAbilityByTrigger(TempContainer))
			ActivateAbilityByTrigger(TempContainer);
}

///////////////////////////////////////////////////////////////////////////
//другие эффекты
///////////////////////////////////////////////////////////////////////////

//чей-то эффект применился на владельца абилка
void UAbility::AnotherActorEffectAplicated(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnAnotherActorEffectAplicated(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}
//мой эффект применился на кого то
void UAbility::OwnerEffectAplicated(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnOwnerEffectAplicated(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}
//чей-то эффект снялся
void UAbility::AnotherActorEffectRemoved(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnAnotherActorEffectRemoved(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}
//мой эффект снялся
void UAbility::OwnerEffectRemoved(AStats_Effect_Base * Effect, AActor * EffectOnActor)
{
	OnOwnerEffectRemoved(Effect, EffectOnActor);
	if (Effect->EffectInfoTag.Num() > 0)
	{
		if (!DeactivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag)))
			ActivateAbilityByTrigger(FGameplayTagContainer::CreateFromArray(Effect->EffectInfoTag));
	}
}

///////////////////////////////////////////////////////////////////////////
//Активация/деактивация по триггерам
///////////////////////////////////////////////////////////////////////////
bool UAbility::ActivateAbilityByTrigger(FGameplayTagContainer Tags)
{
	bool activated = false;
	if (AbilityActivateTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityActivateTriggerTags).HasAny(Tags))
		{
			activated = TryActivateAbility(GetAbilitiesTags());
			if (activated)
			{
				AbilityActivatedByTrigger();
			}
		}
	}
	return activated;
}

bool UAbility::DeactivateAbilityByTrigger(FGameplayTagContainer Tags)
{
	bool deactivated = false;
	if (AbilityDeactivateTriggerTags.Num() > 0)
	{
		if (FGameplayTagContainer::CreateFromArray(AbilityDeactivateTriggerTags).HasAny(Tags))
		{
			deactivated = TryDeactivateAbility();
			if (deactivated)
			{
				AbilityDeactivatedByTrigger();
			}
		}
	}
	return deactivated;
}


///////////////////////////////////////////////////////////////////////////
//Перезарядка
///////////////////////////////////////////////////////////////////////////

void UAbility::TryStartCooldown(bool CallAfterAbilityFinish)
{
	switch (CooldownRule.Rule)
	{
	case EAbilityRearmRule::ARR_NoRearm :

		break;
	case EAbilityRearmRule::ARR_RearmAfterAbilityFinishWork:
		if (CallAfterAbilityFinish)
		{

			CooldownTimePassed = 0;
			CooldownPercent = 0;
			IsCooldown = true;
			CooldownIsStarted();
		}
		break;
	case EAbilityRearmRule::ARR_RearmAfterAbilityStartWork:
		if (!CallAfterAbilityFinish)
		{

			CooldownTimePassed = 0;
			CooldownPercent = 0;
			IsCooldown = true;
			CooldownIsStarted();
		}
		break;
	default:
		break;
	}

}


float UAbility::CalculateCooldownSpeed(float CurrentDeltaTime)
{
	float CooldownSpeed = CurrentDeltaTime;
	for (FStatsAffectingParameters AffectingStat : CooldownRule.AffectingStats)
	{
		if (StatsComponent->Stats.Contains(AffectingStat.affectingStatTag))
		{
			float mod = StatsComponent->Stats.FindRef(AffectingStat.affectingStatTag).GetValue(AffectingStat.affectingValue)*AffectingStat.affectingMultiplier;
			if (mod != 0) {
				switch (AffectingStat.affectingType)
				{
				case EStatChangeType::SCT_Add:
					CooldownSpeed = CooldownSpeed + mod;
					break;
				case EStatChangeType::SCT_Sub:
					CooldownSpeed = CooldownSpeed - mod;
					break;
				case EStatChangeType::SCT_Multiply:
					CooldownSpeed = CooldownSpeed * mod;
					break;
				case EStatChangeType::SCT_Divide:
					CooldownSpeed = CooldownSpeed / mod;
					break;
				case EStatChangeType::SCT_AddPercent:
					CooldownSpeed = CooldownSpeed + ((CooldownSpeed / 100) * mod);
					break;
				case EStatChangeType::SCT_SubtractPercent:
					CooldownSpeed = CooldownSpeed - ((CooldownSpeed / 100) * mod);
					break;
				default:
					break;
				}
			}
		}
	}

	return CooldownSpeed;
}





///////////////////////////////////////////////////////////////////////////
//Получаем список тегов абилок
///////////////////////////////////////////////////////////////////////////

TArray<FGameplayTag> UAbility::GetAbilitiesTags()
{
	TArray<FGameplayTag> AbilitiesTags;
	TArray<UActorComponent*> FindedComponents = GetOwner()->GetComponentsByClass(UAbility::StaticClass());
	if (FindedComponents.Num() > 0)
	{
		for (UActorComponent* Component : FindedComponents)
		{
			UAbility* ability = Cast<UAbility>(Component);
			if (ability)
			{
				AbilitiesTags.Append(ability->AbilityTags);
				if (ability->IsActivated)
				{
					AbilitiesTags.Append(ability->OnActivatedAbilityTags);
				}
			}
		}
	}
	return AbilitiesTags;
}


void UAbility::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(UAbility, CooldownPercent);
	DOREPLIFETIME(UAbility, CooldownTimePassed);
	DOREPLIFETIME(UAbility, IsActivated);
	DOREPLIFETIME(UAbility, IsCooldown);
}