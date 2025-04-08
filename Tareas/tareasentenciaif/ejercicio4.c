#include <stdio.h>

int main() {
    int edad;

    // Solicitar al usuario que ingrese su edad
    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    // Clasificar la edad en los rangos correspondientes
    if (edad < 13) {
        printf("Infancia\n");
    } else if (edad >= 13 && edad <= 17) {
        printf("Adolescencia\n");
    } else {
        printf("Adultez\n");
    }

    return 0;
}
