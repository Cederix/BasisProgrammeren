#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Voer 3 integers in");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if ((a > b),(a > c))
		printf("%d is het grootst", a);
	else if ((b >a),(b>c))
		printf("%d is het grootst", b);
	else if ((c > a), (c > b))
		printf("%d is het grootst", c);
	
}