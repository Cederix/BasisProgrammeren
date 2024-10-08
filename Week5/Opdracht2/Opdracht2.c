#include <stdio.h>

void Som(int * arr , int lengte)
{
	int a=0;
	for (int i = 0; i < lengte; i++)
	{
		printf("Het %de element = %d\n", i + 1, arr[i]);
		a += arr[i];
		if (i+1 == lengte)
		{
			printf("\nDe som van de elementen = %d", a);
		}
	}
}
void main()
{
	int arr[5] = { 3,5,6,7,8,};
	Som(arr, 5);
}