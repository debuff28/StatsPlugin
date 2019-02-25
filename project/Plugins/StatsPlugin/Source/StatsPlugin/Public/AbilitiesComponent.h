// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Ability.h"
#include "GameplayTagContainer.h"
#include "AbilitiesComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAbilitiesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitiesComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		TArray<TSubclassOf<AAbility>> AbilitiesClasses;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
		float AbilitiesCheckPeriod = 0.1f;

	UPROPERTY(BlueprintReadWrite, Category = "Abilities")
		TArray<AAbility*> Abilities;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void AbilitiesCheck();

	UFUNCTION(BlueprintCallable, Category = "StatsAction")
		void GetAbilitiesStatus(FGameplayTag AbilityTag);

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
