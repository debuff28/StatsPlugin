// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI_BtComponent.h"
#include "AI_BtManager.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATSPLUGIN_API UAI_BtManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAI_BtManager();



	UPROPERTY()
		APawn* PawnOwner;

	UPROPERTY()
		TArray<UAI_BtComponent*> BT_Components;

	UPROPERTY()
		UAI_BtComponent* ActivatedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BT")
		TArray<TSubclassOf<class UAI_BtComponent>> BT_ComponentsClasses;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BT")
		float FindAvailableBT_Period = 1.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void FindAvailableBT();
};
