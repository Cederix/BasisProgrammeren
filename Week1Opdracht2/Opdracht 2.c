#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Voer 3 integers in: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	float d = a + b + c;
	printf("Uw gemiddelde is %f", (d) / 3);
}