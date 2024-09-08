#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float btw;
	printf("Voer uw prijs excl btw in: ");
	scanf("%f", &btw);
	printf("Uw prijs incl btw is %.2f", btw*1.21);


}