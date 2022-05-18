// Fill out your copyright notice in the Description page of Project Settings.


#include "WeldableObject.h"
#include "Components/StaticMeshComponent.h"
#include "..\Public\WeldableObject.h"

// Sets default values
AWeldableObject::AWeldableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

}

// removes duplicate items from a given array 
TArray<AWeldableObject*> AWeldableObject::RemoveDuplicates(TArray<AWeldableObject*> a)
{
	TArray<AWeldableObject*> ret;
	for (int i = 0; i < a.Num(); i++)
	{
		if (!(ret.Contains(a[i])))
		{
			ret.Add(a[i]);
		}
	}
	return (ret);
}

//returns a complete array of a weldable's children, its children's children, and so forth
TArray<AWeldableObject*> AWeldableObject::GetAllChildren()
{
	TArray<AWeldableObject*> flock;
	if (WeldChildren.Num() > 0)
	{
		for (int i = 0; i < WeldChildren.Num(); i++)
		{
			flock.Append(WeldChildren[i]->GetAllChildren());
		}
	}
	return flock;
}

//tells the weldable to reevaluate its conglomerate based on the blocks that are touching it, the blocks that are touching those, and so on
void AWeldableObject::TakeStock()
{

	//this method is possibly the source of the bug
	TArray<AWeldableObject*> AcceptableWeldables;
	Conglomerate = AllTouched(AcceptableWeldables);
	for (int i = 0; i < Conglomerate.Num(); i++)
	{
		Conglomerate[i]->Conglomerate.Empty();
		for (int j = 0; j < Conglomerate.Num(); j++)
		{
			if (!(j == i))
			{
				Conglomerate[i]->Conglomerate.Add(Conglomerate[j]);
			}
			
		}
		Conglomerate[i]->Conglomerate.Add(this);
	}
	
}

//returns a complete list of blocks that are touching this one, the ones touching those, etc.
TArray<AWeldableObject*> AWeldableObject::AllTouched(TArray<AWeldableObject*> coveredWeldables)
{
	TArray<AWeldableObject*> ReturnWeldables;
	coveredWeldables.Add(this);
	for (int i = 0; i < TouchedWeldables.Num(); i++)
	{
		if (!(coveredWeldables.Contains(TouchedWeldables[i])))
		{
			coveredWeldables.Add(TouchedWeldables[i]);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
			ReturnWeldables.Append(TouchedWeldables[i]->AllTouched(coveredWeldables));
			ReturnWeldables.Add(TouchedWeldables[i]);
		}
	}
	
	return ReturnWeldables;
}

//gets the weldable at the top of the connection heirarchy that this one inhabits
AWeldableObject* AWeldableObject::GetOverallParent()
{
	if (!WeldParent)
	{
		return this;
	}

	return WeldParent->GetOverallParent();
}

//just a getter method for a boolean
bool AWeldableObject::GetCanMove()
{
	return CanMove;
}

// Called when the game starts or when spawned
void AWeldableObject::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AWeldableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

