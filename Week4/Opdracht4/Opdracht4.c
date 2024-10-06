#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CijferSwap(int a)
{
	printf("%d", a % 10);
	while (a > 1)
	{
		a /= 10;
		printf("%d", a % 10);
	}
}
void main()
{
	int a;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	int b = CijferSwap(a);
}
