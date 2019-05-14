// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameplayTagContainer.h"
#include "Components/SphereComponent.h"
#include "StatsComponent.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Stats_Effect_Base.h"
#include "Stats_Projectile.generated.h"

UCLASS()
class STATSPLUGIN_API AStats_Projectile : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* ProjectileMovementCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* ProjectileCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* ProjectileRadiusEffectCollision;


	/**
	TeamID of Parent Actor

	Const Neutrals TeamID = Neutral
	Const Other TeamID = None

	If an actor does not have a "StatsComponent" component, its TeamID is considered "None"

	*/
	UPROPERTY(BlueprintReadWrite, Category = "Info")
		FName TeamID;

	/**
	An array of collisions to which the projectile reacts.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "ProjectileConfig|Behavior")
		TArray<TEnumAsByte<ECollisionChannel>> ReactObjectTypes;
	/**
	To whom the projector will respond (friends \ enemies \ neutrals \ others)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		TArray <EReactRule> ReactionRules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool NeedProjectilePeriodEffect = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool DestroyOnReact = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool DestroyOnPeriodReact = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool massUseInTheReaction = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool ApplyModifyWithFalloff = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		float ProjectilePeriodEffectTime = 1.0f;

	UPROPERTY(BlueprintReadOnly, Category = "ProjectileConfig|Behavior")
		TArray<FStatsModifications> StatsModifications;

	UPROPERTY(BlueprintReadOnly, Category = "ProjectileConfig|Behavior")
		TArray<TSubclassOf<AStats_Effect_Base>> Effects;
	/**
	Need to bounce?
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Bounce")
		bool Bounce = false;
	/**
	How many bounces?
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Bounce")
		int32 MaxBounceCount = 0;

	UPROPERTY()
		bool Inited = false;

	UPROPERTY()
		int32 NumberOfBounce = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "ProjectileConfig|Behavior")
		TArray<TEnumAsByte<ECollisionChannel>> BlockingReactObjectTypes;






	FCollisionQueryParams QueryParams;
	FCollisionQueryParams TraceParams;
	FCollisionObjectQueryParams ObjectQueryParams;
	FCollisionObjectQueryParams ObjectBlockingParams;
	FCollisionShape CollisionShape;
	FCollisionShape CollisionRadiusShape;


	UPROPERTY()
		FHitResult HitResult;
	UPROPERTY()
		TArray<FHitResult> PeriodResults;
	UPROPERTY()
		FVector OldLocation;

	
	




	// Sets default values for this actor's properties
	AStats_Projectile();




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Projectile")
		bool InitiateProjectile(TArray<FStatsModifications> NewStatsModifications, TArray<TSubclassOf<AStats_Effect_Base>> NewEffects, bool mele, UPrimitiveComponent* NewParentComponent, FName slot);

	UFUNCTION()
		void OnProjectileMovementCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);


	UFUNCTION()
		void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

	UFUNCTION()
		void ApplyModsAndEffects(AActor* HitActor, float multiplier);

	UFUNCTION()
		void Trace(bool multi);

	UFUNCTION()
		void ProjectilePeriodEffect();

	UFUNCTION(NetMulticast, Reliable)
		void AttachProjectile(UPrimitiveComponent* NewParentComponent, FName slot);
		virtual void AttachProjectile_Implementation(UPrimitiveComponent* NewParentComponent, FName slot);
};
