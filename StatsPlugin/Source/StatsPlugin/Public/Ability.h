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

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAbility : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbility();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		EAbilityType AbilityType;


	//����
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
		TArray<FGameplayTag> AbilityBreakTriggerTags;



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		FAbilityCooldown CooldownRule;


	//��������
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float CastingDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float ActionDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float FinishDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingCastingDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingActionDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingActionFinishDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingFinishDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		TArray<FStatsAffectingParameters> AbilityTimingsAffectingParameters;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityStatus")
		float ActivateReturneTime = 0.0f;


	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		UStatsComponent* StatsComponent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsMarkToDeactivate;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsTryMarkToDeactivate;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsMarkToCansel;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsCooldown;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsCasting;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsAction;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingCasting;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingAction;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingActionFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsActivated;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float CooldownTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float CooldownPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float CastingTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingCastingTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ActionTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingActionTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingActionFinishTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float FinishTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingFinishTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float CastingPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingCastingPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ActionPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingActionPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingActionFinishPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float FinishPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChanelingFinishPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		FDateTime ActivationTime;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsCanFinished;

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
		void StartCasting();

	UFUNCTION()
		void StartAction();

	UFUNCTION()
		void FinishAction();

	UFUNCTION()
		void StartChanelingCasting();

	UFUNCTION()
		void StartChanelingAction();

	UFUNCTION()
		void StartFinishChanelingAction();

	UFUNCTION()
		void FinishChaneling();

	UFUNCTION()
		void StartCharge();

	UFUNCTION()
		void FinishCharge();


	UFUNCTION()
		float CalculateSpeedOnAffectingParameters(float CurrentDeltaTime, TArray<FStatsAffectingParameters> affectingParameters);

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
		void OnOwnerStatModification(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue);

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnTargetStatModification(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue);


	UFUNCTION()
		void AnotherAbilityActivated(UAbility* ActivatedAbility);
	UFUNCTION()
		void OwnerStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue);
	UFUNCTION()
		void TargetStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue);
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
