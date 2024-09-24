#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
#pragma region a 
	/*int a, b;
	unsigned int c = 1;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	for (b = 1; b <= a; ++b)
	{
		c *= b;
	}
	printf("%u\n", c);*/
#pragma endregion a
#pragma region b
	/*int a, b;
	float c = 1;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	if (a < 0)
	{
		printf("Dit kan dus niet!");
		return 0;
	}
	int d = a;
	for (b = 1; b <= a; ++b)
	{
		c *= b;
	}
	for (double e=2; c>=2; c)
	{
		e += 1/c;
		c /= a;
		if (d <= 34 && c < 2 )
		{
			printf("%f\n", e);
		}
		else if (d > 34 && c < 2)
		{
			printf("2.718282");
		}
		a--;
	}*/
#pragma endregion b
#pragma region c
	/*int a, b, x;
	float c = 1;
	printf("Voer twee integer in: ");
	scanf("%d %d", &a, &x);
	if (a < 0)
	{
		printf("Dit kan dus niet!");
		return 0;
	}
	if (a == 1 || a == 0)
	{
		printf("1");
		return 0;
	}
	int d = a;
	if (d > 34)
	{
		double e = 2.718282;
		double y = pow(e, x);
		printf("%f", y);
		return 0;
	}
	for (b = 1; b <= a; ++b)
	{
		c *= b;
	}
	double e;
	for (e=2; c>=2; c)
	{
		e += 1/c;
		c /= a;
		
		a--;
	}
		double y = pow(e, x);
		printf("%f", y);*/
#pragma endregion c
	
}