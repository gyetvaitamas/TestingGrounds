// Made in the The Unreal Engine Developer Course - Learn C++ & Make Games course by Gyetvai Tamás

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_API UChooseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UPROPERTY(EditAnyWhere, Category = "Blackboard")
	struct FBlackboardKeySelector IndexKey;
	
	UPROPERTY(EditAnyWhere, Category = "Blackboard")
	struct FBlackboardKeySelector WaypointKey;
	
};
