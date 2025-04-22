#include <stdio.h>

typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
void mostrarEstado(Semaforo estado) {
    switch (estado) {
        case ROJO:
            printf("Estado: ROJO - Detente\n");
            break;
        case VERDE:
            printf("Estado: VERDE - Avanza\n");
            break;
        case AMARILLO:
            printf("Estado: AMARILLO - Precaucion\n");
            break;
    }
}
int main() {
    Semaforo estado = ROJO;
    int ciclos = 0;

    while (ciclos < 10) {
        mostrarEstado(estado);

        if (estado == ROJO) {
            estado = VERDE;
        } else if (estado == VERDE) {
            estado = AMARILLO;
        } else {
            estado = ROJO;
        }

        ciclos++;
    }

    printf("Programa finalizado despues de 10 ciclos.\n");
    return 0;
}
