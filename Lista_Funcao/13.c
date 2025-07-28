#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void qual_operacaoO(int num1, int num2, char simbolo);

int main(){
    int numero1, numero2;
    char operacao;

    printf("\nDigite o primeiro numero: ");
    scanf("%d",&numero1);

    printf("Digite o segundo numero: ");
    scanf("%d",&numero2);

    printf("Digite agora, o simbolo da operacao que deseja realizar:");
    printf("\n'+' = soma, '-' = subtracao, '*' = multiplicacao, '/' = divisao: ");
    scanf(" %c",&operacao);

    qual_operacaoO(numero1,numero2,operacao);
    
    return 0;
}

void qual_operacaoO(int num1, int num2, char simbolo){

    float resultado;
    int aux;
    char qual_operacao[50];

    if(num1>num2){
        num1 = num1;
        num2 = num2;
    }else{
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    switch(simbolo){
        case '+':
            strcpy(qual_operacao,"soma");
            resultado = num1 + num2;
            break;
        case '-':
            strcpy(qual_operacao,"subtracao");
            resultado = num1 - num2;
            break;
        case '*':
            strcpy(qual_operacao,"multiplicacao");
            resultado = num1 * num2;
            break;
        case '/':
            strcpy(qual_operacao,"divisao");
            resultado = num1 / num2;
            break;
    }

    printf("A operacao escolhida foi %s e o resultado foi: %.1f",qual_operacao,resultado);

}