#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	if (a > 214783647)
		printf("Te groot, Overflow");
	else
		printf("%d", a);

}