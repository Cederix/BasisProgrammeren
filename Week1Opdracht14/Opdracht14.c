#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	int c;
	printf("Voer een integers in: \n");
	scanf("%d", &a);
	printf("Uw getal is %d\nWilt u dit getal kwadrateren of wilt u de derde machtsheffing?\n Kies uit kwadrateren (1) of derde machtsheffing (2)", a);
	scanf("%d", &c);
	if (c == 1)
	{
		printf("\nHet gekwadrateerd getal is %d", a * a);
	}
	else if (c == 2)
	{
		printf("\nDe derde machtsheffing van het getal is %d", a * a * a);
	}
}