// Made in the The Unreal Engine Developer Course - Learn C++ & Make Games course by Gyetvai Tamás


#include "PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}
