#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10, b = 20;
    int *ptrA, *ptrB;

    ptrA = &a;
    ptrB = &b;

    if(ptrA > ptrB){
        printf("\nO endereco da variavel 'a' eh maior");
    }else if(ptrB > ptrA){
        printf("\nO endereco da variavel 'b' eh maior");
    }else{
        printf("\nO endereco de ambas eh igual");
    }


    return 0;
}