#include <stdio.h>
#include <stdlib.h>

int main(){

    // declarando variaveis
    int inteiro; 
    float real; 
    char caracter = 'M';

    inteiro = 15;
    real = 2.5;

    // declarando ponteiros
    int *ptrI;
    float *ptrR;
    char *ptrC;

    ptrI = &inteiro;
    ptrR = &real;
    ptrC = &caracter;

    //printando os conteudos antes da modificacao via ponteiros
    printf("\nConteudos antes da modificacao:\n");
    printf("Conteudo de 'inteiro': %d\n",*ptrI);
    printf("Conteudo de 'real': %f\n",*ptrR);
    printf("Conteudo de 'caracter': %c\n",*ptrC);

    printf("\n");

    // mudando o conteudo das variaveis via ponteiro
    *ptrI = 30;
    *ptrR = 9.8;
    *ptrC = 'Y';

    //printando os conteudos apos a modificacao
    printf("Conteudos apos modificacao:\n");
    printf("Conteudo de 'inteiro': %d\n",inteiro);
    printf("Conteudo de 'real': %f\n",real);
    printf("Conteudo de 'caracter': %c\n",caracter);





    return 0;
}