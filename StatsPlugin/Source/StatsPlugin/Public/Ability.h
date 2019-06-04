// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "StatsComponent.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Engine/Texture2D.h"
#include "Ability.generated.h"



UENUM(BlueprintType)
enum class EAITagRule : uint8
{
	ATR_All				UMETA(DisplayName = "CheckAll"),
	ATR_Any				UMETA(DisplayName = "CheckAny"),

};

UENUM(BlueprintType)
enum class EAITarget : uint8
{
	AT_Enemy				UMETA(DisplayName = "Enemy"),
	AT_Friend				UMETA(DisplayName = "Frined"),


};

UENUM(BlueprintType)
enum class EAbilityPowerRule : uint8
{
	APR_UseOwnerParameters				UMETA(DisplayName = "UseOwnerParameters"),
	ATR_UseAbilityParameters			UMETA(DisplayName = "UseAbilityParameters"),
	ATR_UseBothParameters				UMETA(DisplayName = "UseBothParameters"),

};

USTRUCT(BlueprintType)
struct FAbilityPower
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		FGameplayTag Stat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		EStatChangeType AffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		EAbilityPowerRule Rule;
};



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
struct FAbilityAnimation
{
	GENERATED_USTRUCT_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		FGameplayTag AnimationTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityCost")
		float AnimationLength;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityVisual")
		FName AbilityName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityVisual")
		UTexture2D* AbilityIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig")
		EAbilityType AbilityType;


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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|AI|Tags")
		TArray<FGameplayTag> AI_AbilityRequirementTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|AI|Tags")
		EAITagRule AbilityRequirementTagsCheckRule;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|AI|Tags")
		TArray<FGameplayTag> AI_AbilityBlockingTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|AI|Tags")
		EAITagRule AbilityBlockingTagsCheckRule;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|AI")
		float AI_AbilityDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|AI")
		EAITarget AI_AbilityTarget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AbilityConfig|Cooldown")
		FAbilityCooldown CooldownRule;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation CastAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ActionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation FinishAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ChargeAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ChargeFinishAnimation;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ChannelingCastAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ChannelingActionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ChannelingActionFinishAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation ChannelingFinishAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Animation")
		FAbilityAnimation BreakedAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Usability")
		bool HoldToActivateAgain = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float CastingDuration = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityConfig|Timings")
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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityConfig|Timings")
		float PassiveActivationCheckPeriod = 0.5f;

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

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChargingTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChargingFinishedTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChargingPercent;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		bool IsActivated;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float CooldownTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float CooldownPercent = 1.0f;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float CastingTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingCastingTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ActionTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingActionTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingActionFinishTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float FinishTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingFinishTimePassed;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float CastingPercent;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingCastingPercent;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ActionPercent;

	UPROPERTY(BlueprintReadOnly,  Category = "AbilityStatus")
		float ChanelingActionPercent;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingActionFinishPercent;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float FinishPercent;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float ChanelingFinishPercent;

	UPROPERTY(BlueprintReadOnly, Category = "AbilityStatus")
		float AbilityActivityTime;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		FDateTime ActivationTime;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "AbilityStatus")
		FDateTime DeactivationTime;

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

	UPROPERTY()
		float Multiplier = 1.0f;
	UPROPERTY()
		float MultiplierCooldown = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityStatus")
		TArray <FStatsModifications> StatsModifications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityStatus")
		TArray<TSubclassOf<AStats_Effect_Base>> Effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityStatus")
		TArray<TSubclassOf<AStats_Effect_Base>> SelfEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityStatus")
		FAbilityPower AbilityCritChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityStatus")
		FAbilityPower AbilityCritPower;



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

	UFUNCTION(BlueprintImplementableEvent, Category = "AbilityActivation")
		bool ActivationCustomCheck();
		virtual bool ActivationCustomCheck_Implementation();


	UFUNCTION(NetMulticast, Reliable)
		void ActivateAbility(bool ByTrigger);
		virtual void ActivateAbility_Implementation(bool ByTrigger);

	UFUNCTION(NetMulticast, Reliable)
		void StartCasting();
		virtual void StartCasting_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void StartAction();
		virtual void StartAction_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void FinishAction();
		virtual void FinishAction_Implementation();


	UFUNCTION(NetMulticast, Reliable)
		void StartChanelingCasting();
		virtual void StartChanelingCasting_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void StartChanelingAction();
		virtual void StartChanelingAction_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void StartFinishChanelingAction();
		virtual void StartFinishChanelingAction_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void FinishChaneling();
		virtual void FinishChaneling_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void StartCharge();
		virtual void StartCharge_Implementation();

	UFUNCTION(NetMulticast, Reliable)
		void FinishCharge();
		virtual void FinishCharge_Implementation();

	UFUNCTION()
		virtual bool StatConsumption(bool checkOnly);

	UFUNCTION()
		virtual bool TryPlayAnimation(FAbilityAnimation animation);

	UFUNCTION()
		float CalculateSpeedOnAffectingParameters(float CurrentDeltaTime, TArray<FStatsAffectingParameters> affectingParameters);

	UFUNCTION()
		float CalculateAffectingParametersMultiplier(TArray<FStatsAffectingParameters> affectingParameters);

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

	UFUNCTION(Category = "AbilityAI", BlueprintNativeEvent, BlueprintCallable)
		void AI_CanActivate(FGameplayTagContainer CurrentTags, bool& IsCanActivate);
	    virtual void AI_CanActivate_Implementation(FGameplayTagContainer CurrentTags, bool& IsCanActivate);

	UFUNCTION(Category = "AbilityAI", BlueprintNativeEvent, BlueprintCallable)
		void IsCanActivate(FGameplayTagContainer CurrentTags, bool& IsCanActivate);
		virtual void IsCanActivate_Implementation(FGameplayTagContainer CurrentTags, bool& IsCanActivate);





	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void AbilityActivated();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityActivated_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void AbilityActivatedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityActivatedByTrigger_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void AbilityDeactivated();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityDeactivated_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void AbilityBreaked();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityBreaked_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void AbilityDeactivatedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityDeactivatedByTrigger_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void AbilityBreakedByTrigger();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void AbilityBreakedByTrigger_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void CooldownIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CooldownIsStarted_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void CooldownIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CooldownIsFinished_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void CastIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void CastIsStarted_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ActionIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ActionIsStarted_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ChannelingCastingIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingCastingIsStarted_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ChannelingActionIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingActionIsStarted_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ChannelingActionIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingActionIsFinished_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ChannelingIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChannelingIsFinished_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ActionIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ActionIsFinished_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ChargeIsStarted();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChargeIsStarted_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void ChargeIsFinished();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void ChargeIsFinished_server();

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnAnotherAbilityActivation(UAbility* ActivatedAbility);

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnOwnerStatModification(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue);

	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable, BlueprintAuthorityOnly)
		void OnTargetStatModification(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, float deltaChange, float NewValue);



	UFUNCTION()
		void AnotherAbilityActivated(UAbility* ActivatedAbility);
	UFUNCTION()
		void OwnerStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, FVector FromLocation, float deltaChange, float NewValue);
	UFUNCTION()
		void TargetStatChanged(AActor* ModificationIniciator, AActor* ModificationTargert, FGameplayTag tag, FGameplayTagContainer AdditinsTags, FVector FromLocation, float deltaChange, float NewValue);
	UFUNCTION()
		void OwnerEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void AnotherActorEffectAplicated(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void OwnerEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void AnotherActorEffectRemoved(AStats_Effect_Base* Effect, AActor* EffectOnActor);
	UFUNCTION()
		void PassiveActivationCheck();

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
