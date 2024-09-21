#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	int b;
	printf("Voer 2 integers in: ");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a * b < 214783647)
		printf("Het product is %d", a * b);
	else
		printf("Overflow!");
}