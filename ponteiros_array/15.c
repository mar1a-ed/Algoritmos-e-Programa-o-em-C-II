#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void imprime_vetor(int *vetor, int tamanho);

int main(){
    int array[TAM];

    printf("Digite os valores do vetor: ");
    for(int i=0;i<TAM;i++){
        scanf("%d ",&array[i]);
    }

    imprime_vetor(array,TAM);

    return 0;
}

void imprime_vetor(int *vetor, int tamanho){

    for(int i=0;i<tamanho;i++){
        printf("[%d] = %d\n",i,*(vetor + i));
    }

}