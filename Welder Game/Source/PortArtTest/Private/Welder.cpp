// Fill out your copyright notice in the Description page of Project Settings.


#include "Welder.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneComponent.h"
#include "WeldableObject.h"
#include "..\Public\Welder.h"

// Sets default values
AWelder::AWelder()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CamBoom = CreateDefaultSubobject<USpringArmComponent>("CamBoom");
	CamBoom->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(CamBoom);

	Handle = CreateDefaultSubobject<UPhysicsHandleComponent>("Handle");

	HandleTarget = CreateDefaultSubobject<USceneComponent>("Handle Target");
	HandleTarget->SetupAttachment(Camera);
}

// Called when the game starts or when spawned
void AWelder::BeginPlay()
{
	Super::BeginPlay();
	
}

//movement method, bound to the moveforward axis
void AWelder::MoveForward(float value)
{
	if (Controller && value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), value * MoveSpeed);
	}
}

//movement method, bound to the moveright axis
void AWelder::MoveRight(float value)
{
	if (Controller && value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), value * MoveSpeed);
	}
}

//this method picks up eligible weldables, and is bound to a custom action mapping
void AWelder::Grab()
{
	
	FHitResult OutHit;
	bool hit = GetWorld()->LineTraceSingleByChannel(OutHit, Camera->GetComponentLocation(), (Camera->GetComponentLocation() + (Camera->GetForwardVector() * GrabDist)), ECC_Visibility);
	if (Cast<AWeldableObject>(OutHit.GetActor()))
	{
		
		GrabbedWeldable = Cast<AWeldableObject>(OutHit.GetActor());
		GrabbedWeldable->Levitating = true;
		
		Handle->GrabComponent(GrabbedWeldable->Mesh, "none", GrabbedWeldable->GetActorLocation(), true);
		
	}
}

// lets go of grabbed weldables
void AWelder::Release()
{

	if (GrabbedWeldable)
	{
		Handle->ReleaseComponent();
		GrabbedWeldable->Levitating = false;
		
		
		GrabbedWeldable = NULL;
	}
}

