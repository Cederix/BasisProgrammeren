#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	char C;
	printf("Voer een letter in: ");
	scanf("%c", &C);
	int D = (int)C;
	if (D == 65 || D== 97 || D == 69 || D == 101 || D == 73 || D == 105 || D == 79 || D == 111 || D == 85 || D == 117)
	{
		printf("Deze letter is een klinker.");
	}
	else if (D == 89 || D== 121)
	{
		printf("Deze letter kan een klinker zijn.");
	}
	else
	{
		printf("Deze letter is een medeklinker.");
	}
}