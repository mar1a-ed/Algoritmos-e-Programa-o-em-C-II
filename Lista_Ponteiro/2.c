#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("\nInsira o valor para 'num1': ");
    scanf("%d",&num1);

    printf("Insira o valor para 'num2': ");
    scanf("%d",&num2);

    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    // comparando enderecos das variaveis apontadas pelos ponteiros
    if(ptr1 > ptr2){
        printf("O endereco da variavel 'num1' eh maior\n");
    }else if(ptr1 < ptr2){
        printf("O endereco da variavel 'num2' eh maior\n");
    }else{
        printf("O endereco de ambas variaveis sao iguais\n");
    }


    return 0;
}