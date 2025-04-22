#include <stdio.h>
#include "funciones.h"

int main() {
    int numero;
    int contador = 0;
    while (1) {
        printf("Ingresa un numero (-1 para salir): ");
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        if (esMultiploDe3(numero)) {
            contador++;
        }
    }
    printf("Total de multiplos de 3 ingresados: %d\n", contador);
    return 0;
}
