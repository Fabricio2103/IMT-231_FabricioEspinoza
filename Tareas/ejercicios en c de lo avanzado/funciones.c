#include <stdio.h>

int parImpar(int a){
    return a%2==0;
}

int contarDigitos(int numero) {
    int contador = 0;
    while (numero > 0) {
        numero = numero / 10;
        contador++;
    }
    return contador;
}

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

void comparar(int a, int b) {
    if (a > b) {
        printf("%d es mayor que %d\n", a, b);
    } else if (b > a) {
        printf("%d es mayor que %d\n", b, a);
    } else {
        printf("Ambos numeros son iguales.\n");
    }
}

int esMultiploDe3(int numero) {
    return numero % 3 == 0;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}