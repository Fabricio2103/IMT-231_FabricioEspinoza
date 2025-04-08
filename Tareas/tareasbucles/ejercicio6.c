#include <stdio.h>

int main() {
    int N;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número entero N: ");
    scanf("%d", &N);

    // Imprimir los números del 1 al N usando un bucle for
    printf("Secuencia de 1 a %d:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Salto de línea al final
    return 0;
}
