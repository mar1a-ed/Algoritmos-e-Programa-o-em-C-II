#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
    float matriz[TAM][TAM];
    float *ptr;

    ptr = &matriz[0][0];

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Endereco do indice [%d][%d] da matriz: %p\n",i,j,(ptr + i * TAM + j));
        }
    }

    return 0;
}