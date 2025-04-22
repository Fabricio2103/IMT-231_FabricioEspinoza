#include <stdio.h>
#include "funciones.h"

int main() {
    int num1, num2;
    while (1) {
        printf("Ingresa dos numeros enteros (0 0 para salir): ");
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0) {
            break;
        }
        comparar(num1, num2);
    }
    printf("Programa finalizado.\n");
    return 0;
}
