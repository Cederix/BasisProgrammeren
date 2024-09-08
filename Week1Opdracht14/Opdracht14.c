#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, c;
	printf("Voer een integers in: ");
	scanf("%d", &a);
	printf("Wilt u dit getal kwadrateren of wilt u de derde machtsheffing?\n Kies uit kwadrateren (1) of derde_machtsheffing (2)");
	scanf("%d", &c);
	if (c == "1")
		printf("Het gekwadrateerd getal is %d", a * a);
	else if (c == "2")
		printf("De derde machtsheffing van het getal is %d", a * a * a);
}