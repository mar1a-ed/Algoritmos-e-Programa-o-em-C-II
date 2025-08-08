#include <stdio.h>
#include <stdlib.h>
#define TAM 1500

int main(){
    int *vetor;

    vetor = (int*) calloc(TAM, sizeof(int));

    if(vetor == NULL){
        printf("Nao foi possivel alocar memoria.");
        return 1;
    }

    printf("Vetor alocado:\n");
    for(int i=0;i<TAM;i++){
        printf("%d valor: %d\n",i,*(vetor + i));
    }

    for(int i=0;i<TAM;i++){
        *(vetor + i) = i;
    }

    printf("\nPrimeiros 10 valores:\n");
    for(int i=0;i<10;i++){
        printf("%d valor: %d\n",i,*(vetor + i));
    }

    printf("\nUltimos 10 valores:\n");
    for(int i=TAM - 10;i<TAM;i++){
        printf("%d valor: %d\n",i,*(vetor + i));
    }

    free(vetor);



    return 0;

}