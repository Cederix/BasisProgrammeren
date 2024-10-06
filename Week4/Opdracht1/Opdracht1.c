#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double gemiddelde(double a, int b, int c, int d)
{
	return (a + b + c + d) / 4;
}
void main()
{
	int a, b, c, d;
	printf("Voer 4 integers in: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	double g = gemiddelde(a,b,c,d);
	printf("%.2f", g);
}