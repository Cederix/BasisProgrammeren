#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int som37(c)
{
	int d = c;
	int e = 0;
	while (c > 0)
	{
		if (d % 3 == 0)
		{
			printf("%d,", d);
			e += d;
		}

		if (c % 7 == 0)
		{
			printf("%d,", c);
			e += d;
		}
		c--;
		d--;
	}
	printf(" De som is: %d", e);
}

void main()
{
	int a;
	printf("Voer een parameter (integer) in: ");
	scanf("%d",&a);
	som37(a);
}