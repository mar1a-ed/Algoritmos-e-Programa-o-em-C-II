#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float esquerdo;
    float direito;
}coordenadas;

int main(){
    coordenadas plano;
    int altura, base, area;

    printf("Digite as coordenadas superior e inferior direito: ");
    scanf("%f",&plano.direito);

    printf("Digite as coordenadas superior e inferior esquerdo: ");
    scanf("%f",&plano.esquerdo);





    return 0;
}