#include <stdio.h>
#include "funciones.h"

int esPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void contarDigitos(int n, int *pares, int *impares) {
    int actual = 1;
    *pares = 0;
    *impares = 0;
    while (actual <= n) {
        int copia = actual;
        while (copia > 0) {
            int digito = copia % 10;
            if (digito % 2 == 0) (*pares)++;
            else (*impares)++;
            copia /= 10;
        }
        actual++;
    }
}

void mostrarMultiplosDeTres(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}