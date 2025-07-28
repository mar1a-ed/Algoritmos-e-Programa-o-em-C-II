#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b);

int main(){
    int A, B;

    printf("\nInsira o valor de 'A': ");
    scanf("%d",&A);

    printf("Insira o valor de 'B': ");
    scanf("%d",&B);

    soma(&A,&B);

    printf("Valores de 'A' e de 'B' apos modificacao: %d e %d\n",A,B);

    return 0;
}

void soma(int *a, int *b){

    *a = *a + *b;
    *b = *b;
}