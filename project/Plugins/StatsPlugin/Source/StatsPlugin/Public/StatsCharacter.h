// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Stats_CharacterMovementComponent.h"
#include "StatsCharacter.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoidZoneDelegate, AActor*, Actor);


UCLASS()
class STATSPLUGIN_API AStatsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStatsCharacter(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FORCEINLINE class UStats_CharacterMovementComponent* GetStatsMovementComponent() const { return StatsMovementComponent; }

	UFUNCTION(BlueprintCallable, Category = "AbilityAction")
		void StartSprinting();

	UFUNCTION(BlueprintCallable, Category = "AbilityAction")
		void StopSprinting();

	UFUNCTION(BlueprintCallable, Category = "AbilityAction")
		void Dodge();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PostInitializeComponents() override;

	UPROPERTY(BlueprintAssignable)
		FVoidZoneDelegate OnEnterInVoidZone;

	UPROPERTY(BlueprintAssignable)
		FVoidZoneDelegate OnLeaveVoidZone;


private:
	UStats_CharacterMovementComponent* StatsMovementComponent;
};
