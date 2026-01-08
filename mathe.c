#include "mathe.h"

int fakultaet(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fakultaet(n - 1);
}

int potenz(int basis, int exponent) {
    int ergebnis = 1;
    for (int i = 0; i < exponent; i++) {
        ergebnis *= basis;
    }
    return ergebnis;
}

int ist_primzahl(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}