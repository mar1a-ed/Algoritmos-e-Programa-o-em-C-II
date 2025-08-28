#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//custo de O(n2)
void imprime_vetor(int *vetor, int tamanho);

void bubble_sort(int *vetor, int tamanho);

int main(){
    int array[TAM] = {10,9,8,7,6,5,4,3,2,1};

    printf("\nVetor antes da ordenacao:\n");

    imprime_vetor(array,TAM);

    bubble_sort(array,TAM);

    printf("\n");
    
    printf("\nVetor apos ordenacao:\n");
    imprime_vetor(array,TAM);

    return 0;
}

void imprime_vetor(int *vetor, int tamanho){
    int i;

    for(i=0;i<tamanho;i++){
        printf("[%d] = %d ",i,*(vetor + i));
    }


}

void bubble_sort(int *vetor, int tamanho){
    int i, aux, flag;

    flag = 1; //flag para verificar se o vetor esta ordenado

    while(flag){
        flag = 0;

        for(i=0;i<=tamanho - 1;i++){
            if(*(vetor + i) > *(vetor + (i+1))){
                aux = *(vetor + i);
                *(vetor + i) = *(vetor + (i + 1));
                *(vetor + ( i + 1)) = aux;
                flag = 1;
            }
        }

    }

}