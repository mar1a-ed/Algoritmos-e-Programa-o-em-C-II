#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main(){
    int num1 = 20;
    int num2 = 15;

    troca(&num1,&num2);

    printf("\n'num1' e 'num2': %d, %d",num1,num2);


    return 0;
}

void troca(int *a, int *b){

    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

}