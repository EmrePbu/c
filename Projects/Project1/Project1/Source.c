#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

void func(int a)
{
	printf("%s fonksiyonuna gelen paramatre degeri : %d", __func__, a);
}


int main(void)
{
	int i_val;
	printf("Bir tam sayi giriniz : ");
	(void)scanf("%d", &i_val);

	if (i_val != 0)
	{
#line 2000 "emre.cCc"
		printf("%s dosyasinin %d. satirinda i_val degeri 0 dan farklý bir deger olarak girildi.\n", __FILE__, __LINE__);

		printf("%s\n", __TIME__);
		printf("%s\n", __TIMESTAMP__);
		printf("%s\n", __DATE__);

		func(30);
	}
}
