#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    while (1) {
        printf("Ingresa un numero positivo (numero negativo para salir): ");
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }
        suma += numero;
    }
    printf("La suma total de los valores positivos es: %d\n", suma);
    return 0;
}
