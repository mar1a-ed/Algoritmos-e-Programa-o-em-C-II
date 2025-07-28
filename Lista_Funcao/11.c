#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculo_media(float nota1, float nota2, float nota3, char tipo);

int main(){
    float p1; //peso 5
    float p2; //peso 3
    float p3; //peso 2
    char letra;

    printf("\nDigite a primeira nota: ");
    scanf("%f",&p1);

    printf("Digite a segunda nota: ");
    scanf("%f",&p2);

    printf("Digite a terceira nota: ");
    scanf("%f",&p3);

    printf("Qual tipo de media quer fazer? (A=media aritmetica, P=media ponderada): ");
    scanf(" %c",&letra);

    calculo_media(p1,p2,p3,letra);

    return 0;
}

void calculo_media(float nota1, float nota2, float nota3, char tipo){
    float media;
    char qual_media[50];

    switch(tipo){
        case 'P':
            strcpy(qual_media,"Ponderada");
            media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
            break;
        case 'A':
            strcpy(qual_media,"Aritmetica");
            media = (nota1 + nota2 + nota3) / 3;
            break;
        default:
            printf("Letra Invalida");
    }

    printf("A media %s eh: %.2f",qual_media,media);

}