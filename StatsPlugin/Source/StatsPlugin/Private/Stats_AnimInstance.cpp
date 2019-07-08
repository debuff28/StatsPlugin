// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_AnimInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"
#include "Camera/CameraShake.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitiesComponent.h"

void UStats_AnimInstance::NativeInitializeAnimation()
{

	Super::NativeInitializeAnimation();

	OwningCharacter = TryGetPawnOwner();
	ACharacter* Character = Cast<ACharacter>(OwningCharacter);
	if (Character)
	{
		MovementComponent = Character->GetCharacterMovement();
	}

}


void UStats_AnimInstance::NativeUpdateAnimation(float DeltaTimeX)
{

	Super::NativeUpdateAnimation(DeltaTimeX);

	OwningCharacter = TryGetPawnOwner();

	if (!OwningCharacter)
	{
		return;
	}

	//Setup variables
	Speed = OwningCharacter->GetVelocity().Size();
	VerticalSpeed = (OwningCharacter->GetActorLocation().Z - OldLocation.Z);
	Direction = CalculateDirection(OwningCharacter->GetVelocity(), OwningCharacter->GetActorRotation());
	DeltaRotationYaw = OldRotationYaw - OwningCharacter->GetActorRotation().Yaw;
	DeltaRotationYawSpeed = FMath::Min(FMath::Abs(OldRotationYaw - DeltaRotationYaw), 3.0f);
	OldRotationYaw = OwningCharacter->GetActorRotation().Yaw;

	OldLocation = OwningCharacter->GetActorLocation();

	UActorComponent* Component = OwningCharacter->GetComponentByClass(UAbilitiesComponent::StaticClass());
	if (Component)
	{
		UAbilitiesComponent* AbilitiesComponent = Cast<UAbilitiesComponent>(Component);
		CharacterStates = FGameplayTagContainer::CreateFromArray(AbilitiesComponent->GetAbilitiesAndEffectsTags());
	}

	if (MovementComponent)
	{
		switch (MovementComponent->MovementMode)
		{
		case EMovementMode::MOVE_Falling:
			if (!IsFalling)
			{
				IsFalling = true;
				OnFallingStart();
			}
			break;
		case EMovementMode::MOVE_Flying:
			if (!IsFlying)
			{
				IsFlying = true;
				OnFlyingStart();
			}
			break;
		default:
			if (IsFalling)
			{
				IsFalling = false;
				OnFallingEnd();
			}
			if (IsFlying)
			{
				IsFlying = false;
				OnFlyingEnd();
			}
			break;
		}
	}
}


void UStats_AnimInstance::SetStates(FGameplayTagContainer CurrentStatesTags)
{
	CharacterStates = CurrentStatesTags;
}

void UStats_AnimInstance::PlayMontageWithLength(UAnimMontage * Montage, float Length, bool StopAllMontages)
{
	if (Montage && (Length>0.0f))
	{
		Montage_Play(Montage, Montage->GetPlayLength() / Length, EMontagePlayReturnType::MontageLength, 0.0f, StopAllMontages);
	}
}

void UStats_AnimInstance::PlayShake_LocalPlayer(TSubclassOf<UCameraShake> Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator PlaySpaceRot)
{
	if (OwningCharacter)
	{
		APlayerController* PlayerController = Cast<APlayerController>(OwningCharacter->GetController());
		if (PlayerController)
		{
			if (PlayerController->IsLocalPlayerController())
			{
				if (Shake)
				{
					PlayerController->ClientPlayCameraShake(Shake, Scale, PlaySpace, PlaySpaceRot);
				}
			}
		}
	}

}

void UStats_AnimInstance::PlayShake_All(TSubclassOf<UCameraShake> Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator PlaySpaceRot)
{
	
	if (Shake)
	{
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->PlayCameraShake(Shake, Scale, PlaySpace, PlaySpaceRot);
	}
}


void UStats_AnimInstance::PlaySlotAnimationWithLength(UAnimSequenceBase * Anim, float Length, FName Slot, float BlendInTime, float BlendOutTime, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStart)
{
	if (Anim && (Length > 0.0f))
	{
		PlaySlotAnimationAsDynamicMontage(Anim, Slot, BlendInTime, BlendOutTime, Anim->GetPlayLength() / Length, LoopCount, BlendOutTriggerTime, InTimeToStart);
	}
	
}