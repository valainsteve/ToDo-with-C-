#include <stdio.h>

/* Dieses Programm kompiliert nicht, weil keine Prototypen verwendet wurden und die
Funktionsdefinitionen erst nach dem Aufruf der Funktionen in main() erfolgen. */

int main()
{
    int zahl;
    zahl = gibEineZahlEin();
    druckeMeineZahl(zahl);
    return 0;

}

void druckeMeineZahl(int zahl)
{
    printf("Die Zahl ist %i ", zahl);
}

int gibEineZahlEin()
{
    int zahl;
    printf("Gib mal eine schöne Zahl ein, aber zackig! \n");
    scanf("%i",&zahl);
    return zahl;
}
