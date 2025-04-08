#include <stdio.h>

int main() {
    int x;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &x);

    // Mostrar la tabla de multiplicar del número x del 1 al 10
    printf("Tabla de multiplicar del %d:\n", x);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}
