#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int KleinsteSomDeler(int b, int a)
{
	if (b == 1)
		return 1;
	while (1)
	{
		if (a%b==0 && b!=9)
		{
			if (a % KleinsteSomDeler(b-1, a) == 0)
			{
				return a;
			}
		}
		else if (b == 9)
		{
			if (a % 9 == 0)
			{
				return KleinsteSomDeler(b - 1, a);
			}
		}
		a++;
	}
}


void main()
{
	int a;
	int b;
	printf("Voer een integer in (1 t/m 10): ");
	scanf("%d",&a);
	if (a == 9)
	{
		printf("Bestaat niet!");
		return 0;
	}
	b = KleinsteSomDeler(a,1);
	printf("%d", b);
}