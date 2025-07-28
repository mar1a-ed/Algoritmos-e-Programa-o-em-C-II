#include <stdio.h>
#include <stdlib.h>

void exponencia(int base, int expoente);

int main() {
    int x, z;

    printf("Digite a base 'x' e o expoente 'z' respectivamente: ");
    scanf("%d %d", &x, &z);

    exponencia(x, z);

    return 0;
}

void exponencia(int base, int expoente) {
    long long resultado = 1; 
                          
    if (expoente < 0) {
        printf("Expoentes negativos não são suportados nesta função para inteiros.\n");
        return;
    }

    for (int i = 0; i < expoente; i++) {
        resultado *= base; 
    }

    printf("O valor da potencia de %d elevado a %d eh: %lld\n", base, expoente, resultado);
}