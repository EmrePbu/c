#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	/* Character Input and Output */

	//int c;
	//while ((c = getchar()) != EOF)
	//	putchar(c);

	//long nc;
	//nc = 0;
	//while (getchar() != EOF)
	//	++nc;
	//printf("%ld\n", nc);

	// Character counting
	//double nc;
	//for (nc = 0; getchar() != EOF; ++nc)
	//	; // null statement
	//printf("%.0f\n", nc);

	// Line counting
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
	}
	printf("%d\n", nl);
}