#include <stdio.h>
#include "utils.h"

void array_ausgeben(int arr[], int n) {
    printf("|");
    for (int i = 0; i < n; i++) {
        printf("%d|", arr[i]);
    }
    printf("\n");
}

int array_summe(int arr[], int n) {
    int summe = 0;
    for (int i = 0; i < n; i++) {
        summe += arr[i];
    }
    return summe;
}

int array_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}