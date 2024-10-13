#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IsSchrikkel(int a)
{
	if (a % 4 == 0 && a % 100 != 0)
	{
		return 1;
	}
	if (a % 400 != 0)
	{
		return 0;
	}
	return 1;

}
void main()
{
	for (int i=0; i < 2023; i++)
	{
		printf("%d: %d\n", i+1, IsSchrikkel(i+1));
	}
}