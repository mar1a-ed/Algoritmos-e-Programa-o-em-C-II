#include <stdio.h>
#include <stdlib.h>

float pi = 3.14;

void superficie_volume(float R, float *area, float *volume);

int main(){
    float raio, a, v;

    printf("\nInsira o valor do raio da esfera: ");
    scanf("%f",&raio);

    superficie_volume(raio,&a,&v);

    printf("A area da esfera eh: %.2f\n",a);
    
    printf("O volume da esfera eh: %.2f\n",v);


    return 0;
}

void superficie_volume(float R, float *area, float *volume){

    *area = 4 * pi * (R * R);

    *volume = (4 * pi * (R * R * R)) / 3;

}