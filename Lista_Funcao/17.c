#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void soma_inteiros(int num1, int num2);

int main(){
    int a, b;

    printf("\nDigite o primeiro numero: ");
    scanf("%d",&a);

    printf("Digite o outro numero: ");
    scanf("%d",&b);

    soma_inteiros(a,b);

    return 0;
}

void soma_inteiros(int num1, int num2){
    int soma, aux;

    soma = 0;

    if(num1>num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    for(int i=num1+1;i<num2;i++){
        soma += i;
    }

    printf("A soma dos numeros inteiros entre %d e %d eh: %d",num1,num2,soma);


}