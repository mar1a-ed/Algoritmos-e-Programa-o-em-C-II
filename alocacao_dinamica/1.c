#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam = 5;
    int *ptr;

    ptr = (int*) malloc(tam * sizeof(int));

    printf("\nPreencha o vetor que foi alocado:\n");
    for(int i=0;i<tam;i++){
        printf("[%d] = ",i);
        scanf("%d",&*(ptr + i));
    }

    printf("\nValores inseridos:\n");
    for(int i=0;i<tam;i++){
        printf("[%d] = %d ",i,*(ptr + i));
    }

    free(ptr);

    printf("\nMemoria liberada!");

    return 0;
}