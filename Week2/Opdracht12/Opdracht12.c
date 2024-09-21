#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int x, n;
	printf("Voer 2 integers in: ");
	scanf("%d %d", &x, &n);
	int a = pow(x, n);
	printf("%d",a);
}