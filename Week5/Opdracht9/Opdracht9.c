#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IsSchrikkel(int a)
{
	if (a % 4 == 0 && a % 100 != 0)
	{
		return 1;
	}
	if (a % 400 != 0)
	{
		return 0;
	}
	return 1;
}
int  eersteWeekDagMaand(int m,int y,int b)
{
	int arr1[12] = { 0,31,59,90,120,151,181,212,243,273,304,334};
	if (m < 3 && IsSchrikkel(y) == 1)
		return (5 + b-1 +arr1[m] + 365 * y) % 7;
	else 
		return (5 + b + arr1[m] + 365 * y) % 7;
}

void main()
{
	int m;
	int y;
	printf("Voer een maand en een jaar in (boven 2000): ");
	scanf("%d%d", &m, &y);
	int b = 0;
	for (int i = y-2000; i >= 0; i--)
	{
		b += IsSchrikkel(i);
	}
	int a = eersteWeekDagMaand(m-1, y-2000,b);
	printf("%d", a);
}