// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DemoPrimitiveComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class EDITORRENDERTOOLS_API UDemoPrimitiveComponent : public UPrimitiveComponent
{
	GENERATED_BODY()

	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	
protected:
	uint32 bDrawOnlyIfSelected : 1;
	FVector BoxExtent;
	FColor ShapeColor;
	float LineThickness;
};
