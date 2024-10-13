#include <stdio.h>

int Maximum(int * arr , int lengte)
{
	int a=0;
	for (int i = 0; i < lengte; i++)
	{
		if (a < arr[i])
		{
			a = arr[i];
		}
	}
	return a;
}

void main()
{
	int arr[7] = { 3,7,5,3,2,4,8 };
	int a = Maximum(arr, 7);
	printf("%d is het grootste getal in de array.", a);
}