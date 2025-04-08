#include <stdio.h>

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número entero: ");
    scanf("%d", &num);

    // Verificar si el número es positivo, negativo o cero
    if (num > 0) {
        printf("El número %d es positivo.\n", num);
    } else if (num < 0) {
        printf("El número %d es negativo.\n", num);
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
