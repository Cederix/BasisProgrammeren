#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int a, b, c;
	printf("Voer 3 integers in: ");
	scanf("%d %d %d", &a, &b, &c);
	double D = (b * b) - (4 * a * c);
	double x1 = (-b + sqrt(D)) / (2 * a);
	if (D < 0)
	{
		printf("da kan niet");
	}
	else
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		printf("x1 = %f , x2 = %f", x1, x2);
	}
}