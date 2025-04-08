#include <stdio.h>

int main() {
    int N;
    int suma = 0;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número entero N: ");
    scanf("%d", &N);

    // Calcular la suma de los primeros N números naturales
    for (int i = 1; i <= N; i++) {
        suma += i; // Acumula la suma
    }

    // Mostrar el resultado
    printf("La suma de los primeros %d números naturales es: %d\n", N, suma);

    return 0;
}
