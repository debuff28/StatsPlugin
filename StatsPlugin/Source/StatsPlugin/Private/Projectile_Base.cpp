// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile_Base.h"
#include "StatsComponent.h"
#include "UnrealNetwork.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values
AProjectile_Base::AProjectile_Base()
{
	bReplicates = true;
	bReplicateMovement = true;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	

	ProjectileCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileCollision"));
	ProjectileCollision->SetupAttachment(RootComponent);
	ProjectileCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ProjectileCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ProjectileCollision->SetGenerateOverlapEvents(true);
	ProjectileCollision->OnComponentHit.AddDynamic(this, &AProjectile_Base::OnHit);
	
	ProjectileRadiusEffectCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectilePeriodEffectCollision"));
	ProjectileRadiusEffectCollision->SetupAttachment(ProjectileCollision);
	ProjectileRadiusEffectCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ProjectileRadiusEffectCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ProjectileRadiusEffectCollision->SetGenerateOverlapEvents(true);
}



void AProjectile_Base::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (Bounce)
	{
		if (MaxBounceCount < NumberOfBounce + 1)
		{
			OnProjectileHit(Hit);

			if (GetNetMode() != NM_Client)
			{

				if (massUseIinTheReaction)
				{
					ProjectileApplyInRadius(false);
				}
				else
				{
					this->K2_DestroyActor();
				}
			}


		}
	}
	else
	{
		OnProjectileHit(Hit);

		if (GetNetMode() != NM_Client)
		{

			if (massUseIinTheReaction)
			{
				ProjectileApplyInRadius(false);
			}
			else
			{
				this->K2_DestroyActor();
			}
		}

	}
}

// Called when the game starts or when spawned
void AProjectile_Base::BeginPlay()
{
	Super::BeginPlay();
	ProjectileMovement->bShouldBounce = Bounce;
	ProjectileMovement->OnProjectileBounce.AddDynamic(this, &AProjectile_Base::OnBounce);

	for (ECollisionChannel bjectType : ReactObjectTypes)
		ObjectQueryParams.AddObjectTypesToQuery(bjectType);

	TraceParams.bTraceAsyncScene = true;
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.AddIgnoredActor(this);


	CollisionShape.ShapeType = ECollisionShape::Sphere;
	CollisionShape.SetSphere(ProjectileCollision->GetScaledSphereRadius());

	OldLocation = this->GetActorLocation();

	CollisionRadiusShape.ShapeType = ECollisionShape::Sphere;
	CollisionRadiusShape.SetSphere(ProjectileRadiusEffectCollision->GetScaledSphereRadius());

	for (ECollisionChannel bjectType : BlockingReactObjectTypes)
	{
		ObjectBlockingParams.AddObjectTypesToQuery(bjectType);
	}

	
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

	//криты?
	

	if (NeedProjectilePeriodEffect) 
	{
		FTimerHandle TimerHandle_ProjectilePeriodEffect;
		FTimerDynamicDelegate eventProjectilePeriodEffect;
		eventProjectilePeriodEffect.BindDynamic(this, &AProjectile_Base::ProjectilePeriodEffect);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_ProjectilePeriodEffect, eventProjectilePeriodEffect, ProjectilePeriodEffectTime, true);
	}
}

void AProjectile_Base::ProjectilePeriodEffect()
{
	OnProjectilePeriod();
	ProjectileApplyInRadius(true);

}

void AProjectile_Base::ProjectileApplyInRadius(bool period)
{
	TArray<FHitResult> SortedHitResults;
	TArray<AActor*> uniqActors;

	bool bHitSomething = GetWorld()->SweepMultiByObjectType(PeriodResults, OldLocation, this->GetActorLocation(), FQuat::Identity, ObjectQueryParams, CollisionRadiusShape, TraceParams);
	if (bHitSomething)
	{
		for (FHitResult fresult : PeriodResults)
		{

			FHitResult TResult = fresult;
			FHitResult TempResult;
			FCollisionShape CollisionLine;
			CollisionLine.ShapeType = ECollisionShape::Line;
			bool blocking = GetWorld()->SweepSingleByObjectType(TempResult, this->GetActorLocation(), fresult.ImpactPoint, FQuat::Identity, ObjectBlockingParams, CollisionLine, TraceParams);//LineTraceSingleByObjectType(TempResult, this->GetActorLocation(), fresult.ImpactPoint,);
			if (blocking)
			{
				DrawDebugLine(GetWorld(), this->GetActorLocation(), TempResult.ImpactPoint, FColor::Red, false, ProjectilePeriodEffectTime, 0, 0.5f);
			}
			else
			{
				if (!uniqActors.Contains(fresult.GetActor()))
				{

					uniqActors.Add(fresult.GetActor());

					if (GetNetMode() != NM_Client)
					{

						ProjectileApplyModsAndEffects(fresult.GetActor(), fresult.ImpactPoint, period);

					}

					DrawDebugLine(GetWorld(), this->GetActorLocation(), fresult.ImpactPoint, FColor::Green, false, ProjectilePeriodEffectTime, 0, 0.5f);
				}
			}
		}
		
	}
	if (!period)
	{
		this->K2_DestroyActor();
	}
}








void AProjectile_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//проверяем коллизию...
	bool bHitSomething = GetWorld()->SweepSingleByObjectType(HitResult, OldLocation, this->GetActorLocation(), FQuat::Identity, ObjectQueryParams, CollisionShape, TraceParams);
	if (bHitSomething)
	{
		//Не на клиенте приеняем эффекты и модификации
		if (GetNetMode() != NM_Client)
		{
			if (massUseIinTheReaction)
			{
				ProjectileApplyInRadius(false);
			}
			else
			{
				ProjectileApplyModsAndEffects(HitResult.GetActor(), HitResult.ImpactPoint, false);
			}
		}

	}
		
	OldLocation = this->GetActorLocation();
}

void AProjectile_Base::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	//считаем отскакивания
	NumberOfBounce++;
	OnProjectileBounce(ImpactResult);
		
}

void AProjectile_Base::OnReact_Implementation(FHitResult ReactHitResult)
{
}

void AProjectile_Base::ProjectileApplyModsAndEffects(AActor* HitActor, FVector location,bool periodReact)
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

			OnProjectileApplyModsAndEffects(HitActor);

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
					float distance = (this->GetActorLocation() - location).Size() - ProjectileCollision->GetScaledSphereRadius();

					//DrawDebugLine(GetWorld(), this->GetActorLocation(), location, FColor::Green, false, ProjectilePeriodEffectTime, 0, 0.5f);

					float percent = 1;
					if (ApplyModifyWithFalloff)
					{
						percent = 1 - FMath::Clamp(distance / ProjectileRadiusEffectCollision->GetScaledSphereRadius(), 0.0f, 0.999f);
					}
					
		
					/** Модицикация стата
					float delta = значение на которое изменился стат
					float newValue = новое значение стата
					FGameplayTag ModifiedStat = какой стат в итоге поменялся
					*/
					StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue*percent, statsMod.ChangeType, statsMod.ValueType, statsMod.AffectingStats, WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);

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

			if (periodReact)
			{
				if (DestroyOnPeriodReact)
				{
					this->K2_DestroyActor();
				}
			}
			else
			{
				if (DestroyOnReact)
				{
						this->K2_DestroyActor();
				}
			}
			

		}
			
	}
	else
	{
		if (ReactionRules.Contains(EReactRule::RR_Other))
		{
			
			//применяем урон через стандартную функцию ue4
			this->K2_DestroyActor();
		}
	}
}




void AProjectile_Base::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(AProjectile_Base, TeamID);
}
