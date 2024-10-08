#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void swap(int* a, int* b);
//void DoeIetsLeuks(int * a, int * b);

/*
void PrintArray(double * y, int lengte)
{
	for (int i = 0; i < lengte; i++)
	{
		printf("Element %.2f\n", y[i]);
	}
}
*/
void PrintArrayTwee(char * schaakbord[][8], int lengte)
{
	for (int rij = 0; rij < lengte; rij++)
	{
		for (int kolom = 0; kolom < lengte; kolom++)
		{
			schaakbord[rij][kolom] = ' ';
		}
	}
}
void main()
{
#pragma region ONDERWERP_arrays
	//int a1 = 2; //inefficient.
	//int a2 = 6;
	/*
	//tabel in C
	int tabel[5]; //maakt 5 integers

	//vullen van tabel
	tabel[0] = 2; // 0 = index
	tabel[1] = 26;
	tabel[2] = 112;
	tabel[3] = 99;
	tabel[4] = 36;

	//printf("Het %d e element is %d\n", 3, tabel[2]); //3rde element = 2 ,want het begint bij [0]

	for (int i = 0; i < 5; i++)
	{
		printf("Het %d e element is %d\n", i+1, tabel[i]);
	}
	*/

	
	//double cijfer[10] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };

	/*double cijfer[10]; //geen waarden voor cijfers

	for (int i = 0; i < 10; i++)
	{
		cijfer[i] = 0,0;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("Het %f e cijfer is %f\n", i + 1, cijfer[i]);
	}
	*/
#pragma endregion ONDERWERP_arrays
	/*
	int A[6] = {1,2,3,4,5,6};
	int B[6] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 6; i++)
	{
		if (A[i] != B[i])
		{
			printf("Niet gelijk");
			break;
		}
		else
			printf("Gelijk");
	}
	*/
#pragma region ONDERWERP_pointers
	/*
	// int double float en char zijn types

	int x = 6; // staat 06 00 00 00 4 bytes

	// geheugen || waarde
	// adress type van 4 (int)

	int* adress = &x;
	printf("de waarde van x is %d\n", x);
	printf("het adress van x is %x\n", adress); //x voor hexidecimaal

	// adress++ = adress +4
	*/

	// int a;
	// int* p;
	// p= &a      //adress operator
	// print (*p) = reference operator geef de inhoud van dit adress

	/*
	//call by reference
	int a = 1, b = 2;
	printf("Waarde van a = %d\n", a);
	printf("Waarde van b = %d\n", b);
	DoeIetsLeuks(&a, &b);
	printf("M: Waarde van a = %d\n", a);
	printf("M: Waarde van b = %d\n", b);
	*/

	//int a = 2, b = 4;
	//swap(&a, &b);
	//printf("a = %d en b = %d ",a, b);
#pragma endregion ONDERWERP_pointers
	//double y[4] = { 10,11,12,13 };
	//PrintArray(y, 4);
#pragma region ONDERWERP_strings&bubble
	// eendimensionale array van chars
	// 
	//char* naam = "Jan";
	//printf("De maand is %c", naam[2]);

	char schaakbord[8][8];
	PrintArrayTwee(schaakbord, 8);
#pragma endregion ONDERWERP_strings&bubble
}
/*
void DoeIetsLeuks(int * a, int * b)
{
	*a += 300; //inhoud van adress a en b worden verandert
	*b -= 200; //je werkt met hetzelfde adress
	printf("F: Waarde van a = %d\n", *a);
	printf("F: Waarde van b = %d\n", *b);
}
*/
/*
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/