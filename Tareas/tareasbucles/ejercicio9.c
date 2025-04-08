#include <stdio.h>

int main() {
    int num;
    int contador = 0;

    // Solicitar al usuario que ingrese un número entero
    printf("Introduce un número entero: ");
    scanf("%d", &num);

    // Si el número es negativo, lo convertimos a positivo
    if (num < 0) {
        num = -num;
    }

    // Contar los dígitos
    do {
        num = num / 10; // Dividir el número entre 10
        contador++;     // Aumentar el contador por cada división
    } while (num > 0);

    // Mostrar el resultado
    printf("El número tiene %d dígitos.\n", contador);

    return 0;
}
