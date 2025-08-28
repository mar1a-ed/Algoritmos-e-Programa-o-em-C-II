#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;

    printf("\nDigite o tamanho do vetor de 'double' que deseja: ");
    scanf("%d",&tamanho);

    double *ptr;

    ptr = (double*) malloc(tamanho * sizeof(double));

    printf("\nPreencha o vetor:\n");
    for(int i=0;i<tamanho;i++){
        printf("[%d] = ",i);
        scanf("%lf",&*(ptr + i));
    }

    printf("\nValores do vetor:\n");
    for(int i=0;i<tamanho;i++){
        printf("[%d] = %lf ",i,*(ptr + i));
    }

    free(ptr);
    
    return 0;
}