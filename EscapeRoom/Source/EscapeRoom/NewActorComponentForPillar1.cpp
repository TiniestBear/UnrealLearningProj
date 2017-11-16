// Copyright Michal Wiercioch 2017

#include "NewActorComponentForPillar1.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UNewActorComponentForPillar1::UNewActorComponentForPillar1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponentForPillar1::BeginPlay()
{
	Super::BeginPlay();
	FString objectName = GetOwner()->GetName();
	FString objectPos = GetOwner()->GetTransform().GetLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s ready and on position %s!"), *objectName, *objectPos);
	// ...
	
}


// Called every frame
void UNewActorComponentForPillar1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