//executes the code for welding, including variable cleanup and actor attachment
void AWelder::Weld()
{

	if (GrabbedWeldable)
	{
		if (GrabbedWeldable->ConglomerateObjTouching)
		{
			GrabbedWeldable->ConglomerateObjTouching->ReverseChain();
			GrabbedWeldable->ConglomerateObjTouching->Weld_Implementation();
			
		}
		else
		{

			if (Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor()))
			{
				Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor())->TouchedWeldables.Remove(GrabbedWeldable);
				Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor())->WeldChildren.Remove(GrabbedWeldable);
				Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor())->TakeStock();
				
			}
			
			GrabbedWeldable->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			TArray<AActor*> objs;

			GrabbedWeldable->GetAttachedActors(objs);
			for (int i = 0; i < objs.Num(); i++)
			{
				
				objs[i]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				Cast<AWeldableObject>(objs[i])->TouchedWeldables.Remove(GrabbedWeldable);
				Cast<AWeldableObject>(objs[i])->TakeStock();
				Cast<AWeldableObject>(objs[i])->WeldParent = NULL;
			}
			Handle->ReleaseComponent();
			Handle->GrabComponent(GrabbedWeldable->Mesh, "none", GrabbedWeldable->GetActorLocation(), true);
			GrabbedWeldable->Conglomerate.Empty();
			GrabbedWeldable->WeldChildren.Empty();
			GrabbedWeldable->WeldParent = NULL;
		}
	}
	else
	{
		FHitResult OutHit;
		bool hit = GetWorld()->LineTraceSingleByChannel(OutHit, Camera->GetComponentLocation(), (Camera->GetComponentLocation() + (Camera->GetForwardVector() * GrabDist)), ECC_Visibility);
		
		if (Cast<AWeldableObject>(OutHit.GetActor()))
		{
			GrabbedWeldable = Cast<AWeldableObject>(OutHit.GetActor());
			if (Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor()))
			{
				Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor())->TouchedWeldables.Remove(GrabbedWeldable);
				Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor())->WeldChildren.Remove(GrabbedWeldable);
				Cast<AWeldableObject>(GrabbedWeldable->GetAttachParentActor())->TakeStock();

			}

			GrabbedWeldable->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			TArray<AActor*> objs;

			GrabbedWeldable->GetAttachedActors(objs);
			for (int i = 0; i < objs.Num(); i++)
			{

				objs[i]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				Cast<AWeldableObject>(objs[i])->TouchedWeldables.Remove(GrabbedWeldable);
				Cast<AWeldableObject>(objs[i])->TakeStock();
				Cast<AWeldableObject>(objs[i])->WeldParent = NULL;
			}
			
			
			GrabbedWeldable->Conglomerate.Empty();
			GrabbedWeldable->WeldChildren.Empty();
			GrabbedWeldable->WeldParent = NULL;

			GrabbedWeldable = NULL;
		}
	}

	/*if (GrabbedWeldable)
	{
		Handle->ReleaseComponent();
		
		
		if (!GrabbedWeldable->ConglomerateObjTouching)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
			GrabbedWeldable->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			GrabbedWeldable->WeldParent->WeldChildren.Remove(GrabbedWeldable);
			
			
			for (int i = 0; i < GrabbedWeldable->WeldChildren.Num(); i++)
			{
				if (GrabbedWeldable == GrabbedWeldable->WeldChildren[i]->WeldParent)
				{
					GrabbedWeldable->WeldChildren[i]->WeldParent = NULL;
				}
				
				GrabbedWeldable->WeldChildren[i]->SetAsMainParent();
				GrabbedWeldable->WeldChildren[i]->WeldParent = NULL;
				for (int j = 0; j < GrabbedWeldable->WeldChildren.Num(); j++)
				{
					if (!(j == i))
					{
						TArray<int> HitList;
						for (int h = 0; h < GrabbedWeldable->WeldChildren[j]->GetAllChildren().Num(); h++)
						{
							
							HitList.Add(h);
						}
						for (int h = 0; h < HitList.Num(); h++)
						{
							GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
							GrabbedWeldable->WeldChildren[i]->Conglomerate.Remove(GrabbedWeldable->WeldChildren[j]->GetAllChildren()[h]);

						}
						GrabbedWeldable->WeldChildren[i]->Conglomerate.Remove(GrabbedWeldable->WeldChildren[j]);

						
					}


					if (GrabbedWeldable->WeldParent)
					{
						for (int h = 0; h < GrabbedWeldable->WeldParent->GetAllChildren().Num(); h++)
						{
							GrabbedWeldable->WeldChildren[i]->Conglomerate.Remove(GrabbedWeldable->WeldParent->GetAllChildren()[h]);
						}

						GrabbedWeldable->WeldChildren[i]->Conglomerate.Remove(GrabbedWeldable->WeldParent);
					}


				}
				GrabbedWeldable->WeldChildren[i]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			}

			if (GrabbedWeldable->WeldParent)
			{
				GrabbedWeldable->WeldParent->SetAsMainParent();
				for (int i = 0; i < GrabbedWeldable->WeldChildren.Num(); i++)
				{
					for (int j = 0; j < GrabbedWeldable->WeldChildren[i]->GetAllChildren().Num(); j++)
					{
						GrabbedWeldable->WeldParent->Conglomerate.Remove(GrabbedWeldable->WeldChildren[i]->GetAllChildren()[j]);
					}
					GrabbedWeldable->WeldParent->Conglomerate.Remove(GrabbedWeldable->WeldChildren[i]);
				}
			}

			for (int i = 0; i < GrabbedWeldable->Conglomerate.Num(); i++)
			{
				for (int j = 0; j < GrabbedWeldable->Conglomerate[i]->Conglomerate.Num(); j++)
				{
					TArray<int> HitList;
					if (GrabbedWeldable == GrabbedWeldable->Conglomerate[i]->Conglomerate[j])
					{
						HitList.Add(j);
					}
					else
					{
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
					}
					for (int h = 0; h < HitList.Num(); h++)
					{
						GrabbedWeldable->Conglomerate[i]->Conglomerate.RemoveAt(HitList[h]);

					}
				}
				
			}

			GrabbedWeldable->Conglomerate.Empty();
			GrabbedWeldable->WeldChildren.Empty();
			GrabbedWeldable->WeldParent = NULL;
		}
		else
		{
			GrabbedWeldable->ConglomerateObjTouching->Weld_Implementation();
			for (int i = 0; i < GrabbedWeldable->Conglomerate.Num(); i++)
			{
				GrabbedWeldable->Conglomerate[i]->ConglomerateObjTouching = NULL;
			}
			GrabbedWeldable->ConglomerateObjTouching = NULL;
		}
		
		GrabbedWeldable->Levitating = false;
		GrabbedWeldable = NULL;
	}*/
	
}

// Called every frame
void AWelder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Handle->SetTargetLocation(HandleTarget->GetComponentLocation());
}

// Called to bind functionality to input
void AWelder::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Grab", IE_Pressed, this, &AWelder::Grab);
	PlayerInputComponent->BindAction("Grab", IE_Released, this, &AWelder::Release);
	PlayerInputComponent->BindAction("Weld", IE_Pressed, this, &AWelder::Weld);

	PlayerInputComponent->BindAxis("MoveForward", this, &AWelder::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AWelder::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);


}

