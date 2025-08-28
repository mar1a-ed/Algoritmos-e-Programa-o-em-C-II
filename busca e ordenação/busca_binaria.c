#include <stdio.h>
#include <stdlib.h>
#define T 11

int busca_binaria(int array[T], int val_procurado, int *p_encontrada);

int main(){
    int vetor[T] = {1,2,3,4,5,6,7,8,9,10,11}; 
    int buscar;

    printf("\nInforme o valor que deseja encontrar no vetor: ");
    scanf("%d",&buscar);

    int p; //posicao do numero, se encontrado

    int encontrado = busca_binaria(vetor, buscar, &p);

    if(encontrado == 1){
        printf("\nValor encontrado na posicao %d.",p);
    }else{
        printf("\nValor nao esta contido no vetor.");
    }

    return 0;
}

int busca_binaria(int array[T], int val_procurado, int *p_encontrada){

    int lim_esq, lim_dir;

    lim_esq = 0; //limite da esquerda do vetor
    lim_dir = T - 1; //limite da direita do vetor

    int pivo; //meio onde fica o cursor

    while(lim_esq <= lim_dir){

        pivo = (lim_esq + lim_dir) / 2;

        //se o valor está no meio do meu vetor
        if(val_procurado == array[pivo]){
            *p_encontrada = pivo;
            return 1;
        }

         //ajustando a posicao do meu cursor (pivo)
        if(val_procurado > array[pivo]){
            lim_esq = pivo + 1;
        }else{
            lim_dir = pivo - 1;
        }

    }

    return -1;

}