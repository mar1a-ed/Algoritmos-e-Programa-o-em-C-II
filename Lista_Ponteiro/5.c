#include <stdio.h>
#include <stdlib.h>

void maior_menor(int *a, int *b);

int main(){
    int num1, num2;

    printf("Digite 'num1': ");
    scanf("%d",&num1);

    printf("Digite 'num2': ");
    scanf("%d",&num2);

    maior_menor(&num1,&num2);

    printf("Maior e menor valores respectivamente: %d e %d\n",num1,num2);


    return 0;
}

void maior_menor(int *a, int *b){

    int aux;

    if(*a > *b){
        *a = *a;
        *b = *b;

    }else if(*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
        
    }
}