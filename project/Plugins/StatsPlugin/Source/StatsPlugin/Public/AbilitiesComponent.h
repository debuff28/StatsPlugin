// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Ability.h"
#include "GameplayTagContainer.h"
#include "Delegates/Delegate.h"
#include "AbilitiesComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityActionsDelegate, UAbility*, Ability, int32, ID);

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAbilitiesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitiesComponent();

	UPROPERTY(BlueprintReadOnly, replicated, Category = "Abilities")
		TArray<UAbility*> Abilities;

	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		bool AI = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		bool AI_AutoActivateByComponent = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		float AI_CheckAbilitiesPeriod = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		bool AI_RandomUseValidAbilities = false;

	UPROPERTY(BlueprintReadOnly, Category = "Abilities")
		UAbility* AI_CurrentAbily;

	UPROPERTY(BlueprintReadOnly, Category = "Abilities")
		TArray<UAbility*> AI_CurrentValidAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		float AI_PauseBetweenAbilities = 0.5f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void AddAbility(TSubclassOf<UAbility> AbilityClass, int32 id, bool& SuccessfullyAdded);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void RemoveAbility(UAbility* Ability, bool& SuccessfullyRemoved);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void RemoveAbilitiesByClass(TSubclassOf<UAbility> AbilityClass, bool& SuccessfullyRemoved);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction")
		void RemoveAbilityByID(int32 ID, bool& SuccessfullyRemoved);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TryActivateAbilityByID(int32 id, bool& SuccessfullyActivated, UAbility*& ActivatedAbility);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TryDeactivateAbilityByID(int32 id, bool& SuccessfullyDeactivated, UAbility*& DeactivatedAbility);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TrBreakAbilityByID(int32 id, bool & SuccessfullyBreaked, UAbility *& BreakedAbility);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TryActivateAbilityByClass(TSubclassOf<UAbility> AbilityClass, bool& SuccessfullyActivated);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TryDeactivateAbilityByClass(TSubclassOf<UAbility> AbilityClass, bool& SuccessfullyDeactivated);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void GetActivatedAbility(bool & HasActivatedAbility, int32 & ID);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void CanActivateAnyAbility(TArray<int32> AbilitiesIds, bool & CanActivate);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TryActivateAbilityByTag(FGameplayTag AbilityTag, bool& SuccessfullyActivated);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		void TryDeactivateAbilityByTag(FGameplayTag AbilityTag, bool& SuccessfullyDeactivated);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|Activation")
		TArray<AStats_Effect_Base*> GetOwnedEffects();

	UFUNCTION(BlueprintCallable, Category = "AbilityAction")
		TArray<FGameplayTag> GetAbilitiesAndEffectsTags();

	UFUNCTION(BlueprintCallable, Category = "AbilityAction")
		TArray<FGameplayTag> GetEffectsTags();

	UFUNCTION()
		void AbilityWasActivated(UAbility* ActivatedAbility);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "AbilityAction|AI")
		void AI_GetValidAbilities();


		
	UPROPERTY(BlueprintAssignable)
		FAbilityActionsDelegate OnAbilityAdded;
	UPROPERTY(BlueprintAssignable)
		FAbilityActionsDelegate OnAbilityRemoved;

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
