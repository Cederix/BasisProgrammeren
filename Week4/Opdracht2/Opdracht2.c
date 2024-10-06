#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int AantalKeer(int a)
{
	a++;
	return a;
}
void main()
{
	int n;
	int b = 0;
	printf("Voer een integer in:");
	scanf("%d", &n);
	while (n > 0)
	{
		b = AantalKeer(b);
		printf("%d, ", b);
		n--;
	}
}