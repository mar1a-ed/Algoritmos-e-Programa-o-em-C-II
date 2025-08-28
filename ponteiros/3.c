#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    num1 = 20;
    num2 = 30;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    if(ptr1 > ptr2){
        printf("O conteudo do maior endereco eh: %d\n",*ptr1);
    }else if(ptr1 < ptr2){
        printf("O conteudo do maior endereco eh: %d\n",*ptr2);
    }else{
        printf("O conteudo de amabas as variaveis eh: %d e %d\n",*ptr1,*ptr2);
    }
        


    return 0;
}