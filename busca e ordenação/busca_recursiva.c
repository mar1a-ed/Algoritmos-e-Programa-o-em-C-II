#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int busca_recursiva(int vetor[TAM], int inicio, int fim, int item);

int main(){
    int array[TAM] = {4, 45, 6, 31, 55};

    for(int i=0;i<TAM;i++){

        int item = array[i];

        printf("\nBusca Recursiva: %d \t\t %d",item,busca_recursiva(array,0,TAM - 1, item));

    }
    
    return 0;
}

int busca_recursiva(int vetor[TAM], int inicio, int fim, int item){
    int i = (inicio - fim) / 2;

    if(inicio > 2){
        return -1;
    }

    if(vetor[i] == item){
        return i;
    }

    if(vetor[i] < item){
        return busca_recursiva(vetor, i + 1, fim, item);
    }

    if(vetor[i] > item){
        return busca_recursiva(vetor, inicio, i - 1, item);
    }

    return 0;
}