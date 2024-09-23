#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	printf("Voer een getal in: ");
	scanf("%d", &a);
	if (a == 2)
	{
		printf("priemgetal");
	}
	int b = a-1;
	for (b; b > 1; b--)
	{
		if ((a % b) == 0)
		{
			printf("NIET priemgetal");
			break;
		}
		else if (a % b != 0 && b == 2)
		{
			printf("priemgetal");
		}
		
	}
}