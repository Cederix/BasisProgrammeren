#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("Groter dan 0");
	}
	else
	{
		printf("kleiner dan 0");
	}

}