#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int negativos(float *vet, int N);

int main(){
    float array[TAM];

    for(int i=0;i<TAM;i++){
        printf("[%d] = ",i);
        scanf("%f",&array[i]);
    }

    printf("\nA quantidade de numeros negativos desse vetor eh: %d\n",negativos(array,TAM));

    return 0;
}

int negativos(float *vet, int N){

    int negativo = 0;

    for(int i=0;i<N;i++){
        if(*(vet + i) < 0){
            negativo++;
        }
    }

    return negativo;
}