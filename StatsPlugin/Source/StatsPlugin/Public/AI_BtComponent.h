// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "AI_BtComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAI_BtComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAI_BtComponent();

	UPROPERTY()
		APawn* PawnOwner;

	UPROPERTY(BlueprintReadOnly, Category = "BT")
		bool Activated = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BT")
		UBehaviorTree * BTAsset;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(Category = "AbilityAI", BlueprintNativeEvent, BlueprintCallable)
		bool AI_CanActivate();
		virtual bool AI_CanActivate_Implementation();

	UFUNCTION(Category = "AbilityAI", BlueprintNativeEvent, BlueprintCallable)
		bool AI_Run();
		virtual bool AI_Run_Implementation();

	UFUNCTION(Category = "AbilityAI", BlueprintNativeEvent, BlueprintCallable)
		bool AI_Stop();
		virtual bool AI_Stop_Implementation();


};
