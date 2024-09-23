#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	float a, b, c, d, e, f, g;
	printf("Geef 6 floats: ");
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	g = (a + b + c + d + e + f) / 6;
	if (g >= 5.5)
		printf("%.1f Voldoende!", g);
	else
		printf("%.1f Onvoldoende!", g);
}