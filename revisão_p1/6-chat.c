#include <stdio.h>
#include <stdlib.h>

int *copia_vetor(int *origem, int n);

int main(){
    int qtd;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&qtd);

    int *primeiro = (int *) malloc (qtd * sizeof(int));

    for(int i=0;i<qtd;i++){
        scanf("%d",&*(primeiro + i));
    }

    int *segundo = copia_vetor(primeiro,qtd);

    printf("\nElementos do segundo vetor alocado: ");
    for(int i=0;i<qtd;i++){
        printf("%d ",*(segundo + i));
    }

    return 0;
}

int *copia_vetor(int *origem, int n){

    int *ptr = (int *) malloc (n * sizeof(int));

    for(int j=0;j<n;j++){
        *(ptr + j) = *(origem + j);
    }

    return ptr;

}