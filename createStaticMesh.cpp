#include "creatStaticMesh.h"

ACreateStaticMesh::ACreateStaticMesh()
{
    UStaticMeshComponent* StaticMesh = createDefaultSubobject<UStaticMeshComponent>(TEXT("STSTC MESH"));
}



