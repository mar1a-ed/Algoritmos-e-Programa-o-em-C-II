#include <stdio.h>
#include <stdlib.h>

float pi = 3.14;

void calc_esfera(float R, float *area, float *volume);

int main(){
    float raio;

    printf("\nDigite o valor do raio da esfera: ");
    scanf("%f",&raio);

    float a = 0;
    float v = 0;

    calc_esfera(raio,&a,&v);

    printf("\nA area da esfera eh: %f",a);

    printf("\nO volume da esfera eh: %f",v);

    return 0;
}

void calc_esfera(float R, float *area, float *volume){

    *area = 4 * pi * (R * R);

    *volume = (4 * pi * (R * R * R) / 3);

}