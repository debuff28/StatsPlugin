// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilitiesComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"


// Sets default values for this component's properties
UAbilitiesComponent::UAbilitiesComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
}


// Called when the game starts
void UAbilitiesComponent::BeginPlay()
{
	Super::BeginPlay();


	if (GetNetMode() != NM_Client)
	{
		if (Abilities.Num() > 0)
		{
			for (AAbility* CurrentAbility : Abilities)
			{
				//��������� ������
			}
			Abilities.Empty();
		}

		FVector NewLocation = GetOwner()->GetActorLocation();
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		for (TSubclassOf<AAbility> Ability : AbilitiesClasses)
		{
			AAbility* NewAbility = GetOwner()->GetWorld()->SpawnActor<AAbility>(Ability, NewLocation, FRotator::ZeroRotator, FActorSpawnParameters::FActorSpawnParameters(SpawnInfo));
			NewAbility->AttachToActor(GetOwner(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			NewAbility->SetOwner(GetOwner());
			NewAbility->OwnerStatComponent = (UStatsComponent*)GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
			Abilities.Add(NewAbility);
		}
	}

	//������������� �������� ������... �� ���� ��.
	FTimerHandle TimerHandle_AbilitiesCheck;
	FTimerDynamicDelegate eventAbilitiesCheck;
	eventAbilitiesCheck.BindDynamic(this, &UAbilitiesComponent::AbilitiesCheck);
	GetOwner()->GetWorldTimerManager().SetTimer(TimerHandle_AbilitiesCheck, eventAbilitiesCheck, AbilitiesCheckPeriod, true);

}


void UAbilitiesComponent::AbilitiesCheck()
{
	//���� ����� ������������� �������� ������ ����� ����� ���
}

void UAbilitiesComponent::GetAbilitiesStatus(FGameplayTag AbilityTag)
{
	//�������� ������ ������ �� �� ����
}



// Called every frame
void UAbilitiesComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void UAbilitiesComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(UAbilitiesComponent, Abilities);
}