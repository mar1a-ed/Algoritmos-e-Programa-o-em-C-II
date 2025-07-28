#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    int vetor[5], menor1 = INT_MAX, menor2 = INT_MAX, menor3 = INT_MAX;

    for(int i=0;i<5;i++){
        printf("[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<5;i++){
        if(menor1>vetor[i]){
            menor3 = menor2;
            menor2 = menor1;
            menor1 = vetor[i];
        }else if(menor2>vetor[i] && vetor[i]!=menor1){
            menor3 = menor2;
            menor2 = vetor[i];
        }else if(menor3>vetor[i] && vetor[i]!=menor1 && vetor[i]!=menor2){
            menor3 = vetor[i];
        }
    }

    printf("\nO primeiro menor valor do vetor eh: %d\n", menor1);
    printf("O segundo menor valor do vetor eh: %d\n", menor2);
    printf("O terceiro menor valor do vetor eh: %d\n", menor3);

    return 0;
}