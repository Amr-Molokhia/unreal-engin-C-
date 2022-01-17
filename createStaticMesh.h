#pragma once

#include "GameFramework/Actor.h"
#include "CreateStaticMesh.generated.h"


class UBoxComponent;

UCLASS()
class UNREALCPP_API ACreateStatcMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	ACreateMesh();

    UProperty(VisibleAnywhere)
    
	UStaticMeshComponent* SuperMesh;
};