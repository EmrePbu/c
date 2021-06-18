#include <stdio.h>
#include <time.h>

void structType()
{
	struct now
	{
		char day[30], month[12];
		int year;
	} now;

	now.year = 1997;
	now.day[0] = 1;
	now.month[0] = 1;

	printf("%d %d %d", now.day[0], now.month[0], now.year);
}

void typedefType()
{
	typedef int number;
	number unit = 19;
	printf("%d", unit);
}

void getDate()
{
	typedef struct
	{
		int year;
		int day, month;
	} date;
	date n;
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	n.year = tm.tm_year + 1900;
	n.month = tm.tm_mon + 1;
	n.day = tm.tm_mday;
	printf("%d-%d-%d", n.year, n.month, n.day);
	//printf("now : %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void enumType()
{
	enum BOOLEAN
	{
		YANLIS,
		DOGRU
	};
	enum BOOLEAN sonuc;
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	sonuc = x % 2;
	if (sonuc == DOGRU)
	{
		printf("Girilen sayi tektir");
	}
	else
	{
		printf("Girilen sayi cifttir");
	}
}

int main()
{
	//structType();
	//typedefType();
	//getDate();
	enumType();
	return (0);
}