#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int valores[TAM];
    int maior, menor, soma = 0;
    float media;

    for(int i=0;i<TAM;i++){
        printf("Entre com o numero %d: ",i+1);
        scanf("%d",&valores[i]);

    }

    menor = valores[0];
    maior = menor;

    for(int i=0;i<TAM;i++){
        if(valores[i]>maior){
            maior = valores[i];
        }

        if(valores[i]<menor){
            menor = valores[i];
        }
    }

    for(int i=0;i<TAM;i++){
        soma += valores[i];
    }

    media = soma / (float)TAM;

    printf("Os numeros digitados sao: ");
    for(int i=0;i<TAM;i++){
        printf("%d ",valores[i]);
    }
    printf("\n");

    printf("O maior valor eh: %d\n",maior);
    printf("O menor valor eh: %d\n",menor);
    printf("A media eh: %.1f",media);




    return 0;
}