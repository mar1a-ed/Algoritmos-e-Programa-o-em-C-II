#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro;
    float real;
    char caracter = 'M';

    inteiro = 15;
    real = 2.5;

    int *ptrI;
    float *ptrR;
    char *ptrC;

    ptrI = &inteiro;
    ptrR = &real;
    ptrC = &caracter;

    printf("\nConteudos antes da modificacao:\n");
    printf("Conteudo de 'inteiro': %d\n",*ptrI);
    printf("Conteudo de 'real': %f\n",*ptrR);
    printf("Conteudo de 'caracter': %c\n",*ptrC);

    printf("\n");

    *ptrI = 30;
    *ptrR = 9.8;
    *ptrC = 'Y';

    printf("Conteudos apos modificacao:\n");
    printf("Conteudo de 'inteiro': %d\n",*ptrI);
    printf("Conteudo de 'real': %f\n",*ptrR);
    printf("Conteudo de 'caracter': %c\n",*ptrC);





    return 0;
}