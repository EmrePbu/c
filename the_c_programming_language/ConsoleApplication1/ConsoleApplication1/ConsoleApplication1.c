#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	/* Character Input and Output */

	/*int c;
	while ((c = getchar()) != EOF)
		putchar(c);*/

	/*long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);*/

	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		; // null statement
	printf("%.0f\n", nc);
}
