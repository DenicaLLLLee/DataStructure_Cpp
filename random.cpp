/*
	Implementation of random.h
	Oyashi
	12/26/2016
*/

#include <cstdlib>
#include <ctime>
#include "random.h"

int RandomInteger(int low, int high){
	double d = double(rand()) / (double(RAND_MAX) + 1);
	int k = int(d * (high - low + 1));
	return low + k;
}

double RandomReal(double low, double high)
{
	double d = double(rand()) / (double(RAND_MAX) + 1);
	return low + d * (high - low);
}

bool RandomChance(double p)
{
	return RandomReal(0, 1) < p;
}

void Randomize()
{
	srand(int(time(NULL)));
}
