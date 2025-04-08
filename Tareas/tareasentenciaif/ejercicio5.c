#include <stdio.h>

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número entero: ");
    scanf("%d", &num);

    // Verificar si el número es par o impar
    if (num % 2 == 0) {
        printf("El número %d es par.\n", num);
    } else {
        printf("El número %d es impar.\n", num);
    }

    return 0;
}
