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

#include "Projectile_Base.generated.h"







//FGameplayTag Stat, float inputValue, EStatChangeType ChangeType, EStatValueType ValueType, TArray<FStatsAffectingParameters> AffectingStats
UCLASS()
class STATSPLUGIN_API AProjectile_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_Base();

	/**
	TeamID of Parent Actor

	Const Neutrals TeamID = Neutral
	Const Other TeamID = None

	If an actor does not have a "StatsComponent" component, its TeamID is considered "None"

	*/
	UPROPERTY(BlueprintReadWrite, replicated, Category = "Info")
		FName TeamID;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement)
		UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* ProjectileCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		USceneComponent* CheckCollisionCenter;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* ProjectileRadiusEffectCollision;


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
	/**
	Destroy projectile on reaction
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool DestroyOnReact = true;

	UPROPERTY(BlueprintReadOnly, Category = "Projectile")
		bool IsCrit = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool DestroyOnPeriodReact = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool NeedProjectilePeriodEffect = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		float ProjectilePeriodEffectTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior", meta = (DisplayName = "massUseInTheReaction"))
		bool massUseIinTheReaction = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool ApplyModifyWithFalloff = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Behavior")
		bool UseAltCollision = true;

	UPROPERTY(BlueprintReadOnly, Category = "ProjectileConfig|Behavior")
		float CritChance = 0.1f;

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
	/**
	Stats Modifications
	***********
	for example, we inflict magical damage (the effect on this change we indicate a magical attack) and inflict physical damage (the effect on this change we indicate a physical attack)
	***********

	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "ECollisionChannel"), Category = "ProjectileConfig|Behavior")
		TArray<TEnumAsByte<ECollisionChannel>> BlockingReactObjectTypes;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Modification")
		TArray <FStatsModifications> StatsModifications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig|Effects")
		TArray<TSubclassOf<AStats_Effect_Base>> Effects;

	UPROPERTY()
		FVector OldLocation;

		FCollisionQueryParams QueryParams;
		FCollisionObjectQueryParams ObjectQueryParams;
		FCollisionObjectQueryParams ObjectBlockingParams;
		FCollisionShape CollisionShape;
		FCollisionShape CollisionRadiusShape;


	UPROPERTY()
		FHitResult HitResult;
	UPROPERTY()
		TArray<FHitResult> PeriodResults;

	

		FCollisionQueryParams TraceParams;

	UPROPERTY()
		int32 NumberOfBounce = 0;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	UFUNCTION()
		void ProjectilePeriodEffect();

	UFUNCTION()
		void ProjectileApplyInRadius(bool period);

	UFUNCTION()
		void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

	UFUNCTION(BlueprintImplementableEvent, Category = "ProjectileReaction")
		void OnReact(FHitResult ReactHitResult);
		void OnReact_Implementation(FHitResult ReactHitResult);

	UFUNCTION()
		void ProjectileApplyModsAndEffects(AActor* HitActor, FVector location, bool periodReact);
	
	UFUNCTION(NetMulticast, Reliable)
		void ProjectileCrit();
		virtual void ProjectileCrit_Implementation();


	UFUNCTION(Category = "AbilityEvents", BlueprintImplementableEvent, BlueprintCallable)
		void OnProjectileCrit();

	UFUNCTION(Category = "Projectile", BlueprintImplementableEvent, BlueprintCallable)
		void OnProjectileBounce(const FHitResult& ReactHitResult);

	UFUNCTION(Category = "Projectile", BlueprintImplementableEvent, BlueprintCallable)
		void OnProjectileApplyModsAndEffects(AActor* ReactHitResult);

	UFUNCTION(Category = "Projectile", BlueprintImplementableEvent, BlueprintCallable)
		void OnProjectileHit(const FHitResult& ReactHitResult);
	UFUNCTION(Category = "Projectile", BlueprintImplementableEvent, BlueprintCallable)
		void OnProjectilePeriod();

};
