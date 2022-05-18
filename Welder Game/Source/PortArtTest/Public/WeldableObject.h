// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "WeldableObject.generated.h"

UCLASS()
class PORTARTTEST_API AWeldableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeldableObject();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		AWeldableObject* ConglomerateObjTouching;

	bool GetCanMove();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		bool Levitating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		TArray<AWeldableObject*> Conglomerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		AWeldableObject* WeldParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		TArray<AWeldableObject*> TouchedWeldables;

	void TakeStock();

	TArray<AWeldableObject*> AllTouched(TArray<AWeldableObject*> coveredWeldables);
		
	AWeldableObject* GetOverallParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Welding")
		bool CanMove;

	TArray<AWeldableObject*> WeldablesUnderReview;

	TArray<AWeldableObject*> RemoveDuplicates(TArray<AWeldableObject*> a);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Meep")
		void Weld_Implementation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Meep")
		void ReverseChain();

	TArray<AWeldableObject*> GetAllChildren();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		TArray<AWeldableObject*> WeldChildren;
};
