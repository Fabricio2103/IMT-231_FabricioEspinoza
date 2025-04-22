#include <stdio.h>
#include "funciones.h"

int main() {
    int numero;
    while (1) {
        printf("Ingresa un numero entero positivo (0 o negativo para salir): ");
        scanf("%d", &numero);
        if (numero <= 0) {
            break;
        }
        int resultado = factorial(numero);
        printf("El factorial de %d es: %d\n", numero, resultado);
    }
    printf("Programa finalizado.\n");
    return 0;
}
