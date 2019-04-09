// Fill out your copyright notice in the Description page of Project Settings.

#include "Stats_Projectile.h"
#include "StatsComponent.h"
#include "Net/UnrealNetwork.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"




// Sets default values
AStats_Projectile::AStats_Projectile()
{
	bReplicates = true;
	bReplicateMovement = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

	ProjectileMovementCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileMovementCollision"));
	SetRootComponent(ProjectileMovementCollision);
	ProjectileMovementCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ProjectileMovementCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ProjectileMovementCollision->SetGenerateOverlapEvents(true);
	ProjectileMovementCollision->OnComponentHit.AddDynamic(this, &AStats_Projectile::OnProjectileMovementCollisionHit);
	

	ProjectileCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileCollision"));
	ProjectileCollision->SetupAttachment(ProjectileMovementCollision);
	ProjectileCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ProjectileCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ProjectileCollision->SetGenerateOverlapEvents(true);


	ProjectileRadiusEffectCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectilePeriodEffectCollision"));
	ProjectileRadiusEffectCollision->SetupAttachment(ProjectileCollision);
	ProjectileRadiusEffectCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ProjectileRadiusEffectCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ProjectileRadiusEffectCollision->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AStats_Projectile::BeginPlay()
{
	Super::BeginPlay();
	//отскоки
	ProjectileMovement->bShouldBounce = Bounce;
	ProjectileMovement->OnProjectileBounce.AddDynamic(this, &AStats_Projectile::OnBounce);
	//Настройка трейса
	TraceParams.bTraceAsyncScene = true;
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.AddIgnoredActor(this);
	CollisionShape.ShapeType = ECollisionShape::Sphere;
	CollisionShape.SetSphere(ProjectileCollision->GetScaledSphereRadius());
	CollisionRadiusShape.ShapeType = ECollisionShape::Sphere;
	CollisionRadiusShape.SetSphere(ProjectileRadiusEffectCollision->GetScaledSphereRadius());
	for (ECollisionChannel bjectType : BlockingReactObjectTypes)
	{
		ObjectBlockingParams.AddObjectTypesToQuery(bjectType);
	}
	//устанавливаем старое положение.
	OldLocation = this->GetActorLocation();
	//получаем текущий ID
	if (GetOwner())
	{
		UActorComponent* Component = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
		if (Component)
		{
			UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
			TeamID = StatComponent->TeamID;
		}
		else
		{
			TeamID = "None";
		}
	}
	else
	{
		TeamID = "None";
	}


	if (NeedProjectilePeriodEffect)
	{

		FTimerHandle TimerHandle_ProjectilePeriodEffect;
		FTimerDynamicDelegate eventProjectilePeriodEffect;
		eventProjectilePeriodEffect.BindDynamic(this, &AStats_Projectile::ProjectilePeriodEffect);
		GetWorldTimerManager().SetTimer(TimerHandle_ProjectilePeriodEffect, eventProjectilePeriodEffect, ProjectilePeriodEffectTime, true);
	}
}

// Called every frame
void AStats_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//если инициализовано то трейсим
	if (Inited)
	{
		Trace(false);
	}

}


//иницализация
bool AStats_Projectile::InitiateProjectile(TArray<FStatsModifications> NewStatsModifications, TArray<TSubclassOf<AStats_Effect_Base>> NewEffects, bool mele, UPrimitiveComponent* NewParentComponent, FName slot)
{
	StatsModifications = NewStatsModifications;
	Effects = NewEffects;
	
	//если это мили атака то аттачим к новому компоненту
	if (mele)
	{
		AttachProjectile(NewParentComponent, slot);
	}
	Inited = true;

	return Inited;
}


//удар при коллизии 
void AStats_Projectile::OnProjectileMovementCollisionHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
{
	

}


//аттачим к новому компоненту (мультикаст)
void AStats_Projectile::AttachProjectile_Implementation(UPrimitiveComponent* NewParentComponent, FName slot)
{


}


//отскоки
void AStats_Projectile::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	//считаем отскакивания
	NumberOfBounce++;
	

}




