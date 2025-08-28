#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprime_vetor(int *vetor, int tamanho);

//consiste em empurrar todos os numeros para frente de um numero analisado até ordenar
void insertion_sort(int *vetor, int tamanho);

int main(){
    int array[TAM] = {10,9,8,7,6,5,4,3,2,1};

    printf("\nVetor antes da ordenacao:\n");
    imprime_vetor(array,TAM);

    insertion_sort(array,TAM);

    printf("\n");

    printf("\nVetor apos ordenacao:\n");
    imprime_vetor(array,TAM);

    return 0;
}

void imprime_vetor(int *vetor, int tamanho){

    for(int i=0;i<tamanho;i++){
        printf("[%d] = %d ",i,*(vetor + i));
    }

}

void insertion_sort(int *vetor, int tamanho){
    int i, j, atual;

    for(i=1;i<tamanho;i++){
        
        //elemento atual em analise
        atual = *(vetor + i);
        //elemento anterior ao analisado
        j = i - 1;

        //enquanto o indice j for menor do q o atual em analise, deve continuar ordenando
        while((j>=0) && (atual < *(vetor + j))){
            
            //posiciona os elementos uma posicao para frente
            *(vetor + (j + 1)) = *(vetor + j);

            j--;
        }

        *(vetor + (j + 1)) = atual;

    }

}