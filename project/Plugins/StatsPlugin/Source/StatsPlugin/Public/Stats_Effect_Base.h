// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EnumsObject.h"
#include "StructsObject.h"
#include "Engine/Texture2D.h"
#include "Stats_Effect_Base.generated.h"







UCLASS()
class STATSPLUGIN_API AStats_Effect_Base : public AActor
{
	GENERATED_BODY()
	
public:	

	
	// Sets default values for this actor's properties
	AStats_Effect_Base();

	/**
	Effect Tag
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Info")
		FGameplayTag EffectTag;
	/**
	Effect icon
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* EffectIcon;
	/**
	Effect display name
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Info")
		FName EffectName;
	/**
	LiveTime
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Info")
		float LiveTime;
	/**
	Using for removing effect
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|EffectInfo")
		TArray<FGameplayTag> EffectInfoTag;
	/**
	which stats should be destroyed
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|RemoveOtherEffects")
		TArray<FGameplayTag> RemoveEffectsWithInfoTags;
	/**
	Effect strength parameter. Used to understand if this effect can be removed by the tag contained in RemoveEffectsWithInfoTags
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Power")
		float  EffectBasePower;
	/**
	what owner stats affect effect strength
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Power")
		TArray <FStatsAffectingParameters> EffectPowerAffectors;
	/**
	how does this effect stack
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Stack")
		EStackRules StacksRules;
	/**
	what happens when the amount of stacks is maximal
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Stack")
		EStackCountRules StacksCountRules;
	/**
	maximum of stacks
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config|Stack")
		int32 StacksMaxCount;

	UPROPERTY(BlueprintReadOnly, Category = "Effect|info")
		float TimeToFinish;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "Effect|info")
		AActor* ParentActor;

	UPROPERTY()
		bool finish = false;

	UPROPERTY(BlueprintReadOnly, replicated, Category = "Effect|info")
		bool init = false;

	UPROPERTY()
		bool apply = true;

	UPROPERTY()
		bool attach = false;

	UPROPERTY()
		TArray < AStats_Effect_Base*> EffectsBase;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	

	UFUNCTION()
		virtual void StartWorkServer();


	UFUNCTION(NetMulticast, Reliable)
		void Client_StartWork();
		virtual void Client_StartWork_Implementation();
		virtual bool Client_StartWork_Validate();

	UFUNCTION()
		virtual void FinishServer();

	UFUNCTION(NetMulticast, Reliable)
		void FinishAll();
		virtual void FinishAll_Implementation();
		virtual bool FinishAll_Validate();

	UFUNCTION(NetMulticast, Reliable)
		void ActivateEffectAll();
		virtual void ActivateEffectAll_Implementation();
		virtual bool ActivateEffectAll_Validate();

	UFUNCTION(Category = "EffectEvents", BlueprintImplementableEvent, BlueprintCallable)
			void ActivateEffect();

	UFUNCTION(NetMulticast, Reliable)
		void DeactivateEffectAll();
		virtual void DeactivateEffectAll_Implementation();
		virtual bool DeactivateEffectAll_Validate();

	UFUNCTION(Category = "EffectEvents", BlueprintImplementableEvent, BlueprintCallable)
		void DeactivateEffect();

	UFUNCTION()
		void GetEffectOfMyTag();

	UFUNCTION()
		void GetThisTimeToFinish();

	UFUNCTION()
		void GetAllTimeToFinish();

	UFUNCTION()
		void DestroyOldest();

	UFUNCTION()
		void DestroyNewest();

	UFUNCTION()
		void ApplyStackCountRule();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Effect")
		void Initiate(AActor* Parent);

	UFUNCTION()
		void TryToRemove(TArray<FGameplayTag> RemoveInfoTags);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Effect")
		void TryRemoveEffect();


	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
