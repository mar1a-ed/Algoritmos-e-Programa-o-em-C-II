#include <stdio.h>
#include <stdlib.h>

int soma_dobro(int *a, int *b);

int main(){
    int A, B;

    printf("Digite os valores de 'A' e 'B' respectivamente: ");
    scanf("%d %d", &A, &B);

    printf("A soma do dobro das duas variaveis eh: %d\n",soma_dobro(&A,&B));


    return 0;
}

int soma_dobro(int *a, int *b){

    *a *= 2;
    *b *= 2;

    return *a + *b;

}