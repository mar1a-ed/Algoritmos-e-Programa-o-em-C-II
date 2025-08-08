#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int *vetor;

    /*passo a passo o operador abaixo:
    1º calcula o numero de bytes necessarios, utilizando 5 * sizeof(int)
    2º reserva a quantidade com o malloc(bytes necessarios)
    3º converte o tipo void retornado para o tipo especifico atraves do casting
    */
   
    vetor = (int*) malloc(5*sizeof(int));

    if(vetor==NULL){
        printf("Nao ha espaco na memoria.");
        return 1;
    }

    for(int i=0;i<5;i++){
        printf("Vetor[%d] = ",i);
        scanf("%d",&vetor[i]);

    }

    printf("\nNumeros inseridos:\n");
    for(int i=0;i<5;i++){
        printf("Vetor[%d] = %d\n",i,vetor[i]);
    }

    free(vetor);

    printf("\nMemoria liberada.");
    vetor = NULL;

}
