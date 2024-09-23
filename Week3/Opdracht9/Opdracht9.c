#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int index;
	int a=0, b=1;
	printf("Voer een integer index in: ");
	scanf("%d", &index);
	for (index; index >= 0;index)
	{
		if (index == 0)
		{
			printf("%d", a);
			break;
		}
		--index;
		b = a + b;
		if(index == 0)
		{
			printf("%d", b);
			break;
		}
		a = a + b;
		--index;
	}
}