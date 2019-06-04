// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilitiesComponent.h"
#include "Ability.h"
#include "Stats_Effect_Base.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "AI_Sight.h"

// Sets default values for this component's properties
UAbilitiesComponent::UAbilitiesComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
}


// Called when the game starts
void UAbilitiesComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if (AI)
	{
		if (GetNetMode() != NM_Client)
		{

			AI_GetValidAbilities();

			FTimerHandle TimerHandle_AiAbilities;
			FTimerDynamicDelegate eventAiAbilities;
			eventAiAbilities.BindDynamic(this, &UAbilitiesComponent::AI_GetValidAbilities);
			GetOwner()->GetWorldTimerManager().SetTimer(TimerHandle_AiAbilities, eventAiAbilities, AI_CheckAbilitiesPeriod, true);


		}
	}
}

void UAbilitiesComponent::AI_GetValidAbilities()
{
	bool CanActivateNewAbility = false;
	if (AI_CurrentAbily)
	{
		if (FDateTime::Now().operator-(AI_CurrentAbily->DeactivationTime).GetTotalSeconds() > (AI_PauseBetweenAbilities))
		{
			CanActivateNewAbility = true;
			AI_CurrentAbily = NULL;
		}

	}
	else
	{
		CanActivateNewAbility = true;
	}

	if (CanActivateNewAbility)
	{
		TArray<UAbility*> AI_FoundedAbilities;
		AI_FoundedAbilities.Empty();

		if (Abilities.Num() > 0)
		{
			TArray<FGameplayTag> Tags = GetAbilitiesAndEffectsTags();
			for (UAbility* Ability : Abilities)
			{
				bool CanActivate = false;
				Ability->AI_CanActivate(FGameplayTagContainer::CreateFromArray(Tags), CanActivate);
				if (CanActivate)
				{
					AI_FoundedAbilities.Add(Ability);
				}
			}
		}

		if (AI_AutoActivateByComponent)
		{
			if (AI_FoundedAbilities.Num() > 0)
			{
				int32 id = 0;
				if (AI_RandomUseValidAbilities)
				{
					id = FMath::RandRange(0, AI_FoundedAbilities.Num() - 1);
				}

				if (AI_FoundedAbilities.IsValidIndex(id))
				{

					TArray<FGameplayTag> Tags = GetAbilitiesAndEffectsTags();
					if (AI_FoundedAbilities[id]->TryActivateAbility(Tags, false))
					{
						AI_CurrentAbily = Abilities[id];
					}

				}
			}
		}
		else
		{
			AI_CurrentValidAbilities = AI_FoundedAbilities;
		}
		
	}
}


// Called every frame
void UAbilitiesComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	// ...
}

void UAbilitiesComponent::AddAbility(TSubclassOf<UAbility> AbilityClass, int32 id, bool& SuccessfullyAdded)
{
	AActor* pActor = GetOwner();
	UAbility* NewAbility = (UAbility*)NewObject<UActorComponent>(pActor, *AbilityClass);
	if (NewAbility != nullptr)
	{
		NewAbility->RegisterComponent();
		NewAbility->SetIsReplicated(true);
		NewAbility->OnAbilityActivated.AddDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
		NewAbility->OnCustomTrigger.AddDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
		if (Abilities.Num() - 1 < id)
		{
			Abilities.SetNum(id);
			Abilities.Insert(NewAbility, id);
			
		}
		else
		{
			if (Abilities[id] != nullptr)
			{
				UAbility* OldAbility = Abilities[id];
				Abilities[id] = NewAbility;
				OldAbility->OnAbilityActivated.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
				OldAbility->OnCustomTrigger.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
				OldAbility->TryDestroyAbility(false);
			}
			else
			{
				Abilities[id] = NewAbility;
			}
		}

		if (OnAbilityAdded.IsBound())
		{
			OnAbilityAdded.Broadcast(NewAbility, id);
		}

		SuccessfullyAdded = true;
	}
	else
	{
		SuccessfullyAdded = false;
	}
}

void UAbilitiesComponent::RemoveAbility(UAbility* Ability, bool& SuccessfullyRemoved)
{
	SuccessfullyRemoved = false;
	TArray<UAbility*> AbilityesForRemove;
	AbilityesForRemove.Empty();
	for (UAbility* CurrentAbility : Abilities)
	{
		if (CurrentAbility)
		{
			if (CurrentAbility == Ability)
			{
				AbilityesForRemove.Add(CurrentAbility);
				CurrentAbility->OnAbilityActivated.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
				CurrentAbility->OnCustomTrigger.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
				CurrentAbility->TryDestroyAbility(false);
				SuccessfullyRemoved = true;
			}
		}
	}
	for (UAbility* AbilityForRemove : AbilityesForRemove)
	{
		Abilities[Abilities.IndexOfByKey(AbilityForRemove)] = nullptr;
	}
	AbilityesForRemove.Empty();
}


