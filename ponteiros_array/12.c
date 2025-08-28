#include <stdio.h>
#include <stdlib.h>

int ordena_valores(int *A, int *B, int *C);

int main(){
    int num1, num2, num3;

    printf("\nInsira 3 numeros lado a lado com um espaco entre eles: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    printf("\nOs numeros sao iguais (1) ou ha valores diferentes (0)? %d",ordena_valores(&num1,&num2,&num3));

    printf("\nNumeros do maior para o menor: %d, %d e %d",num1,num2,num3);

    return 0;
}

//abc, acb, bca, bac, cba, cab
int ordena_valores(int *A, int *B, int *C){

    int aux;

    if(*A > *C && *C > *B){
        aux = *C;
        *C = *B;
        *B = aux;
    }

    if(*B > *C && *C > *A){
        aux = *A;
        *A = *B;
        *B = *C;
        *C = aux;
    }

    if(*B > *A && *A > *C){
        aux = *A;
        *A = *B;
        *B = aux;
    }

    if(*C > *B && *B > *A){
        aux = *A;
        *A = *C;
        *C = aux;
    }

    if(*A > *B && *A < *C){
        aux = *A;
        *A = *C;
        *B = aux;
        *C = *B;
   }

    if(*A == *B && *B == *C){
        return 1;
    }else{
        return 0;
    }

}