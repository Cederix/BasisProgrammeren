#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Fibonacci(int a)
{
	if (a <= 1)
		return a;
	else
		return (Fibonacci(a - 1) + Fibonacci(a - 2));
}
void main()
{
	int a;
	printf("Voer een index in: ");
	scanf("%d", &a);
	int b = Fibonacci(a);
	printf("%d", b);

}