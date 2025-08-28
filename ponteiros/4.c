#include <stdio.h>
#include <stdlib.h>

void troca_valores(int *A, int *B);

int main(){
    int num1, num2;

    printf("Valor de 'num1' eh: ");
    scanf("%d",&num1);

    printf("Valor de 'num2' eh: ");
    scanf("%d",&num2);

    troca_valores(&num1,&num2);

    return 0;
}

void troca_valores(int *A, int *B){
    int aux;

    aux = *A;
    *A = *B;
    *B = aux;

    printf("Os novos conteudos de 'num1' e 'num2' respectivamente sao: %d e %d\n",*A,*B);
}