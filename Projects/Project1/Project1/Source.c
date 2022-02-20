#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	char c = 178;
	printf("%d,%c\n", c, c);
	if (c == 178)
		printf("dogru");
	else
		printf("yanlis");
}
