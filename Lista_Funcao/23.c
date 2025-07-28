#include <stdio.h>
#include <stdlib.h>

void gerarTriangulo(int n) {
    if (n <= 0) {
        printf("Por favor, digite um valor inteiro positivo para 'n'.\n");
        return; 
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n"); 
    }
}

int main() {
    int numero;

    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &numero);

    gerarTriangulo(numero);

    return 0;
}