#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void eh_quadrado_perfeito(int numero);

int main(){
    int num;

    printf("\nDigite um numero: ");
    scanf("%d",&num);

    eh_quadrado_perfeito(num);

    return 0;
}

void eh_quadrado_perfeito(int numero){
    int resto;

    resto = sqrt(numero);

    if(numero<0){
        printf("So pode ser quadrado perfeito se for positivo e inteiro.");
    }else{
        if(resto*resto == numero){
            printf("O numero eh um quadrado perfeito!");
        }else{
            printf("O numero nao eh quadrado perfeito!");
        }
    }

}
