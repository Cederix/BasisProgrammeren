#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MaandKallender(int* MaandArray, int lengte, int Maand)
{
	static char* Maandnmr[12][4] = { {'J','a','n'},{'F','e','b'},{'M','a','r'},{'A','p','r'}, {'M','e','i'}, {'J','u','n'},{'J','u','l'},{'A','u','g'},{'S','e','p'},{'O','k','t'}, {'N','o','v'}, {'D','e','c'} };
	printf("        %c%c%c", Maandnmr[Maand - 1][0], Maandnmr[Maand - 1][1], Maandnmr[Maand - 1][2]);
	printf("\nMA DI WO DO VR ZA ZO");
	for (int i = 0; i < lengte; i++)
	{
		if (i % 7 == 0)
			printf("\n");
		if (MaandArray[i] < 10)
		{
			if (MaandArray[i] == 0)
				printf("   ");
			else
				printf("%d  ", MaandArray[i]);
		}
		else
		{
			if (MaandArray[i] == 0)
				printf("  ");
			else
				printf("%d ", MaandArray[i]);
		}
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
	int IsEenSchrikkel = 0;
	int InvoerJaar;
	printf("Voer een jaar in: ");
	scanf("%d",&InvoerJaar);
	for (int InvoerMaand = 1; InvoerMaand <= 12; InvoerMaand++)
	{
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

		MaandKallender(MaandArray, 42, InvoerMaand);
		printf("\n");
	}
}