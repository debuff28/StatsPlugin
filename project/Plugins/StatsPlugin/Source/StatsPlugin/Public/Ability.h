// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "StatsComponent.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Ability.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityActivationDelegate, UAbility*, ActivatedAbility);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatModificationDelegate, FGameplayTag, tag, FGameplayTagContainer, AdditinsTags, float, deltaChange);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAbility : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbility();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> AbilityTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> OnActivatedAbilityTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> AbilityActivateEffectsTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> AbilityActivateRequirementTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> AbilityActivateBlockingTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> AbilityActivateTriggerTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FGameplayTag> AbilityDeactivateTriggerTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		FAbilityCooldown CooldownRule;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		UStatsComponent* StatsComponent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsCooldown;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsActivated;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float CooldownTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float CooldownPercent;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		bool TryActivateAbility(TArray<FGameplayTag> CurrentTags);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		bool TryDeactivateAbility();
	
	UFUNCTION()
		void ActivateAbility();

	UFUNCTION()
		float CalculateCooldownSpeed(float CurrentDeltaTime);

	UFUNCTION()
		void TryStartCooldown(bool CallAfterAbilityFinish);

	UFUNCTION()
		TArray<FGameplayTag> GetAbilitiesTags();

	UFUNCTION()
		bool ActivateAbilityByTrigger(FGameplayTagContainer Tags);

	UFUNCTION()
		bool DeactivateAbilityByTrigger(FGameplayTagContainer Tags);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void ActivateEffects();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void DeactivateEffects();

	UFUNCTION()
		void DeactivateAbility();


	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityActivated();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityActivatedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityDeactivated();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityDeactivatedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CooldownIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CooldownIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnAnotherAbilityActivation(UAbility* ActivatedAbility);

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnStatModification(FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange);


	UFUNCTION()
		void AnotherAbilityActivated(UAbility* ActivatedAbility);
	UFUNCTION()
		void OwnerStatChanged(FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange);
	UFUNCTION()
		void OwnerEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void AnotherActorEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void OwnerEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void AnotherActorEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnOwnerEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnAnotherActorEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnOwnerEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnAnotherActorEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor);


		
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnAbilityActivated;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnAbilityDeactivated;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnCustomTrigger;
	


	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
