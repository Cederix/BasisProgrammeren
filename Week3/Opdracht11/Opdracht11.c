#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	printf("Voer een jaartal in (t/m 2000): ");
	scanf("%d",&a);
	if (a > 2000)
	{
		printf("Jaartal is groter dan 2000");
		return 0;
	}
	printf("%d\n", a);
	while (a - 1000 >= 0)
	{
		printf("M");
		a -= 1000;
	} 
	while (a - 500 >= 0)
	{
		if (a >= 900)
		{
			printf("CM");
			a -= 900;
			break;
		}
		printf("D");
		a -= 500;
	} 
	while (a - 100 >= 0)
	{
		if (a >= 400)
		{
			printf("CD");
			a -= 400;
			break;
		}
		printf("C");
		a -= 100;
	}
	while (a - 50 >= 0)
	{
		if (a >= 90)
		{
			printf("XC");
			a -= 90;
			break;
		}
		printf("L");
		a -= 50;
	} 
	while (a - 10 >= 0)
	{
		if (a >= 40)
		{
			printf("XL");
			a -= 40;
			break;
		}
		printf("X");
		a -= 10;
	}
	while (a - 5 >= 0)
	{
		if (a == 9)
		{
			printf("IX");
			return 0;
		}
		printf("V");
		a -= 5;
	}
	while (a - 1 >= 0)
	{
		if (a == 4)
		{
			printf("IV");
			return 0;
		}
		printf("I");
		a -= 1;
	}
}