//применяем модификаторы и еффекты
void AStats_Projectile::ApplyModsAndEffects(AActor* HitActor, float multiplier)
{
	UActorComponent* Component = HitActor->GetComponentByClass(UStatsComponent::StaticClass());
	if (Component)
	{
		//получаем в кого попали враг друг или еще кто то
		EReactRule currentRule = EReactRule::RR_Other;
		UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
		if (StatComponent->TeamID == TeamID)
			currentRule = EReactRule::RR_Frieds;
		if ((StatComponent->TeamID != TeamID) && (StatComponent->TeamID != "None") && (StatComponent->TeamID != "Neutral"))
			currentRule = EReactRule::RR_Enemys;
		if ((StatComponent->TeamID == "Neutral"))
			currentRule = EReactRule::RR_Neutrals;
		if ((StatComponent->TeamID == "None"))
			currentRule = EReactRule::RR_Other;

		//если соответствует правилу то начинаем 
		if (ReactionRules.Contains(currentRule))
		{
			//применяем изменение статов
			if (StatsModifications.Num() > 0)
			{
				for (FStatsModifications statsMod : StatsModifications)
				{
					bool WasModified;
					//Вызываем функцию модификации на удаленном компоненте статов
					float delta = 0;
					float newValue = 0;

					FGameplayTag ModifiedStat;
					/** Модицикация стата
					float delta = значение на которое изменился стат
					float newValue = новое значение стата
					FGameplayTag ModifiedStat = какой стат в итоге поменялся
					*/
					StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue*multiplier, statsMod.ChangeType, statsMod.ValueType, WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);

				}
			}
			//накладываем эффекты
			if (Effects.Num() > 0)
			{
				for (TSubclassOf<AStats_Effect_Base> Effect : Effects)
				{
					FVector Location(0.0f, 0.0f, 0.0f);
					FRotator Rotation(0.0f, 0.0f, 0.0f);
					FActorSpawnParameters SpawnInfo;
					SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
					AActor* SpawnedEffect = GetWorld()->SpawnActor(Effect, &Location, &Rotation, FActorSpawnParameters::FActorSpawnParameters(SpawnInfo));
					if (GetOwner())
					{
						SpawnedEffect->SetOwner(GetOwner());
					}
					Cast<AStats_Effect_Base>(SpawnedEffect)->Initiate(HitResult.GetActor());
				}
			}

		}
	}
}

void AStats_Projectile::Trace(bool multi)
{
	if (!multi)
	{
		bool bHitSomething = GetWorld()->SweepSingleByObjectType(HitResult, OldLocation, ProjectileCollision->GetComponentLocation(), FQuat::Identity, ObjectQueryParams, CollisionShape, TraceParams);
		if (bHitSomething)
		{
			ApplyModsAndEffects(HitResult.GetActor(), 1);
		}
	}
	else
	{
		TArray<FHitResult> SortedHitResults;
		TArray<AActor*> uniqActors;
		bool bHitSomething = GetWorld()->SweepMultiByObjectType(PeriodResults, OldLocation, ProjectileCollision->GetComponentLocation(), FQuat::Identity, ObjectQueryParams, CollisionRadiusShape, TraceParams);
		if (bHitSomething)
		{
			for (FHitResult fresult : PeriodResults)
			{

				FHitResult TResult = fresult;
				FHitResult TempResult;
				FCollisionShape CollisionLine;
				CollisionLine.ShapeType = ECollisionShape::Line;
				bool blocking = GetWorld()->SweepSingleByObjectType(TempResult, ProjectileCollision->GetComponentLocation(), fresult.ImpactPoint, FQuat::Identity, ObjectBlockingParams, CollisionLine, TraceParams);//LineTraceSingleByObjectType(TempResult, this->GetActorLocation(), fresult.ImpactPoint,);
				if (blocking)
				{
					//DrawDebugLine(GetWorld(), this->GetActorLocation(), TempResult.ImpactPoint, FColor::Red, false, ProjectilePeriodEffectTime, 0, 0.5f);
				}
				else
				{
					if (!uniqActors.Contains(fresult.GetActor()))
					{

						uniqActors.Add(fresult.GetActor());
						float distance = (ProjectileCollision->GetComponentLocation() - fresult.ImpactPoint).Size() - ProjectileCollision->GetScaledSphereRadius();
						float percent = 1;
						if (ApplyModifyWithFalloff)
						{
							percent = 1 - FMath::Clamp(distance / ProjectileRadiusEffectCollision->GetScaledSphereRadius(), 0.0f, 0.999f);
						}
						else
						{
							percent = 1;
						}
						ApplyModsAndEffects(fresult.GetActor(), percent);
						//DrawDebugLine(GetWorld(), this->GetActorLocation(), fresult.ImpactPoint, FColor::Green, false, ProjectilePeriodEffectTime, 0, 0.5f);
					}
				}
			}
		}
	}
	
}


void AStats_Projectile::ProjectilePeriodEffect()
{
	Trace(true);
}


