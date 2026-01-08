#include <stdio.h>
#include "utils.h"
#include "mathe.h"

int main() {
    int zahlen[] = {3, 7, 2, 9, 5};
    int anzahl = 5;

    printf("=== Array Funktionen ===\n");
    printf("Zahlen: ");
    array_ausgeben(zahlen, anzahl);

    int summe = array_summe(zahlen, anzahl);
    printf("Summe: %d\n", summe);

    int max = array_max(zahlen, anzahl);
    printf("Maximum: %d\n", max);

    printf("\n=== Mathe Funktionen ===\n");
    printf("Fakultaet von 5: %d\n", fakultaet(5));
    printf("3 hoch 4: %d\n", potenz(3, 4));
    printf("Ist 7 eine Primzahl? %s\n", ist_primzahl(7) ? "Ja" : "Nein");
    printf("Ist 9 eine Primzahl? %s\n", ist_primzahl(9) ? "Ja" : "Nein");

    return 0;
}