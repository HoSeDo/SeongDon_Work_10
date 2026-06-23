#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "UObject/NoExportTypes.h"
#include "Temporary.generated.h"

class FTemporaryModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UCLASS(BlueprintType)
class TEMPORARY_API UTemporaryCharacterData : public UObject
{
	GENERATED_BODY()

public:
	UTemporaryCharacterData(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	float AttackDamage;
};