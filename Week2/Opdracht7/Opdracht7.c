#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a, b;
	printf("voer 2 integers in: ");
	scanf("%d %d", &a, &b);
	if (a % b == 0)
		printf("Waar!");
	else
		printf("Niet waar!");
}