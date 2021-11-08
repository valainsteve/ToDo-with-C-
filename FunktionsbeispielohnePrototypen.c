#include <stdio.h>

/*Demonstration der Verwendung von Funktionen.
Es werden keine Prototypen verwendet. Daher stehen die
Funktionsdefinitionen vor der main Funktion, in der die
Funktionen verwendet werden */

void druckeMeineZahl(int zahl2)
{
    printf("Die Zahl ist %i ", zahl2);
    return;
}

int gibEineZahlEin()
{
    int zahl1;
    printf("Gib mal eine schoene Zahl ein, aber zackig! \n");
    scanf("%i",&zahl1);
    return zahl1;
}

int main()
{
    int zahl;
    zahl = gibEineZahlEin();
    druckeMeineZahl(zahl);
    return 0;

}


