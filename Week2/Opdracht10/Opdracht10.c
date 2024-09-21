#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int a;
	printf("Voer een positief integer in: "); // er zijn oneindig reële getallen tussen 0 en n
	scanf("%d", &a);
	while (a >= 0)
	{
		double b = sqrt(a);
		--a;
		printf("%f ", b);
	}
}