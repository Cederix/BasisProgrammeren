#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	printf("Voer een teller en een noemer in: ");
	scanf("%d", & a);
	scanf("%d", &b);
	printf("De grote gemene deler is %d\n", a / b);
	printf("De rest is %d", a%b);

}