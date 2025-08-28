#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void bubble_sort(int *vetor, int tamanho);

int busca_binaria(int *vetor, int tamanho, int valor, int *posicao);

int main(){
    int array[TAM] = {23,1,45,2,5,7,99,0,24,100};
    int buscar;

    printf("\nInforme o valor que deseja encontrar no vetor: ");
    scanf("%d",&buscar);

    bubble_sort(array,TAM);

    int p = 0; //posicao do valor

    int encontrou = busca_binaria(array,TAM,buscar,&p);

    if(encontrou == 1){
        printf("\nValor encontrado na posicao %d.",p);
    }else{
        printf("\nValor nao localizado no vetor.");
    }


}

void bubble_sort(int *vetor, int tamanho){
    int i, aux, flag;

    flag = 1;

    while(flag){
        flag = 0;

        for(i=0;i<tamanho - 1;i++){
            if(*(vetor + i) > *(vetor + (i + 1))){
                aux = *(vetor + i);
                *(vetor + i) = *(vetor + (i + 1));
                *(vetor + (i + 1)) = aux;
                flag = 1;
            }
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