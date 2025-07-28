#include <stdio.h>
#include <stdlib.h>

int retorne_maior(int a, int b);

int main(){
    int numero1, numero2;

    printf("\nDigite o primeiro numero: ");
    scanf("%d",&numero1);

    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);

    printf("O maior numero entre eles eh: %d",retorne_maior(numero1,numero2));


    return 0;
}

int retorne_maior(int a, int b){

    if(a>b){
        return a;
    }else{
        return b;
    }


}