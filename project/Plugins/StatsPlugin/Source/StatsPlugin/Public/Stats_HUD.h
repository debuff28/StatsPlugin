// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Stats_HUD.generated.h"

/**
 * 
 */



USTRUCT(BlueprintType)
struct FAbilities
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		int32  ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		UAbility* Ability;

};





UCLASS()
class STATSPLUGIN_API AStats_HUD : public AHUD
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config")
		float getDataPeriod = 0.5f;

	UPROPERTY(BlueprintReadOnly, Category = "info")
		TArray<FAbilities> Abilities;

	UPROPERTY(BlueprintReadOnly, Category = "info")
		UAbilitiesComponent* AbilityesComponent;

	UPROPERTY(BlueprintReadOnly, Category = "info")
		UStatsComponent* StatsComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "StatsHUD")
		void getData();
};
