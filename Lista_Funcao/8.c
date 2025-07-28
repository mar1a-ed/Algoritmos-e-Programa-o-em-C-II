#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void encontra_hipotenusa(int catetoA, int catetoB);

int main(){
    int a, b;

    printf("\nDigite o valor do primeiro Cateto: ");
    scanf("%d",&a);

    printf("Digite o valor do segundo Cateto: ");
    scanf("%d",&b);

    encontra_hipotenusa(a,b);

    return 0;
}

void encontra_hipotenusa(int catetoA, int catetoB){

    float hipotenusa;

    hipotenusa = sqrt((catetoA*catetoA)+(catetoB*catetoB));

    printf("O valor da Hipotenusa eh: %.1f",hipotenusa);

}