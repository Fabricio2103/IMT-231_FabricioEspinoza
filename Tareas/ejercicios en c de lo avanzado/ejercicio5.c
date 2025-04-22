#include <stdio.h>
#include "funciones.h"

int main() {
    int opcion;
    int num1, num2;
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Sumar dos numeros\n");
        printf("2. Restar dos numeros\n");
        printf("3. Multiplicar dos numeros\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        if (opcion == 4) {
            printf("Saliendo del programa.\n");
            break;
        }
        if (opcion < 1 || opcion > 4) {
            printf("Opcion invalida.\n");
            continue;
        }
        printf("Ingresa el primer numero: ");
        scanf("%d", &num1);
        printf("Ingresa el segundo numero: ");
        scanf("%d", &num2);
        switch (opcion) {
            case 1:
                printf("Resultado: %d\n", sumar(num1, num2));
                break;
            case 2:
                printf("Resultado: %d\n", restar(num1, num2));
                break;
            case 3:
                printf("Resultado: %d\n", multiplicar(num1, num2));
                break;
        }
    }
    return 0;
}