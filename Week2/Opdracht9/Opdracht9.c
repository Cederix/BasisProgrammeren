#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a, b;
	double c, d, e;
	printf("Voer het aantal daluren per dag in: ");
	scanf("%d", &a);
	printf("Voer het aantal piekuren per dag in: ");
	scanf("%d", &b);
	c = a * 365 * 0.40;
	d = b * 365 * 0.46;

	if (a+b==24)
	{
		e = c + d + 80;
		printf("%.2f euro",e);

	}
}