// Made in the The Unreal Engine Developer Course - Learn C++ & Make Games course by Gyetvai Tam�s


#include "PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}
