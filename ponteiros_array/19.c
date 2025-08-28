#include <stdio.h>
#include <stdlib.h>
#define N 5

void maior_valor_array(int *vetor, int tamanho, int *maior, int *quantidade);

int main(){
    int array[N];
    int maior_valor;
    int qtd = 0;

    for(int i=0;i<N;i++){
        printf("[%d] = ",i);
        scanf("%d",&array[i]);
    }

    maior_valor = array[0];

    maior_valor_array(array, N, &maior_valor, &qtd);

    printf("\nO maior valor inserido eh: %d",maior_valor);

    printf("\nEle aparece no vetor %d vezes.",qtd);

    return 0;
}

void maior_valor_array(int *vetor, int tamanho, int *maior, int *quantidade){

    for(int j=0;j<tamanho;j++){
        if(*(vetor + j) > *maior){
            *maior = *(vetor + j);
        }   
    }

    for(int j=0;j<tamanho;j++){
        if(*(vetor + j) == *maior){
            (*quantidade)++;
        }
    }
}