#include <stdio.h>
#include <stdbool.h> 
#include <math.h>    

bool ehPrimo(int num) {
    if (num <= 1) {
        return false; 
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true; 
}

int contarPrimosAbaixoDeN(int N) {
    if (N <= 2) {
        return 0;
    }

    int contador = 0;
    for (int i = 2; i < N; i++) {
        if (ehPrimo(i)) {
            contador++; 
        }
    }
    return contador;
}

int main() {
    int N;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 1; 
    }

    int quantidadePrimos = contarPrimosAbaixoDeN(N);

    printf("A quantidade de numeros primos abaixo de %d eh: %d\n", N, quantidadePrimos);

    return 0;
}