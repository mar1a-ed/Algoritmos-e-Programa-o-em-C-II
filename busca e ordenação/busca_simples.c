#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 10

int busca_sequencial(int vetor[TAM], int valor, int *posicao);

int main(){
    int array[TAM] = {1, 33, 2, 44, 14, 55, 6, 93, 45, 8};
    int buscado;

    printf("\nInforme o valor que deseja encontrar: ");
    scanf("%d",&buscado);

    int p = 0;

    int encontrou;
    
    encontrou = busca_sequencial(array, buscado, &p);

    if(encontrou==1){
        printf("\nValor encontrado na posicao %d.",p);
    }else{
        printf("\nValor nao contido no vetor.");
    }

    return 0;
}

int busca_sequencial(int vetor[TAM], int valor, int *posicao){

    bool val_encontrado;

    for(int i=0;i<TAM;i++){
        if(vetor[i] == valor){
            val_encontrado = true;
            *posicao = i;
        }
    }

    if(val_encontrado){
        return 1;
    }else{
        return -1;
    }

}