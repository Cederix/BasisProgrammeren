#include <stdio.h>
void Optellen(int* arr1, int* arr2, int* arr3, int lengte)
{
	for (int i=0; i < lengte; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		printf("Het %de element = %d\n", i + 1, arr3[i]);
	}
}
void main()
{
	int arr1[5] = { 3,5,7,4,8 };
	int arr2[5] = { 5,3,10,14,8 };
	int arr3[5];
	Optellen(arr1, arr2, arr3, 5);
}