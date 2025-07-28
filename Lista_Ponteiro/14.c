#include <stdio.h>
#include <stdlib.h>

void lendo_notas(float *nota1, float *nota2);

void calcula_media(float *nota1, float *nota2, float *m);

int main(){
    float p1 = 0, p2 = 0, media = 0;

    lendo_notas(&p1,&p2);

    calcula_media(&p1,&p2,&media);

    printf("\nImprimindo resultados:\n");
    printf("Notas lidas:\n");
    printf("Primeira nota: %f\n",p1);
    printf("Segunda nota: %f\n",p2);
    printf("Media ponderada: %f\n",media);


    return 0;
}

void lendo_notas(float *nota1, float *nota2){

    printf("Digite a primeira nota: ");
    scanf("%f",&*nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&*nota2);

}

void calcula_media(float *nota1, float *nota2, float *m){

    *m = (*nota1 + (*nota2 * 2)) / 3;

}
