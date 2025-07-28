#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int cont = 0;
    int i = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    while(cont<n){
        if(i%2!=0){
            printf("%d ",i);

            cont++;
        }

        i++;

    }



    return 0;
}