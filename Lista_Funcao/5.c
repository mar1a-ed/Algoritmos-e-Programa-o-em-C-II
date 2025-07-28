#include <stdio.h>
#include <stdlib.h>

float pi = 3.14;

void volume_esfera(int RAIO);

int main(){
    int raio;

    printf("\nDigite o raio da esfera: ");
    scanf("%d",&raio);

    volume_esfera(raio);

    return 0;
}

void volume_esfera(int RAIO){

    float volume;

    volume = (4 * pi * (RAIO * RAIO * RAIO)) / 3;

    printf("O volume da esfera eh: %.2f\n",volume);
}