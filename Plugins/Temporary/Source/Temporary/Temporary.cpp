#include "Temporary.h"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("=== Temporary Plugin Started Successfully! ==="));
}

void FTemporaryModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary)

UTemporaryCharacterData::UTemporaryCharacterData()
{
	MaxHealth = 200.0f;
	AttackDamage = 35.5f;
}