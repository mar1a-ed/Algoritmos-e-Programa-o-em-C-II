#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;

    printf("\nDigite o tamanho do vetor a ser alocado: ");
    scanf("%d",&tam);

    int *vetor;

    vetor = (int*) malloc(tam * sizeof(int));

    if(vetor == NULL){
        printf("Nao ha espaco na memoria.");
        return 1;
    }


    for(int i=0;i<tam;i++){
        printf("vetor[%d] = ",i);
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

    printf("\nQuantidade de numeros pares: %d\n",par);
    printf("Quantidade de numeros impares: %d\n",impar);

    free(vetor);

    vetor = NULL;



    return 0;
}