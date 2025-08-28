#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;

    vetor = (int*) malloc(5 * sizeof(int)); //alocando na memoria 5 inteiros

    if(vetor==NULL){ //verificando se a memoria foi alocada (NULL = sem inicialização)
        printf("Não foi possivel alocar memoria.");
        return 1;
    }
        
    for(int i=0;i<5;i++){ //Preenchendo os bytes de inteiros reservados
        printf("\nDigite o %d valor do seu vetor de inteiros alocado: ",i+1);
        scanf("%d",&vetor[i]);

    }

    printf("\nValores alocados:\n");
    for(int i=0;i<5;i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }    


    free(vetor); //liberando a memoria apos execucao

    vetor = NULL;

    return 0;
}