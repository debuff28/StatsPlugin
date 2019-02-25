// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "GameplayTagContainer.h"
#include "StatsComponent.h"
#include "Ability.generated.h"





UCLASS()
class STATSPLUGIN_API AAbility : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAbility();


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		FGameplayTag AbilityTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities|Stats")
		UStatsComponent* StatComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		TArray<FGameplayTag> AbilityBlockingTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		TArray<FGameplayTag> ActivationRequiedTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		TArray <FAbilityAffects> AbilityAffects;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		FAbilityCooldown CooldownRule;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		float RearmLength;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		EAbilityActivationRule ActivationRule;

	UPROPERTY(BlueprintReadOnly, Category = "Abilities")
		UStatsComponent* OwnerStatComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "AbilityAction")
		bool AbilityPress(AActor* ActionIniciator);

	UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "AbilityAction")
		bool AbilityRelease(AActor* ActionIniciator);
	
};
