#include <stdio.h>
#include <stdlib.h>

void preenche_vetor(int *vetor, int tamanho, int num);

int main(){
    int array[10];
    int numero;

    printf("\nDigite um numero para preencher o array: ");
    scanf("%d",&numero);

    preenche_vetor(array, 10, numero);

    for(int i=0;i<10;i++){
        printf("Vetor[%d] = %d\n",i,array[i]);
    }

    return 0;
}

void preenche_vetor(int *vetor, int tamanho, int num){

    for(int i=0;i<tamanho;i++){
        *(vetor + i) = num;
    }

}
