#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;

    printf("\nInsira o tamanho do vetor a ser alocado na memoria: ");
    scanf("%d",&tamanho);

    int *vetor;

    vetor = (int*) malloc(tamanho * sizeof(int));

    if(vetor==NULL){
        printf("Nao há espaco na memoria.");
        return 1;
    }

    for(int i=0;i<tamanho;i++){
        printf("vetor[%d] = ",i);
        scanf("%d",&*(vetor + i));
    }

    printf("Numeros inseridos:\n");
    for(int i=0;i<tamanho;i++){
        printf("vetor[%d] = %d\n",i,*(vetor+i));
    }

    free(vetor);

    vetor = NULL;

    return 0;
}