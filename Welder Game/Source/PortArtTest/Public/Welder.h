// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "WeldableObject.h"
#include "Welder.generated.h"

UCLASS()
class PORTARTTEST_API AWelder : public ACharacter
{
	GENERATED_BODY()



public:
	// Sets default values for this character's properties
	AWelder();

	UPROPERTY(EditAnywhere, Category = "Components")
		class USpringArmComponent* CamBoom;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UPhysicsHandleComponent* Handle;

	UPROPERTY(EditAnywhere, Category = "Components")
		class USceneComponent* HandleTarget;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float value);
	void MoveRight(float value);
	void Grab();
	UFUNCTION(BlueprintCallable, Category = "Welding")
	void Release();
	void Weld();

	UPROPERTY(EditAnywhere, Category = "Movement")
		float MoveSpeed;

	UPROPERTY(EditAnywhere, Category = "Welding")
		float GrabDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Welding")
		AWeldableObject* GrabbedWeldable;

	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
