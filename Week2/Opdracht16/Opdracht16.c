#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    int a, decimaal = 0, kracht = 1, eersteGetal, binairOri;

    printf("Geef een binaire reeks (1 en 0): ");
    scanf("%d", &a);

    binairOri = a;

    while (a != 0) {
        //Pakt het laatste getal van de binaire reeks (1001 = 1 || 1000 = 0)
        eersteGetal = a % 10;

        //Vermenigvuldigd dat eerste getal met de kracht, slaat dat op in het decimaal variabel.
        decimaal = decimaal + eersteGetal * kracht;

        //Deelt het binaire getal met 10 zodat er 1 getal af gaat (1001 -> 100 || 1000 -> 100) omdat het een int is slaat hij het komma getal niet op 
        a = a / 10;

        //Vermenigvuldigd de kracht met 2 omdat de machtheffing bij binair ook met zich met 2 verminigvuldigd in de reeks, hij begint bij 1 (Eerste getal met 1, tweede getal met 2, derde getal met 4...)
        kracht = kracht * 2;
    }

    printf("Het decimale getal van %d = %d", binairOri, decimaal);
}
