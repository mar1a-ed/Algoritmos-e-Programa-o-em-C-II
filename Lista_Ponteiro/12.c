#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac);

int main(){
    float numero;

    printf("\nDigite um numero real: ");
    scanf("%f",&numero);

    int parte_int = 0;
    float parte_frac = 0;

    frac(numero,&parte_int,&parte_frac);

    printf("\nParte Inteira do numero: %d\n",parte_int);
    printf("Parte Fracionaria do numero: %f",parte_frac);


    return 0;
}

void frac(float num, int *inteiro, float *frac){

    *inteiro = (int) num;
    *frac = num - *inteiro;

}