void UAbilitiesComponent::RemoveAbilitiesByClass(TSubclassOf<UAbility> AbilityClass, bool & SuccessfullyRemoved)
{
	SuccessfullyRemoved = false;
	TArray<UAbility*> AbilityesForRemove;
	AbilityesForRemove.Empty();
	for (UAbility* CurrentAbility : Abilities)
	{
		if (CurrentAbility)
		{
			if (CurrentAbility->GetClass() == AbilityClass)
			{
				AbilityesForRemove.Add(CurrentAbility);
				CurrentAbility->OnAbilityActivated.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
				CurrentAbility->OnCustomTrigger.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
				CurrentAbility->TryDestroyAbility(false);
				SuccessfullyRemoved = true;
			}
		}
	}
	for (UAbility* AbilityForRemove : AbilityesForRemove)
	{
		Abilities[Abilities.IndexOfByKey(AbilityForRemove)] = nullptr;
	}
	AbilityesForRemove.Empty();
}


void UAbilitiesComponent::RemoveAbilityByID(int32 ID, bool & SuccessfullyRemoved)
{
	SuccessfullyRemoved = false;
	if (Abilities.IsValidIndex(ID))
	{
		

		if (Abilities[ID]!=nullptr)
		{
			

			UAbility* CurrentAbility = Abilities[ID];
			Abilities[ID] = nullptr;
			CurrentAbility->OnAbilityActivated.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
			CurrentAbility->OnCustomTrigger.RemoveDynamic(this, &UAbilitiesComponent::AbilityWasActivated);
			CurrentAbility->TryDestroyAbility(false);
			SuccessfullyRemoved = true;
		}
	}
}



void UAbilitiesComponent::TryActivateAbilityByID(int32 id, bool & SuccessfullyActivated, UAbility*& ActivatedAbility)
{
	
	if(Abilities.IsValidIndex(id))
	{
		if (Abilities[id])
		{
			TArray<FGameplayTag> Tags = GetAbilitiesAndEffectsTags();
			SuccessfullyActivated = Abilities[id]->TryActivateAbility(Tags, false);
			if (SuccessfullyActivated)
				ActivatedAbility = Abilities[id];
		}
		else
		{
			SuccessfullyActivated = false;
		}
	}
	else
	{
		SuccessfullyActivated = false;
	}
}

void UAbilitiesComponent::TryDeactivateAbilityByID(int32 id, bool & SuccessfullyDeactivated, UAbility*& DeactivatedAbility)
{
	if (Abilities.IsValidIndex(id))
	{
		if (Abilities[id])
		{
			SuccessfullyDeactivated = Abilities[id]->TryDeactivateAbility(false);
			if (SuccessfullyDeactivated)
				DeactivatedAbility = Abilities[id];
		}
		else
		{
			SuccessfullyDeactivated = false;
		}
	}
	else
	{
		SuccessfullyDeactivated = false;
	}
}

void UAbilitiesComponent::TrBreakAbilityByID(int32 id, bool & SuccessfullyBreaked, UAbility *& BreakedAbility)
{
	if (Abilities.IsValidIndex(id))
	{
		if (Abilities[id])
		{
			SuccessfullyBreaked = Abilities[id]->TryBreakAbility(false);
			if (SuccessfullyBreaked)
				BreakedAbility = Abilities[id];
		}
		else
		{
			SuccessfullyBreaked = false;
		}
	}
	else
	{
		SuccessfullyBreaked = false;
	}
}

void UAbilitiesComponent::TryActivateAbilityByClass(TSubclassOf<UAbility> AbilityClass, bool & SuccessfullyActivated)
{
}

void UAbilitiesComponent::TryDeactivateAbilityByClass(TSubclassOf<UAbility> AbilityClass, bool & SuccessfullyDeactivated)
{
}

void UAbilitiesComponent::GetActivatedAbility(bool & HasActivatedAbility, int32 & ID)
{
	ID = -1;
	HasActivatedAbility = false;
	for (UAbility* Ability : Abilities)
	{
		if (Ability)
		{
			if (Ability->AbilityType != EAbilityType::AT_Passive)
			{
				if (Ability->IsActivated)
				{
					ID = Abilities.Find(Ability);
					HasActivatedAbility = true;
					break;
				}
			}
		}
	}

}

