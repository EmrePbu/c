//Accessing 2 - D Array Elements In C Programming
#define _CRT_SECURE_NO_WARNINGS
#define		SIZE		3

#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, y;
	int a[SIZE][SIZE];

	for (x = 0; x < SIZE; ++x)
	{
		for (y = 0; y < SIZE; ++y)
		{
			printf("\nEnter the a[%d][%d] = ", x, y);
			(void)scanf("%d", &a[x][y]);
		}
	}

	for (x = 0; x < SIZE; ++x)
	{
		for (y = 0; y < SIZE; ++y)
		{
			printf("%d\t", a[x][y]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
