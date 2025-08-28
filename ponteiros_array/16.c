#include <stdio.h>

int main() {
    int A;
    int *B;
    int **C;
    int ***D;

    // Lê o valor de A
    printf("Digite um valor inteiro: ");
    scanf("%d", &A);

    // Inicializa os ponteiros
    B = &A;
    C = &B;
    D = &C;

    // Calcula usando apenas os ponteiros
    int dobro = 2 * (*B);          // Usa B
    int triplo = 3 * (**C);        // Usa C
    int quadruplo = 4 * (***D);    // Usa D

    // Exibe os resultados
    printf("\nDobro usando ponteiro B: %d", dobro);
    printf("\nTriplo usando ponteiro C: %d", triplo);
    printf("\nQuadruplo usando ponteiro D: %d\n", quadruplo);

    return 0;
}
