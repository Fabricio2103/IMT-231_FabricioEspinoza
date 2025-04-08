#include <stdio.h>

int main() {
    int year;

    // Solicitar al usuario que ingrese un año
    printf("Introduce un año: ");
    scanf("%d", &year);

    // Verificar si el año es bisiesto
    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
        printf("El año %d es bisiesto.\n", year);
    } else {
        printf("El año %d no es bisiesto.\n", year);
    }

    return 0;
}
