// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "StatsComponent.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Ability.generated.h"


//void addStat(FGameplayTag Stat, float CurrentValue, float MinValue, float MaxValue, float RegenValue, ERegenRule RegenRule, float RegenPauseLenght, bool StopOnMinValue);
USTRUCT(BlueprintType)
struct FAbilityAddStat
{
	GENERATED_USTRUCT_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		FGameplayTag Stat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float CurrentValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float MinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float MaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float RegenValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		ERegenRule RegenRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float RegenPauseLenght;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		bool StopOnMinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		bool IsMonitoringStat;
};



USTRUCT(BlueprintType)
struct FFinalAbilityCost
{
	GENERATED_USTRUCT_BODY()

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		FGameplayTag Stat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		EStatValueType ValueType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		EStatChangeType ChangeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		TArray<FGameplayTag> AdditionsTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		bool clear;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityActivationDelegate, UAbility*, ActivatedAbility);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatModificationDelegate, FGameplayTag, tag, FGameplayTagContainer, AdditinsTags, float, deltaChange);

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAbility : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbility();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig")
		EAbilityType AbilityType;


	//таги
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> OnActivatedAbilityTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityActivateEffectsTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityActivateRequirementTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityActivateBlockingTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityActivateTriggerTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityDeactivateTriggerTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Tags")
		TArray<FGameplayTag> AbilityBreakTriggerTags;



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Cooldown")
		FAbilityCooldown CooldownRule;


	//тайминги
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float CastingDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ActionDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float FinishDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ChanelingCastingDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ChanelingActionDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ChanelingActionFinishDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ChanelingFinishDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ChargeDuration = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float AbilityChannelingTimeLimit = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		TArray<FStatsAffectingParameters> AbilityTimingsAffectingParameters;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float ActivateReturneTime = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Resurce")
		TArray<FStatsModifications> StatsConsuption;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Resurce")
		TArray <FAbilityAddStat> AdditionStats;



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
		bool IsChannelingTimeOunt;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingCasting;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingAction;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingActionFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChanelingFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsCharging;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsChargingFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChargingTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChargingFinishedTimePassed;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		float ChargingPercent;

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
		float AbilityActivityTime;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		FDateTime ActivationTime;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsCanFinished = false;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsMarkToBreak = false;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsMarkToDestroy = false;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool deactivatedByTrigger = false;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool breakedByTrigger = false;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		TMap<FGameplayTag, float> MonitoringStats;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		bool TryActivateAbility(TArray<FGameplayTag> CurrentTags, bool ByTrigger);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		bool TryDeactivateAbility(bool ByTrigger);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		bool TryBreakAbility(bool ByTrigger);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void TryDestroyAbility(bool force);

	UFUNCTION()
		virtual void DestroyAbility();
	
	UFUNCTION()
		virtual void ActivateAbility(bool ByTrigger);

	UFUNCTION()
		virtual void StartCasting();

	UFUNCTION()
		virtual void StartAction();

	UFUNCTION()
		virtual void FinishAction();

	UFUNCTION()
		virtual void StartChanelingCasting();

	UFUNCTION()
		virtual void StartChanelingAction();

	UFUNCTION()
		virtual void StartFinishChanelingAction();

	UFUNCTION()
		virtual void FinishChaneling();

	UFUNCTION()
		virtual void StartCharge();

	UFUNCTION()
		virtual void FinishCharge();

	UFUNCTION()
		virtual bool StatConsumption();

	UFUNCTION()
		float CalculateSpeedOnAffectingParameters(float CurrentDeltaTime, TArray<FStatsAffectingParameters> affectingParameters);

	UFUNCTION()
		void TryStartCooldown(bool CallAfterAbilityFinish);

	UFUNCTION()
		TArray<FGameplayTag> GetAbilitiesAndEffectsTags();

	UFUNCTION()
		bool ActivateAbilityByTrigger(FGameplayTagContainer Tags);

	UFUNCTION()
		bool DeactivateAbilityByTrigger(FGameplayTagContainer Tags);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		virtual void ActivateEffects();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		virtual void DeactivateEffects();

	UFUNCTION()
		virtual void DeactivateAbility(bool ByTrigger);

	UFUNCTION()
		virtual void BreakAbility(bool ByTrigger);

	

	

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityActivated();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityActivatedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityDeactivated();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityBreaked();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityDeactivatedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityBreakedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CooldownIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CooldownIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CastIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ActionIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingCastingIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingActionIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingActionIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ActionIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChargeIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChargeIsFinished();

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
		FAbilityActivationDelegate OnAbilityActivatedByTrigger;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnAbilityDeactivated;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnAbilityDeactivatedByTrigger;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnAbilityBreaked;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnAbilityBreakedByTrigger;
	UPROPERTY(BlueprintAssignable)
		FAbilityActivationDelegate OnCustomTrigger;
	

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
