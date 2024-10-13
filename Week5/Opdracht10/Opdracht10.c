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

int vulMaandArray(int m, int y,int * Maand)
{
	int MaandLengteArray[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	if (IsSchrikkel(y) == 1 && m == 2)
	{
		for (int i = 0; i < 29; i++)
		{
			Maand[i] = i + 1;
		}
	}
	else
	{
		for (int i = 0; i < MaandLengteArray[m-1]; i++)
		{
			Maand[i] = i + 1;
		}
	}
}

void main()
{
	int InvoerMaand;
	int InvoerJaar;
	printf("Voer een maand en een jaar in: ");
	scanf("%d%d", &InvoerMaand, &InvoerJaar);
	int MaandArray[42];
	for (int i=0; i < 42; i++)
	{
		MaandArray[i] = 0;
	}
	vulMaandArray(InvoerMaand, InvoerJaar, MaandArray);
		for (int i = 0; i < 42; i++)
		{
			printf("%d ", MaandArray[i]);
		}
}