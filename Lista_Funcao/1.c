#include <stdio.h>
#include <stdlib.h>

int retorna_dobro(int numero);

int main(){
    int num;

    printf("\n");

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("\nO seu dobro eh: %d",retorna_dobro(num));


    return 0;
}

int retorna_dobro(int numero){

    return numero * 2;

}