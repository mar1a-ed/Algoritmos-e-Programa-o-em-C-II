#include <stdio.h>
#include <stdlib.h>

void km_por_litro(int distancia, int quantidade);

int main(){
    int d, litros;

    printf("\nDigite a distancia percorrida: ");
    scanf("%d",&d);

    printf("Digite a quantidade de litros consumido: ");
    scanf("%d",&litros);

    km_por_litro(d,litros);

    return 0;
}

void km_por_litro(int distancia, int quantidade){
    float km_l;

    km_l = distancia / quantidade;

    printf("Distancia de Quilometros por litro do carro eh: %.2f\n",km_l);

    if(km_l<8){
        printf("Venda o carro!");
    }else if(km_l>=8 && km_l<=14){
        printf("Economico!");
    }else{
        printf("Super Economico!");
    }



}