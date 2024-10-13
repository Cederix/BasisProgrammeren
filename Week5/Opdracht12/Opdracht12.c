#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printMaand(int * MaandArray, int lengte)
{
	for (int i = 0; i < lengte; i++)
	{
		printf("%d ", MaandArray[i]);
	}
}

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
int  eersteWeekDagMaand(int m, int y, int s)
{
	int arr1[12] = { 0,31,60,90,120,151,181,212,243,273,304,334 };
	if (m < 3 && IsSchrikkel(y) == 1)
		return (5 + s - 1 + arr1[m] + 365 * y) % 7;
	else
		return (5 + s + arr1[m] + 365 * y) % 7;
}

int vulMaandArray(int m, int y, int* Maand, int eerdag)
{
	int MaandLengteArray[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (IsSchrikkel(y) == 1 && m == 2)
	{
		for (int i = 0; i < 29; i++)
		{
			Maand[i + eerdag] = i + 1;
		}
	}
	else
	{
		for (int i = 0; i < MaandLengteArray[m - 1]; i++)
		{
			Maand[i + eerdag] = i + 1;
		}
	}
}

void main()
{
	int InvoerMaand;
	int InvoerJaar;
	int IsEenSchrikkel = 0;

	printf("Voer een maand en een jaar in: ");
	scanf("%d%d", &InvoerMaand, &InvoerJaar);

	for (int i = InvoerJaar - 2000; i >= 0; i--)
	{
		IsEenSchrikkel += IsSchrikkel(i);
	}

	int EersteDag = eersteWeekDagMaand(InvoerMaand - 1, InvoerJaar - 2000, IsEenSchrikkel);

	int MaandArray[42];
	for (int i = 0; i < 42; i++)
	{
		MaandArray[i] = 0;
	}
	vulMaandArray(InvoerMaand, InvoerJaar, MaandArray, EersteDag);

	printMaand(MaandArray,42);
}