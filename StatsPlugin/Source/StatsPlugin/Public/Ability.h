// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "GameplayTagContainer.h"
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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		TArray<FGameplayTag> AbilityBlockingTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		TArray<FGameplayTag> ActivationRequiedTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		EAbilityRearmRule RearmRule;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		//float RearmRule;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		//EAbilityActivationRule RearmRule;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	
};
