#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int *c, int *d)
{
	int e;

	e = *c;
	*c = *d;
	*d = e;
}

void main()
{
	int a, b;
	printf("Voer 2 integers in");
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf(" a = %d en b = %d", a, b);
}