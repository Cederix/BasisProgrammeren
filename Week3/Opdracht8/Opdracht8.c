#include <stdio.h>
void main()
{
	double spaar = 1000, rente = 1.02, uit;
	int jaren = 0;
		while (jaren < 15)
		{
			jaren++;
			uit = spaar * rente;
			printf("jaar %d = %.2f euro\n",jaren,uit);
			spaar = uit;
		}

	
}