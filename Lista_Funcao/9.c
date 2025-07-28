#include <stdio.h>
#include <stdlib.h>

float pi = 3.141592;

void volume_cilindro(int raio, int altura);

int main(){
    int r; //raio
    int a; //altura

    printf("\nDigite o valor do Raio do cilindro: ");
    scanf("%d",&r);

    printf("Digite o valor da Altura do cilindro: ");
    scanf("%d",&a);

    volume_cilindro(r,a);


    return 0;
}

void volume_cilindro(int raio, int altura){

    float volume;

    volume = pi * (raio*raio) * altura;

    printf("O volume do cilindro eh: %.2f",volume);


}