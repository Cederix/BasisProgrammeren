#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int PriemSom(int A)
{
	int b = A - 1;
	int c;
	while (b >= 1)
	{
		if (A % b != 0 && b == 2 || b==1)
		return A + PriemSom(A - 1);
		else if (A % b == 0)
		return PriemSom(A - 1);
		b--;
	}
}
void main()
{
	int a;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	int b = PriemSom(a);
	printf("%d", b);
}