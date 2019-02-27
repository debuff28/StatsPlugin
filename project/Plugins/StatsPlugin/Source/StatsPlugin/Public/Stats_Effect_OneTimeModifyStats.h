// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stats_Effect_Base.h"
#include "Delegates/Delegate.h"
#include "Stats_Effect_OneTimeModifyStats.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamsDelegateOneTimeModifyStats);

UCLASS()
class STATSPLUGIN_API AStats_Effect_OneTimeModifyStats : public AStats_Effect_Base
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Modification")
		TArray <FStatsModifications> StatsModifications;
	UPROPERTY(BlueprintReadOnly, Category = "Effect|Modification")
		TArray <FStatsModifications> StatsModificationsCashe;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Modification")
		EEffectModifyType EffectModifyType;


	virtual void StartWorkServer() override;
	virtual void Client_StartWork_Implementation() override;
	virtual void FinishServer() override;
	virtual void FinishAll_Implementation() override;

	UFUNCTION(Category = "EffectEvents", BlueprintImplementableEvent, BlueprintCallable)
		void StartEffect();

	UFUNCTION(Category = "EffectEvents", BlueprintImplementableEvent, BlueprintCallable)
		void FinishEffect();



	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegateOneTimeModifyStats StartEffect_Multicast;
	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegateOneTimeModifyStats StartEffect_Server;
	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegateOneTimeModifyStats FinishEffect_Multicast;
	UPROPERTY(BlueprintAssignable)
		FNoParamsDelegateOneTimeModifyStats FinishEffect_Server;
};
