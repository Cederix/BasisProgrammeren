#include <stdio.h>

int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2)
{
	if (m1 >2 )
	{
		y1+=4;
	}
	if (m2 <= 2 && d2 < 29)
	{
		y2 -= 4;
	}
	
	
	return (y2 - y1) / 4 + 1;
}

void main()
{
	printf("%d schikkeldagen.", schrikkelDagen(1, 1, 2024, 2, 1, 2040));
}