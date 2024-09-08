#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int t;
	printf("Voer tijd in seconde in: ");
	scanf("%d",&t);
	printf("de tijd: % d uur ", t / 3600);
	printf("%d minuten ",(t/60 - 60)%60);
	printf("en %d seconden", t % 60);
}