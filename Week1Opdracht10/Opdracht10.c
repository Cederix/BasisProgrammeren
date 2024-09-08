#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float U;
	float R;
	printf("voer de spanning (V) en de weerstand in (Ohm):");
	scanf("%f", &U);
	scanf("%f", &R);
	printf("De stroomsterkte is %f A", U / R);
}