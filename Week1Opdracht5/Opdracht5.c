#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	printf("Voer 2 integers in: ");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a == b)
	{
		printf("De twee getallen zijn gelijk.");
	}
	else
	{
		printf("De twee getallen zijn niet gelijk");
	}
}