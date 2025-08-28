#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;

    printf("\nDigite o tamanho da alocacao: ");
    scanf("%d",&tam);

    int *vetor = (int*) malloc(tam * sizeof(int));

    printf("\nPreencha o vetor:\n");
    for(int i=0;i<tam;i++){
        printf("[%d] = ",i);
        scanf("%d",&*(vetor + i));
    }

    int par = 0;
    int impar = 0;

    for(int i=0;i<tam;i++){
        if(*(vetor + i) % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    printf("\n Tem %d numeros pares e %d numeros impares.",par,impar);

    free(vetor);
    
    return 0;
}