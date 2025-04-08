#include <stdio.h>

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    printf("Introduce el primer número: ");
    scanf("%d", &num1);

    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Comparar los números
    if (num1 > num2) {
        printf("El primer número (%d) es mayor que el segundo número (%d).\n", num1, num2);
    } else if (num1 < num2) {
        printf("El segundo número (%d) es mayor que el primer número (%d).\n", num2, num1);
    } else {
        printf("Ambos números son iguales.\n");
    }

    return 0;
}
