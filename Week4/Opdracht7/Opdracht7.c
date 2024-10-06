#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IsPriem(int a)
{
	if (a == 2)
	{
		printf("priemgetal");
	}
	int b = a - 1;
	for (b; b > 1; b--)
	{
		if ((a % b) == 0)
		{
			return 0;
		}
		else if (a % b != 0 && b == 2)
		{
			return 1;
		}
	}
}
void main()
{
	int a,c;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	c = IsPriem(a);
	printf("%d", c);
}
