// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stats_Effect_Base.h"
#include "Delegates/Delegate.h"
#include "Stat_Effect_PeriodModifyStats.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamsDelegatePeriodModifyStats);

UCLASS()
class STATSPLUGIN_API AStat_Effect_PeriodModifyStats : public AStats_Effect_Base
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Modification")
		TArray <FStatsModifications> StatsModifications;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Modification")
		float ApplyModificatorsPeriod = 0.5f;

	virtual void StartWorkServer() override;
	virtual void Client_StartWork_Implementation() override;
	virtual void FinishServer() override;
	virtual void FinishAll_Implementation() override;

	UFUNCTION()
	void ApplyModificators();

	UFUNCTION(Category = "EffectEvents", BlueprintImplementableEvent, BlueprintCallable)
		void StartEffect();

	UFUNCTION(Category = "EffectEvents", BlueprintImplementableEvent, BlueprintCallable)
		void FinishEffect();

	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegatePeriodModifyStats StartEffect_Multicast;
	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegatePeriodModifyStats StartEffect_Server;
	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegatePeriodModifyStats FinishEffect_Multicast;
	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegatePeriodModifyStats FinishEffect_Server;


};
