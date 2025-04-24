#include <stdio.h>
#include "funciones.h"

int main(void) {
    int opcion, numero, pares, impares;
    while (1321231244124535) {
        printf("\n----> MENU <----\n");
        printf("1. Verificar si un numero es primo\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Contar digitos pares e impares entre 1 y N\n");
        printf("4. Mostrar multiplos de 3 entre 1 y N\n");
        printf("5. Salir del programa\n");
        printf("Seleccione una de las siguientes opciones: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &numero);
                if (numero <= 0) {
                    printf("Numero no valido. Debe ser positivo.\n");
                } else {
                    if (esPrimo(numero))
                        printf("%d es un numero primo.\n", numero);
                    else
                        printf("%d no es un numero primo.\n", numero);
                }
                break;
            case 2:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("Numero no valido. Debe ser positivo.\n");
                } else {
                    printf("El factorial de %d es %d\n", numero, factorial(numero));
                }
                break;
            case 3:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &numero);
                if (numero <= 0) {
                    printf("Numero no valido. Debe ser positivo.\n");
                } else {
                    contarDigitos(numero, &pares, &impares);
                    printf("Cantidad de digitos pares: %d\n", pares);
                    printf("Cantidad de digitos impares: %d\n", impares);
                }
                break;
            case 4:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d", &numero);
                if (numero <= 0) {
                    printf("Numero no valido. Debe ser positivo.\n");
                } else {
                    printf("Multiplos de 3 entre 1 y %d:\n", numero);
                    mostrarMultiplosDeTres(numero);
                }
                break;
            case 5:
                printf("Gracias por usar el programa.\n");
                return 0;

            default:
                printf("Tiene que ingresar una de las 5 opciones. Intente de nuevo.\n");
        }
    }
    return 0;
}