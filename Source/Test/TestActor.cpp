#include "TestActor.h"
#include "Engine/Engine.h"

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	// 화면과 로그에 메시지 출력
	UE_LOG(LogTemp, Warning, TEXT("Hello from Test Module!"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Test Module Actor Spawned!"));
	}
}