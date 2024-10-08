#include <stdio.h>

void Kwadrateer(int * arr, int lengte)
{
	for (int i=0; i < lengte; i++)
	{
		printf("Het %de element kwadraat = %d\n",i+1 ,arr[i] * arr[i]);
	}
}
void main()
{
	int arr[5] = { 1,2,3,4,5 };
	Kwadrateer(arr , 5);
}