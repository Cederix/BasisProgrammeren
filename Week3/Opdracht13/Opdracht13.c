#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a;
	printf("Voer uw cijfer in (integer 1 t/m 10):");
	scanf("%d",&a);
	switch (a)
	{
	case (10):
		{
			printf("Uitmuntend");
			return 0;
		}
	case (9):
	{
		printf("Zeer goed");
		return 0;
	}
	case (8):
	{
		printf("Goed");
		return 0;
	}
	case (7):
	{
		printf("Redelijk goed");
		return 0;
	}
	case (6):
	{
		printf("Voldoende");
		return 0;
	}
	case (5):
	{
		printf("Bijna voldoende");
		return 0;
	}
	case (4):
	{
		printf("Matig");
		return 0;
	}
	case (3):
	{
		printf("Zeer matig");
		return 0;
	}
	case (2):
	{
		printf("Onvoldoende");
		return 0;
	}
	case (1):
	{
		printf("Zwaar onvoldoende");
		return 0;
	}
	}
}