// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "Stats_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class STATSPLUGIN_API UStats_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		FGameplayTagContainer CharacterStates;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		float Speed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
		float Direction;

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

public:

	APawn* OwningCharacter;

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
