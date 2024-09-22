#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	int b = 1;
	int c = 1;
	printf("Voer een integer (1 t/m 10) in: ");
	scanf("%d", &a);
		while (1 <= a)
		{
			printf("%d\n", b);
			b = (b * 10) + c + 1;
			c++;
			a--;
			if (c == 9)
				c= c + 10;
		}
	
			
}