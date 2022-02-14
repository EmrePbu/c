#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		IN		1	/* inside a word */
#define		OUT		0	/* outside a word */
#define		SIZE	10


void main(void)
{
	// Arrays
	// Count digits, white space, others
	int c, i, n_white, n_other;
	int n_digit[SIZE];
	n_white = n_other = 0;
	for (i = 0; i < SIZE; ++i)
		n_digit[i] = 0;
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++n_digit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++n_white;
		else
			++n_other;
	printf("digits [0...9] =");
	for (i = 0; i < SIZE; ++i)
		printf(" %d", n_digit[i]);
	printf(", white space = %d, other = %d\n",
		n_white, n_other);
}


//// Character Input and Output 

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