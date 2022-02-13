#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		IN		1	/* inside a word */
#define		OUT		0	/* outside a word */


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

	//// Character counting
	//double nc;
	//for (nc = 0; getchar() != EOF; ++nc)
	//	; // null statement
	//printf("%.0f\n", nc);

	//// Line counting
	//int c, nl;
	//nl = 0;
	//while ((c = getchar()) != EOF)
	//{
	//	if (c == '\n')
	//	{
	//		++nl;
	//	}
	//}
	//printf("%d\n", nl);

	//// Word Counting
	//int c, nl, nw, nc, state;
	//state = OUT;
	//nl = nw = nc = 0;
	//while ((c = getchar()) != EOF)
	//{
	//	++nc;
	//	if (c == ' \n')
	//	{
	//		++nl;
	//	}
	//	if (c == ' ' || c == '\n' || c == '\t')
	//	{
	//		state = OUT;
	//	}
	//	else if (state == OUT)
	//	{
	//		state = IN;
	//		++nw;
	//	}
	//}
	//printf("%d %d %d \n", nl, nw, nc);
}
