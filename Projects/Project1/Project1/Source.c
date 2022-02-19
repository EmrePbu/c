#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	for (;;)
	{
		switch (rand() % 7 + 1)
		{
		case 1:
			printf("Pazartesi\n");
			break;
		case 2:
			printf("Sali\n");
			break;
		case 3:
			printf("Carsamba\n");
			break;
		case 4:
			printf("Persembe\n");
			break;
		case 5:
			printf("Cuma\n");
			break;
		case 6:
			printf("Cumartesi\n");
			break;
		case 7:
			printf("Pazar\n");
			break;
		default:
			break;
		}
		if (getchar() == 'q')
			break;
	}
}
