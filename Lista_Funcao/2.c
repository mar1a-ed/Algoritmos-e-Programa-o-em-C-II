#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreve_extenso(int DIA, int MES, int ANO);

int main(){
    int dia, mes, ano;

    printf("\nEscreva uma data neste formato = dia/mes/ano: ");
    scanf("%d/%d/%d",&dia,&mes,&ano);

    escreve_extenso(dia,mes,ano);

    return 0;
}

void escreve_extenso(int DIA, int MES, int ANO){

    char m[50];

    switch(MES){
        case 1:
            strcpy(m,"janeiro");
            break;
        case 2:
            strcpy(m,"fevereiro");
            break;
        case 3:
            strcpy(m,"marco");
            break;
        case 4:
            strcpy(m,"abril");
            break;
        case 5:
            strcpy(m,"maio");
            break;
        case 6:
            strcpy(m,"junho");
            break;
        case 7:
            strcpy(m,"julho");
            break;
        case 8:
            strcpy(m,"agosto");
            break;
        case 9:
            strcpy(m,"setembro");
            break;
        case 10:
            strcpy(m,"outubro");
            break;
        case 11:
            strcpy(m,"novembro");
            break;
        case 12:
            strcpy(m,"dezembro");
            break;
    }

    printf("\n%d de %s de %d.",DIA,m,ANO);
}