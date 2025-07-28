#include <stdio.h>
#include <stdlib.h>

void gerarTrianguloLateral(int n) {
    if (n <= 0) {
        printf("Por favor, digite um valor inteiro positivo para 'n'.\n");
        return; 
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*"); 
        }
        printf("\n"); 
    }

    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*"); 
        }
        printf("\n"); 
    }
}

int main() {
    int numero;

    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &numero);

    gerarTrianguloLateral(numero);

    return 0;
}