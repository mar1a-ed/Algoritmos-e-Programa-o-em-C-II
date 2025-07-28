#include <stdio.h>
#include <stdlib.h>

void gerarExclamacoes(int n) {
    if (n <= 0) {
        printf("Por favor, digite um valor inteiro positivo para 'n'.\n");
        return; 
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!"); 
        }
        printf("\n"); 
    }
}

int main() {
    int numero;

    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &numero);

    gerarExclamacoes(numero);

    return 0;
}