// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilitiesComponent.h"
#include "Ability.h"
#include "Stats_Effect_Base.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"

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
				OldAbility->UnregisterComponent();
				OldAbility->DestroyComponent();
				OldAbility->SetActive(false);
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
				CurrentAbility->UnregisterComponent();
				CurrentAbility->DestroyComponent();
				CurrentAbility->SetActive(false);
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
				CurrentAbility->UnregisterComponent();
				CurrentAbility->DestroyComponent();
				CurrentAbility->SetActive(false);
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
			CurrentAbility->UnregisterComponent();
			CurrentAbility->DestroyComponent();
			CurrentAbility->SetActive(false);
			
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
			TArray<FGameplayTag> abilityTags = GetAbilitiesTags();
			SuccessfullyActivated = Abilities[id]->TryActivateAbility(abilityTags);
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
			SuccessfullyDeactivated = Abilities[id]->TryDeactivateAbility();
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

void UAbilitiesComponent::TryActivateAbilityByClass(TSubclassOf<UAbility> AbilityClass, bool & SuccessfullyActivated)
{
}

void UAbilitiesComponent::TryDeactivateAbilityByClass(TSubclassOf<UAbility> AbilityClass, bool & SuccessfullyDeactivated)
{
}

void UAbilitiesComponent::TryActivateAbilityByTag(FGameplayTag AbilityTag, bool & SuccessfullyActivated)
{
}

void UAbilitiesComponent::TryDeactivateAbilityByTag(FGameplayTag AbilityTag, bool & SuccessfullyDeactivated)
{
}



TArray<FGameplayTag> UAbilitiesComponent::GetAbilitiesTags()
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

TArray<FGameplayTag> UAbilitiesComponent::GetEffectsTags()
{
	//TArray<> AbilitiesTags;

	return TArray<FGameplayTag>();
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