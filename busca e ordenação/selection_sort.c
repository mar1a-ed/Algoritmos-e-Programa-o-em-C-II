#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprime_vetor(int *vetor, int tamanho);

void selection_sort(int *vetor, int tamanho);

int main(){
    int array[TAM] = {10,9,88,4,35,2,31,1,0,3};
    
    printf("\nVetor antes da ordenacao:\n");
    
    imprime_vetor(array,TAM);

    printf("\n");

    selection_sort(array,TAM);

    printf("\nVetor apos ordenacao:\n");

    imprime_vetor(array,TAM);


    return 0;
}

void imprime_vetor(int *vetor, int tamanho){

    for(int i=0;i<tamanho;i++){
        printf("[%d] = %d",i,*(vetor + i));
    }

}

void selection_sort(int *vetor, int tamanho){

    int i, j, min, aux;

    for(i=0;i<tamanho;i++){
        min = i; //posicao do menor valor
        for(j=i+1;j<tamanho;j++){
            if(*(vetor + j) < *(vetor + min)){
                min = j;
            }
        }

        if(min != i){
            aux = *(vetor + i);
            *(vetor + i) = *(vetor + min);
            *(vetor + min) = aux;
        }
    }
    
}