#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprime_vetor(int *vetor, int tamanho);

void selection_sort(int *vetor, int tamanho);

int busca_binaria(int *vetor, int tamanho, int valor, int *posicao);

int main(){
    int array[TAM] = {190, 23, 121, 191, 265, 22, 1, 31, 77, 78};
    int buscar;

    printf("\nInforme o valor que deseja buscar no vetor: ");
    scanf("%d",&buscar);

    selection_sort(array,TAM);

    int p = 0;

    int encontrou = busca_binaria(array,TAM,buscar,&p);

    if(encontrou == 1){
        printf("\nValor foi encontrado na posicao %d do vetor.",p);
    }else{
        printf("\nValor nao encontrado no vetor.");
    }

    printf("\n");

    printf("\nValores do vetor:\n");
    imprime_vetor(array,TAM);

    return 0;
}

void imprime_vetor(int *vetor, int tamanho){

    for(int i=0;i<tamanho;i++){
        printf("[%d] = %d ",i,*(vetor + i));
    }

}

void selection_sort(int *vetor, int tamanho){

    int i, j, min, aux;

    for(i=0;i<tamanho;i++){
        min = i;

        for(j=i+1;j<tamanho;j++){
            if(*(vetor+j) < *(vetor + min)){
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