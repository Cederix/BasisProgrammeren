#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
#pragma region unair
	/*
	
	/*int a = 1;
	int b = a <= 3;
	printf("De waarde is: %d", b);*/

	/*int a = 1;
	int b = a > 3;
	printf("De waarde is: %d", b);*/

	//int a = 1;
	//int b = 3;

	/*if (b == 3) // b=3 is een Toekenning (altijd waar)
		// b==3 is een Vergelijking
	{
		printf("hai");
	}*/

	/*if (b != 3) // b!=3  VERGELIJKING
	{
		printf("hai");
	} */

	/*
	7%3=1 2%3=0

	*/

	/*if (b == 3 || a == 1)
	{
		printf("hai");
	}*/
	 
	/* &EN operator
	| OF operator 
	&& EN
	|| OF
	! NOT */

	//pas op!
	/*int c = 10;
	int d = c & 2;
	printf("=%d", d);*/
	// 10 binair is 1010 1= 0001 2=0010
	// 1010 &                  1010 &
	// 0001 = 0000 = 0         0010 = 0010 = 2

	//mask
	//1010 1110
	//MSB  LSB
	//10101110 & 11110000
	//1010 0000

	// 3<j<5 NEE!! (3<j) && (j<5) JA!!
	//int e = 13;
	//printf("uitkomst: %d", !e); //niet waar
	// !(a<=10)||!(b<20)
	// a>10 OF b>=20

	
#pragma endregion unair
#pragma region while , for
	//int teller = 0;
	//while (teller < 100) // < 100 KEER, <= 101 keer
	//{
	//	printf("Tellen %d\n", teller);
	//	teller++;
	//}
	//eerst check dan lus!

	//do
	//{ 
	//	printf("Tellen %d\n", teller);
    //	teller++;
	//} while (teller <= 100);
	// eerst lus dan check!
	// belangrijk voor bestanden openen
	// kan geen do while gebruiken

	//for (int x = 0; x < 101; x++) // gevaarlijke for loop checkt voor x <101
	//{                             // != gaat exact kijken of het niet 100 is
	//	printf("Tellen (%d)\n", x);
	//}
	//int x: for(x=0;) x is geen getal global scope
	// int x in loop x is in de for loop local scope, doe dit xd
#pragma endregion while , for
#pragma region break/continue
	/*int a;
	while (true) //microcontroller werkt met while true
	{
		if (a > 0) //zonder {} does if de eerste volgende regel
		{
			break;
		}
	} */
	/*int a;
	while (true)
	{
		while (true)
		{
			break;
		}
		break;
	}*/
/*int a;
for (int x = 0; x < 8; x++)
{
	for (int y = 0; y < 8; y++) //geneste loops
	{

	}
}*/
/*for (int x = 0; x < 8; x++)
{
	for (int y = 0; y < 8; y++)
	{
		for (int z = 0; z < 8; z++)
		{

		}
	}*/

#pragma endregion break/continue
#pragma region switch
//switch (cijfer) cijfer is een ingerer
int a;
scanf("%d", a);
switch (a)
{
case 10:
{
	printf("cool");
	break;
}
case 9:
{

}
}
#pragma endregion switch
//conditionele operator
// x = (y<z) ? y : z
// if (y<z)
// x = y
// else x = z GROTE NEE
}