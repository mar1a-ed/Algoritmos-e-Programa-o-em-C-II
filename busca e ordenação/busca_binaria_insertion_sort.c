#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprime_vetor(int *vetor, int tamanho);

void insertion_sort(int *vetor, int tamanho);

int busca_binaria(int *vetor, int tamanho, int valor, int *posicao);

int main(){
    int array[TAM] = {10,9,8,7,6,5,4,3,2,1};
    int buscar;

    printf("\nInforme o valor que deseja buscar no vetor: ");
    scanf("%d",&buscar);

    insertion_sort(array,TAM);

    printf("\nVetor ordenado!");

    int p = 0;

    int encontrou = busca_binaria(array,TAM,buscar,&p);

    if(encontrou==1){
        printf("\nValor encontrado na posicao %d.",p);
    }else{
        printf("\nValor nao encontrado no vetor.");
    }

    printf("\n");

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

        atual = *(vetor + i);

        j = i - 1;

        while((j>=0) && (atual < *(vetor + j))){

            *(vetor + (j + 1)) = *(vetor + j);

            j--;

        }

        *(vetor + (j + 1)) = atual;
    }

}

int busca_binaria(int *vetor, int tamanho, int valor, int *posicao){

    int lim_esq, lim_dir, pivo;

    lim_esq = 0;
    lim_dir = tamanho - 1;

    while(lim_esq <= lim_dir){

        pivo = (lim_esq + lim_dir) / 2;

        if(valor == *(vetor + pivo)){
            *posicao = pivo;
            return 1;
        }

        if(valor > *(vetor + pivo)){
            lim_esq = pivo + 1;
        }else{
            lim_dir = pivo - 1;
        }

    }

    return -1;

}