// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile_Base.h"
#include "StatsComponent.h"
#include "Net/UnrealNetwork.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"

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
	SetRootComponent(ProjectileCollision);
	ProjectileCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ProjectileCollision->SetCollisionProfileName(TEXT("OverlapAll"));
	ProjectileCollision->SetGenerateOverlapEvents(true);
	ProjectileCollision->OnComponentHit.AddDynamic(this, &AProjectile_Base::OnHit);
	
	CheckCollisionCenter = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionCheckCenter"));
	CheckCollisionCenter->SetupAttachment(ProjectileCollision);
	

	ProjectileRadiusEffectCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectilePeriodEffectCollision"));
	ProjectileRadiusEffectCollision->SetupAttachment(CheckCollisionCenter);
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

	
	
	





	if (GetOwner())
	{
		UActorComponent* Component = GetOwner()->GetComponentByClass(UStatsComponent::StaticClass());
		if (Component)
		{
			UStatsComponent* StatComponent = Cast<UStatsComponent>(Component);
			if (StatsModifications.Num() > 0)
			{
				for (int i = 0; i < StatsModifications.Num(); i++)
				//for (FStatsModifications statmmod : StatsModifications)
				{
					if (StatsModifications[i].AffectingStats.Num()>0)
					{
						for (int a = 0; a < StatsModifications[i].AffectingStats.Num(); a++)
						//for (FStatsAffectingParameters AffectingStat : statmmod.AffectingStats)
						{
							if (StatComponent->Stats.Contains(StatsModifications[i].AffectingStats[a].affectingStatTag))
							{

								float mod = StatComponent->Stats.FindRef(StatsModifications[i].AffectingStats[a].affectingStatTag).GetValue(StatsModifications[i].AffectingStats[a].affectingValue)*StatsModifications[i].AffectingStats[a].affectingMultiplier;

								if (mod != 0) {
									switch (StatsModifications[i].AffectingStats[a].affectingType)
									{
									case EStatChangeType::SCT_Add:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue + mod;
										break;
									case EStatChangeType::SCT_Sub:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue - mod;
										break;
									case EStatChangeType::SCT_Multiply:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue * mod;
										break;
									case EStatChangeType::SCT_Divide:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue / mod;
										break;
									case EStatChangeType::SCT_AddPercent:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue + ((StatsModifications[i].ModificationValue / 100) * mod);
										break;
									case EStatChangeType::SCT_SubtractPercent:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue - ((StatsModifications[i].ModificationValue / 100) * mod);
										break;
									case EStatChangeType::SCT_SetValue:
										StatsModifications[i].ModificationValue = StatsModifications[i].ModificationValue;
										break;
									default:
										break;
									}
								}
							}
						}
						
					}
				}
			}
		}
	}


	if (NeedProjectilePeriodEffect) 
	{
		
		FTimerHandle TimerHandle_ProjectilePeriodEffect;
		FTimerDynamicDelegate eventProjectilePeriodEffect;
		eventProjectilePeriodEffect.BindDynamic(this, &AProjectile_Base::ProjectilePeriodEffect);
		GetWorldTimerManager().SetTimer(TimerHandle_ProjectilePeriodEffect, eventProjectilePeriodEffect, ProjectilePeriodEffectTime, true);
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

	bool bHitSomething = GetWorld()->SweepMultiByObjectType(PeriodResults, OldLocation, CheckCollisionCenter->GetComponentLocation(), FQuat::Identity, ObjectQueryParams, CollisionRadiusShape, TraceParams);
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

	bool bHitSomething = GetWorld()->SweepSingleByObjectType(HitResult, OldLocation, CheckCollisionCenter->GetComponentLocation(), FQuat::Identity, ObjectQueryParams, CollisionShape, TraceParams);
	if (bHitSomething)
	{
	
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
		
	OldLocation = CheckCollisionCenter->GetComponentLocation();// this->GetActorLocation();
}

void AProjectile_Base::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{

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

		if (ReactionRules.Contains(currentRule))
		{

			OnProjectileApplyModsAndEffects(HitActor);

			if (StatsModifications.Num() > 0)
			{
				for (FStatsModifications statsMod : StatsModifications)
				{
					bool WasModified;
		
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
					
		
					StatComponent->ModifyStat(GetOwner(), statsMod.Stat, statsMod.ModificationValue*percent, statsMod.ChangeType, statsMod.ValueType, this->GetActorLocation(), WasModified, delta, newValue, ModifiedStat, statsMod.ClearChange, statsMod.AdditionInfoTags);
					
				}
			}
		
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
		
			this->K2_DestroyActor();
		}
	}
}

void AProjectile_Base::ProjectileCrit_Implementation()
{
	OnProjectileCrit();
}




void AProjectile_Base::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AProjectile_Base, TeamID);
}
