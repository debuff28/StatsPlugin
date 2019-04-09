// Fill out your copyright notice in the Description page of Project Settings.

#include "VoidZone.h"
#include "StatsCharacter.h"
// Sets default values
AVoidZone::AVoidZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VoidZoneCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VoidZoneCollision"));
	SetRootComponent(VoidZoneCollision);
	VoidZoneCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	VoidZoneCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	VoidZoneCollision->SetGenerateOverlapEvents(true);
	VoidZoneCollision->OnComponentBeginOverlap.AddDynamic(this, &AVoidZone::OnZoneBeginOverlap);
	VoidZoneCollision->OnComponentEndOverlap.AddDynamic(this, &AVoidZone::OnZoneEndnOverlap);
}

// Called when the game starts or when spawned
void AVoidZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVoidZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVoidZone::OnZoneBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	AStatsCharacter* Character = Cast<AStatsCharacter>(OtherActor);
	if (Character)
	{
		if (Character->OnEnterInVoidZone.IsBound())
		{
			Character->OnEnterInVoidZone.Broadcast(this);
		}
	}

	
}

void AVoidZone::OnZoneEndnOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	AStatsCharacter* Character = Cast<AStatsCharacter>(OtherActor);
	if (Character)
	{
		if (Character->OnLeaveVoidZone.IsBound())
		{
			Character->OnLeaveVoidZone.Broadcast(this);
		}
	}
}

