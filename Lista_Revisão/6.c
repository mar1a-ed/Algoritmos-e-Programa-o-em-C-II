#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, cont = 0, numero = 0;

    printf("Digite os valores para 'i' e 'j' respectivamente: ");
    scanf("%d %d",&i,&j);

    printf("Agora digite a quantidade 'n' que deseja: ");
    scanf("%d",&n);

    while(cont<n){
        if((numero%i==0) || (numero%j==0)){
            printf("%d ",numero);

            cont++;
        }

        numero++;
    }





    return 0;
}