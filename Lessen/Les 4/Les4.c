#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*
void doe wat (int x)   local scope
{
x=6;                =6
printf("%d",x)
}
void main()            local scope
x=4;                 =4
doe wat (x);
printf("%d",x)
*/

int som(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return (n + som(n - 1));
	}
}

/* double Discriminant(double a, double b, double c)
{
	double Disc = (b * b) - (4 * a * c);
	if (Disc < 0)
	{
		return -1;
	}
	else
	{
		return Disc;
	}
} */
//void print() //kent deze niet
//{
//	printf("ik print ook wat!!!\n");
//}
//double tweemaal(double x)
//{
//	return 2.0 *x;
//}
//void telop(int a, int b) // voor void kan je geen return geven
//{
//	a + b;
//}
//int Groterdan5(int c)
//{
//	if (c > 5)
//		return 1; //true
//	else
//		return 0; //false
//}
//double hallo(double b);

//blok is ruimte tussen {}

//standaart initialisatie
//double worteltrekken();
// globale scope
void main()
	{ //locale scope
	/*int maandag;
	printf("%d", maandag);*/      // mag nie!!!!
//opsplitsen probleem in kleine hanteerbare gedeeltjes
	int n = 5;
	int som();
#pragma region functies_1
	// datatype functienaam (parameterlijst) en {} bijv: void main(){}
	// als int main wordt er een geheel getal verwacht
	//code
	//return 0
	// void main geeft niks terug
/*	printf("ik print wat!!!\n");
	printf("voer functie uit:\n");
	print();
	printf("terug naar main!\n");*/ 
	//int resultaat = telop(2, 3);
	//printf("resultaat van de optelling = %d", resultaat);
	//int waarde = Groterdan5(4);
	//printf("%d", waarde);
	/*double a = 12;
	double b = 3;
	double c = -1;
	double Disc = Discriminant(a, b, c);
	printf("discriminant = %d", Disc);*/
//	double x = 5;
//double y = tweemaal(x);
//	printf("%d", y);
//double a = 3;
//	double hallo();
#pragma endregion functies_1
//	double getal = 169;
	//double wortel = worteltrekken(getal);
	//printf("%.2f", wortel);

//	static int maandag = 100; //gebruik maar niet
//	printf("%d", maandag);



}
//double worteltrekken(double getal)
//{
//	printf("%.2f\n", getal);
//	return sqrt(getal);
//}
//double hallo(double b)
//{
//	double a;
//	b = 2+a;
//	printf("%d", b);
//}