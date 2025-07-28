#include <stdio.h>
#include <stdlib.h>

int main(){
    double altura;

    printf("Digite sua altura: ");
    scanf("%lf",&altura);

    printf("\n");

    if(altura<=1.50){
        printf("O individuo eh: muito baixo\n");
    }else if(altura>1.50 && altura<=1.60){
        printf("O individuo eh: baixo\n");
    }else if(altura>1.60 && altura<=1.80){
        printf("O individuo eh: mediano\n");
    }else{
        printf("O individuo eh: alto\n");
    }

    return 0;
}