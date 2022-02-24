#define _CRT_SECURE_NO_WARNINGS
#define		SIZE		3

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;
	int sum = 0;	
	int mat[SIZE][SIZE];

	for (x = 0; x < SIZE; ++x)
	{
		for (y = 0; y < SIZE; ++y)
		{
			printf("\nEnter the Element mat[%d][%d]:", x, y); (void)scanf("%d", &mat[x][y]);
		}
	}

	for ( x = 0; x < SIZE; x++)
	{
		for ( y = 0; y < SIZE; y++)
		{
			sum += mat[x][y];
		}
	}


	printf("\nSum of All Elements in Matrix : %d", sum);

	return EXIT_SUCCESS;
}
