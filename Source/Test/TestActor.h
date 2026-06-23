#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h" // 5.5 버전부터는 .generated.h로 작성하시면 됩니다.

UCLASS()
class TEST_API ATestActor : public AActor
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
};