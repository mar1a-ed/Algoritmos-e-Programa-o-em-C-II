#include <stdio.h>
#include <stdlib.h>

void eh_triangulo(int ladoA, int ladoB, int ladoC);

void qual_tipo(int ladoA, int ladoB, int ladoC);

int main(){
    int a, b, c;

    printf("\nDigite o valor do primeiro lado do triangulo: ");
    scanf("%d",&a);

    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%d",&b);

    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%d",&c);
    
    eh_triangulo(a,b,c);

    return 0;
}

void eh_triangulo(int ladoA, int ladoB, int ladoC){
    if(((ladoA + ladoB) > ladoC) && ((ladoA + ladoC) > ladoB) && ((ladoB + ladoC) > ladoA)){
        qual_tipo(ladoA, ladoB, ladoC);
    }else{
        printf("Nao forma um triangulo.");
    }
}
void qual_tipo(int ladoA, int ladoB, int ladoC){
    if(ladoA == ladoB && ladoB == ladoC){
        printf("Triangulo Equilatero.");
    }else if(ladoA == ladoB && ladoA != ladoC){
        printf("tringulo Isosceles.");
    }else if(ladoA == ladoC && ladoA != ladoB){
        printf("Triangulo Isosceles.");
    }else if(ladoB == ladoC && ladoB != ladoA){
        printf("Triangulo Isosceles.");
    }else{
        printf("Triangulo Escaleno.");
    }
}