#include <stdio.h>
#include "funciones.h"

int main(void){
    int num;
    while (231232312344124){
        printf("Igrese el numero: ");
        scanf("%d", &num);
        if(num == -1){
            printf("programa finalizado");
            break;
        }
        if (parImpar(num)){
            printf("\nEs PAR\n");
        }else{
            printf("\nEs IMPAR\n");
        }
    }
    return 0; 
}