#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int longitud, i;

    // Solicitar al usuario que ingrese una palabra
    printf("Introduce una palabra: ");
    scanf("%s", str);

    // Encontrar la longitud de la cadena
    longitud = 0;
    while (str[longitud] != '\0') {
        longitud++;
    }

    // Imprimir la cadena invertida
    printf("La palabra invertida es: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
