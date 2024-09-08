#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	printf("Voer 2 integers in");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
		printf("%d is groter", a);
	else
		printf("%d is groter", b);
}