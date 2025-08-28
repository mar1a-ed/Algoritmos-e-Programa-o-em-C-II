#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main(){
    int num1 = 25;
    int num2 = 35;

    troca(&num1,&num2);


    printf("\nValores modificados: num1 %d e num2 %d",num1,num2);



    return 0;
}

void troca(int *a, int *b){

    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

}