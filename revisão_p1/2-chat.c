#include <stdio.h>
#include <stdlib.h>

int maior(int *vetor, int tam);

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    int *ptr = (int *) malloc (n * sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&*(ptr + i));
    }

    int maior_valor = maior(ptr,n);

    printf("\nO maior valor do vetor eh: %d",maior_valor);

    free(ptr);

    return 0;
}

int maior(int *vetor, int tam){

    int maior;

    maior = vetor[0];

    for(int j=0;j<tam;j++){
        if(*(vetor + j) > maior){
            maior = *(vetor + j);
        }
    }

    return maior;

}