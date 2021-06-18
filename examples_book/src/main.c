#include <stdio.h>
#include <math.h>

const double PI = 3.14;

void calc_angle(int angle1, int angle2)
{
	if (2 <= (angle1 + angle2) && (angle1 + angle2) <= 179)
	{
		printf("Girilen degerler ucgen olma sartini saglar.\n");
		printf("Diger acinin degeri : %d", 180 - (angle1 + angle2));
	}
	else
	{
		printf("Girilen degerler ucgen olma sartini saglamaz.");
	}
}

double circle_area(int r)
{
	printf("%d yaricapina sahip cemberin alani ", r);
	return PI * r * r;
}

void fuelCons(double fuel, double km)
{
	/*
		15 100
		?    1
	*/
	printf("%4f unit per kilometers", (fuel / km));
}

void trig(int deg)
{
	printf("Cos(%d) = %f\n", deg, cos(deg));
	printf("Sin(%d) = %f\n", deg, sin(deg));
	printf("Tan(%d) = %f\n", deg, tan(deg));
}

int convertCelcius(double celcius)
{
	return (int)((celcius * 1.8) + 32);
}

void fourT(int num1, int num2)
{

	int input = 0;
	while (1)
	{
		printf("\nHangi islemi yapmak istersiniz:\n");
		printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
		printf("Cikis yapmak icin -1 girisini yapin\n");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("%d", (num1 + num2));
		}
		else if (input == 2)
		{
			printf("%d", (num1 - num2));
		}
		else if (input == 3)
		{
			printf("%d", (num1 * num2));
		}
		else if (input == 4)
		{
			printf("%f", (float)(num1 / num2));
		}
		else if (input == -1)
		{
			break;
		}
		else
		{
			printf("Yanlış giriş yaptınız.");
		}
	}
}

void exchange(double tl)
{
	printf("\nTl to Euro - %f", (tl / 4.0643));
	printf("\nTl to Dolar - %f", (tl / 3.8863));
}

int main()
{
	int value1, value2;
	printf("DEGERLERI GIRINIZ: ");
	scanf("%d %d", &value1, &value2);

	//calc_angle(value1, value2);

	//printf("%f", circle_area(value1));

	//fuelCons(15.0, 100.0);

	//trig(45);

	//printf("%d", convertCelcius(60));

	//fourT(value1, value2);

	//exchange(value1);

	return (0);
}