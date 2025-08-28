#include <stdio.h>
#include <stdlib.h>

int *aloca_memoria(int n);

void imprime_alocado(int *vetor, int tamanho);

void libera_memoria(int *vetor);

int main(){
    int qtd;

    printf("\nInsira a quantidade de posicoes inteiras que deseja alocar: ");
    scanf("%d",&qtd);

    int *ptr;
    
    ptr = aloca_memoria(qtd);

    printf("\nInsira os valores inteiros do vetor:\n");
    for(int i=0;i<qtd;i++){
        printf("[%d] = ",i);
        scanf("%d",&*(ptr + i));
    }

    printf("\nVetor:\n");
    imprime_alocado(ptr,qtd);


    libera_memoria(ptr);
    printf("\nMemoria liberada!");

    return 0;
}

int *aloca_memoria(int n){

    int *inteiro;

    return inteiro = (int*) malloc(n * sizeof(int));

}

void imprime_alocado(int *vetor, int tamanho){

    for(int j=0;j<tamanho;j++){
        printf("[%d] = %d\n",j,*(vetor + j));
    }

}

void libera_memoria(int *vetor){

    free(vetor);

}