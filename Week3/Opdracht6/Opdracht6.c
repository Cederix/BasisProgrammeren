#include <stdio.h>
void main()
{
	int a;
	int b=1;
	for (a = 0; a <= 200; a++) 
	{
		if (a!= b)
		{
			printf("%d ", a);
			a++;
			continue;
		}
		b = 2*a + 1;
	}
}