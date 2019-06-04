// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Stats_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class STATSPLUGIN_API UStats_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY()
		UCharacterMovementComponent* MovementComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		FGameplayTagContainer CharacterStates;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		bool IsFlying = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		bool IsFalling= false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		float Speed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		float VerticalSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		float Direction;

	UPROPERTY()
		FVector OldLocation;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
		float OldRotationYaw;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
		float DeltaRotationYaw;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
		float DeltaRotationYawSpeed;

	UFUNCTION(Category = "AnimationEvents", BlueprintImplementableEvent, BlueprintCallable)
		void PlayMontageByTag(FGameplayTag MontageTag, float AnimationLength);

	UFUNCTION(BlueprintCallable, Category = "Animation")
		void SetStates(FGameplayTagContainer CurrentStatesTags);

	UFUNCTION(BlueprintCallable, Category = "AnimationAction")
		void PlayMontageWithLength(UAnimMontage* Montage, float Length, bool StopAllMontages);

	UFUNCTION(BlueprintCallable, Category = "AnimationAction")
		void PlaySlotAnimationWithLength(UAnimSequenceBase * Anim, float Length, FName Slot, float BlendInTime = 0.0f, float BlendOutTime = 0.0f, int32 LoopCount = 1, float BlendOutTriggerTime = -1.0f, float InTimeToStart = 0.0f);

	UFUNCTION(Category = "AnimationEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnFallingEnd();
	UFUNCTION(Category = "AnimationEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnFallingStart();


	UFUNCTION(Category = "AnimationEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnFlyingEnd();
	UFUNCTION(Category = "AnimationEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnFlyingStart();

	UFUNCTION(Category = "AnimationEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnGetDmg();

public:

	APawn* OwningCharacter;

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
