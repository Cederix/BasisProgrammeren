#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int KomtVoor(int * arr, int lengte)
{
	int a;
	printf("Voer een integer in: ");
	scanf("%d", &a);
	for (int i = 0; i < lengte; i++)
	{
		if (a == arr[i])
		{
			return 1;
		}
	}
	return 0;
}

void main()
{
	int arr[5] = { 5,4,3,2,1 };
	int a = KomtVoor(arr , 5);
	printf("%d", a);
}