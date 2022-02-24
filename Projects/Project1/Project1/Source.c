#define _CRT_SECURE_NO_WARNINGS
#define     NPOINTS     100000

#include <stdlib.h>
#include <stdio.h>
#include "utils.h"


int main() {

	int insideCount = 0;
	for (int i = 0; i < NPOINTS; ++i)
	{
		double dX = (double)rand() / RAND_MAX;
		double dY = (double)rand() / RAND_MAX;
		if (dX * dX + dY * dY <= 1.)
		{
			++insideCount;
		}
	}

	printf("pi = %.12f\n", 4. * insideCount / NPOINTS);

	return (0);
}
