#include <stdio.h>
#include <stdlib.h>

int main(){
    char estado_civil;

    printf("\n");

    printf("Digite seu estado civil: ");
    scanf(" %c",&estado_civil);

    switch(estado_civil){
        case 'c':
            printf("Indicacao: Caramel Sweet & Salt.\n");
            break;
        case 's':
            printf("Indicacao: London Pub.\n");
            break;
        case 'v':
            printf("Indicacao: XI Baile da Melhor Idade.\n");
            break;
        case 'd':
            printf("Indicacao: Academia Smart Fit.\n");
            break;
        default:
            printf("Entrada desconhecida.\n");

    }


    return 0;
}