#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int a, b;
	printf("voer 2 integers in: ");
	scanf("%d %d", &a, &b);
	int c = (a % 10);
	int d = (b % 10);
	if (c / d == 1)
		printf("De laatste getallen zijn gelijk!");
	else
		printf("De laatste getallen zijn niet gelijk!");
}