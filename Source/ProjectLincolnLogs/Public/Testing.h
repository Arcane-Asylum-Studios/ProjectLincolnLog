

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Testing.generated.h"

UCLASS()
class PROJECTLINCOLNLOGS_API ATesting : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATesting();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