void UAbilitiesComponent::CanActivateAnyAbility(TArray<int32> AbilitiesIds, bool & CanActivate)
{
	TArray<FGameplayTag> tags = GetEffectsTags();
	CanActivate = false;


	for (int32 Abilityid : AbilitiesIds)
	{
		if(Abilities.IsValidIndex(Abilityid))
		if (Abilities[Abilityid])
		{
			bool LocalCanActivate = false;
			Abilities[Abilityid]->IsCanActivate(FGameplayTagContainer::CreateFromArray(tags), CanActivate);
			if (LocalCanActivate)
			{
				CanActivate = true;
				break;
			}
		}
	}

}

void UAbilitiesComponent::TryActivateAbilityByTag(FGameplayTag AbilityTag, bool & SuccessfullyActivated)
{
}

void UAbilitiesComponent::TryDeactivateAbilityByTag(FGameplayTag AbilityTag, bool & SuccessfullyDeactivated)
{
}



TArray<FGameplayTag> UAbilitiesComponent::GetAbilitiesAndEffectsTags()
{
	TArray<FGameplayTag> AbilitiesAndEffectsTags;
	TArray<UActorComponent*> FindedComponents = GetOwner()->GetComponentsByClass(UAbility::StaticClass());
	if (FindedComponents.Num() > 0)
	{
		for (UActorComponent* Component : FindedComponents)
		{
			UAbility* ability = Cast<UAbility>(Component);
			if (ability)
			{
				AbilitiesAndEffectsTags.Append(ability->AbilityTags);
				if (ability->IsActivated)
				{
					AbilitiesAndEffectsTags.Append(ability->OnActivatedAbilityTags);
				}
			}
		}
	}
	if (GetOwner())
	{
		TArray<AActor*> ChildActors;
		ChildActors.Empty();
		this->GetOwner()->GetAttachedActors(ChildActors);
		for (AActor* ChildActor : ChildActors)
		{
			AStats_Effect_Base* EffectBase = Cast<AStats_Effect_Base>(ChildActor);
			if (EffectBase)
			{
				AbilitiesAndEffectsTags.Add(EffectBase->EffectTag);
				if (EffectBase->EffectInfoTag.Num() > 0)
				{
					AbilitiesAndEffectsTags.Append(EffectBase->EffectInfoTag);
				}
			}
		}
	}
	return AbilitiesAndEffectsTags;
}


TArray<FGameplayTag> UAbilitiesComponent::GetEffectsTags()
{
	TArray<FGameplayTag> EffectsTags;
	if (GetOwner())
	{
		TArray<AActor*> ChildActors;
		ChildActors.Empty();
		this->GetOwner()->GetAttachedActors(ChildActors);
		for (AActor* ChildActor : ChildActors)
		{
			AStats_Effect_Base* EffectBase = Cast<AStats_Effect_Base>(ChildActor);
			if (EffectBase)
			{
				EffectsTags.Add(EffectBase->EffectTag);
				if (EffectBase->EffectInfoTag.Num() > 0)
				{
					EffectsTags.Append(EffectBase->EffectInfoTag);
				}
			}
		}
	}

	return  EffectsTags;
}

void UAbilitiesComponent::AbilityWasActivated(UAbility* ActivatedAbility)
{
	TArray<UActorComponent*> FindedComponents = GetOwner()->GetComponentsByClass(UAbility::StaticClass());
	if (FindedComponents.Num() > 0)
	{
		for (UActorComponent* Component : FindedComponents)
		{
			UAbility* ability = Cast<UAbility>(Component);
			if (ability)
			{
				if (ability != ActivatedAbility)
				{
					ability->AnotherAbilityActivated(ActivatedAbility);
				}
			}
		}
	}
}



TArray<AStats_Effect_Base*> UAbilitiesComponent::GetOwnedEffects()
{
	TArray<AStats_Effect_Base*> FindedEffects;
	for (TActorIterator<AStats_Effect_Base> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AStats_Effect_Base *Effect = *ActorItr;
		if (Effect->GetOwner())
		{
			if (Effect->GetOwner() == GetOwner())
			{
				FindedEffects.Add(Effect);
			}
		}
	}
	return FindedEffects;
}

void UAbilitiesComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(UAbilitiesComponent, Abilities);
	
}