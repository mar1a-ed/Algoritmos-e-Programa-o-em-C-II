#include <stdio.h>

int calcularFatorial(int n);

int main() {
    int numero;
    int resultado; 

    printf("Digite um número inteiro positivo para calcular o fatorial: ");
    scanf("%d", &numero);

    resultado = calcularFatorial(numero);

    if (resultado != -1) {
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}

int calcularFatorial(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        printf("Erro: O fatorial não é definido para números negativos.\n");
        return -1; 
    }
    else if (n > 12) {
        printf("Aviso: O fatorial de %d excede a capacidade de um 'int'. O resultado pode estar incorreto.\n", n);
    }

    int fatorial = 1; 
    for (int i = 1; i <= n; i++) {
        fatorial *= i; 
    }
    return fatorial;
}