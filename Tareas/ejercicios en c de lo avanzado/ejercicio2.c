#include <stdio.h>
#include "funciones.h"

int main(void){
    int numero;
    while (1) {
        printf("Ingresa un numero entero positivo (0 para salir): ");
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero < 0) {
            printf("El numero debe ser positivo.\n");
            continue;
        }
        int cantidad = contarDigitos(numero);
        printf("El numero tiene %d digitos.\n", cantidad);
    }
    printf("Programa finalizado.\n");
    return 0;
}