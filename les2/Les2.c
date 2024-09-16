#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
main()
{
#pragma region geheugen
	//variabelen gehele getallen
	// 1 byte is 8 bits = 255 hoogste begint bij 0
	// 1 bit kan een 0 of 1 zijn
	//int a= 10; //neemt 4 bytes in geheugen, 32 bits
	//short b= 20; //
	//long c= 30;
	//char d= 65;
	//char f = 'A';
	//char g = 'z';
	//long long e;
	//functie sizeof meet de geheugen op
	//printf("int heeft %d bytes\n", sizeof(a)); 4
	//printf("short heeft %d bytes\n", sizeof(b)); 2
	//printf("long heeft %d bytes\n", sizeof(c)); 4
	//printf("char heeft %d bytes\n", sizeof(d)); 1
	//printf("long long heeft %d bytes\n", sizeof(e)); 2
	//printf("%d",d);
	//printf("%c\n", d);
	//printf("%d", f);
	//printf("%c\n", f);
	//printf("%d", g);
	//printf("%c\n", g);
	//float x1;
	//double x2;
	//printf("float heeft %d bytes\n", sizeof(x1)); //4
	//printf("double heeft %d bytes\n", sizeof(x2)); //8
	// unsigned int voor -
	//unsigned int leeftijd;
	//printf("voer iets in: ");
	//scanf("%d", &leeftijd);
	//printf("%d", leeftijd);
#pragma endregion geheugen
	// functie: sizeof() 
	//%zu z= size_t - u = unsigned
#pragma region wiskunde
	//#include <math.h> !!!
	 //size_t()
	/*double getal = 169;
	double res = sin(getal);
	printf("sinus van %.2f is: %.2f", getal, res); */
#pragma endregion wiskunde
#pragma region conversies
	float getal = 123.786f; //getal wordt als double gezien zonder f
	int a = (int)getal; //casten naar een type
	printf("het getal is %d\n", a);

	int b = 212; // geen geheugen verlies!!! geen komma getal
	double bb = b;
#pragma endregion conversies


}
