#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a=0;
	int b;
	printf("Voer een integer in: ");
	scanf("%d", &b);
	while (a < 214783647)
	{
		printf("%d\n", a);
		a= a+b;
	}
	if (a + b > 214783647)
	{
		printf("Overflow!");
	}
}