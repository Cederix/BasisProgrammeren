#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	while (a <= 100)
	{
		printf("%d\n", a);
		a = a * -2;
	}
}