#include <stdio.h>

/*Programmbeispiel zur Verwendung von Funktionen mit Prototypen.
Durch die Prototypen zu Beginn werden die Funktionen deklariert
und die Funktionsdefinition ist daher nach dem Aufruf in main() möglich,
wo die Funktionen verwendet werden */

void druckeMeineZahl();
int gibEineZahlEin();

int main()
{
    int zahl;
    gibEineZahlEin();
    druckeMeineZahl(zahl);
    return;

}

void druckeMeineZahl()
{
    int zahl;
    printf("Die Zahl ist %i ", zahl);
    return;
}

int gibEineZahlEin()
{
    int zahl;
    printf("Gib mal eine schoene Zahl ein, aber zackig! \n");
    scanf("%i",&zahl);
    return zahl;
}
