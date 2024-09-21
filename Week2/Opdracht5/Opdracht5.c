#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	printf("Voer een integer in:");
	scanf("%d", &a);
	int b = a;
	for (a; a>0 ; b+(b-1),a-1)
	{
		printf("%d", b);
	}


}