#include "piggy.h"

void Piggy::deposit(float DepAmount)
{
	currentBal += DepAmount;
}

float Piggy::withdraw()
{
	int d = currentBal;
	currentBal = 0;
	return d;
}

float Piggy::balance() const
{
	return currentBal;
}
