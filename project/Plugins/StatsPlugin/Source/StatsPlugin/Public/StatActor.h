// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnumsObject.h"
#include "GameplayTagContainer.h"
#include "Delegates/Delegate.h"
#include "StatActor.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentAStatDelegate, FGameplayTag, tag);

UCLASS()
class STATSPLUGIN_API AStatActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatActor();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		FName StatTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatBaseValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatCurrentValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatRegenBaseValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatRegenCurrentValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatMaxBaseValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatMaxCurrentValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatMinBaseValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float StatMinCurrentValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatsAffecting")
		ERegenRule regenRule = ERegenRule::RR_ConstantRegen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		float RegenPauseLenght = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		bool StopRegenOnMinValue = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		FDateTime PauseTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		bool RegenIsStoped = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, replicated, Category = "StatsAffecting")
		bool ValueWasChanged = false;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void InitStat();
	UFUNCTION()
		void setRegenIsStoped(bool Enable);
	UFUNCTION()
		void Regen(float deltatime);
	UFUNCTION()
		float GetValue(EStatValueType ValueType);
	UFUNCTION()
		void SetValue(EStatValueType ValueType, float NewValue);

	UPROPERTY(BlueprintAssignable)
		FCurrentAStatDelegate onCurrentStatMinValue;



	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
