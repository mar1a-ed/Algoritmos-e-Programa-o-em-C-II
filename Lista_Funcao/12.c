#include <stdio.h>
#include <stdlib.h>

int soma_algarismos(int numero);

int main(){
    int num;

    printf("\nDigite um numero que seja positivo e diferente de zero: ");
    scanf("%d",&num);

    if(num<=0){
        printf("Numero invalido");
        return 0;
    }

    printf("A soma dos algarismos do numero %d eh: %d",num,soma_algarismos(num));

    return 0;
}

int soma_algarismos(int numero){
    int soma;

    soma = 0;

    while(numero>0){
        soma += numero % 10;
        numero = numero / 10;
    }

    return soma;


}