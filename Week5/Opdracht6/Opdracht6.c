#include <stdio.h>

void sorteer(int * arr, int lengte)
{
	int a;
	int b=6;
	int c;
	for (int i = 0; i+1 < lengte; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			a = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = a;
			printf("%d\n", arr[i]);
		}
		else
		{
			c = arr[i];
			arr[i+1] = arr[b];
			arr[i + 1] = c;
			printf("%d\n", arr[i]);
			i = 0;
			b--;
		}
	}
}

void main()
{
	int arr[6] = {9,8,7,6,5,4};
	sorteer(arr, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%d",arr[i]);
	}
}