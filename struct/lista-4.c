#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define TAM 3

typedef struct{
    char nome[100];
    int matricula;
    float score_one;
    float score_two;

}dados;

void traco(){
    printf("\n--------------------------\n");
}

int main(){
    dados students[TAM];
    float maior_p1, media, soma;
    int indice_maior, indice_menor;

    printf("\n----------Student Registration----------\n\n");
    for(int i=0;i<TAM;i++){
        printf("Student name: ");
        fgets(students[i].nome,100,stdin);
        printf("Registration number: ");
        scanf("%d",&students[i].matricula);
        printf("First test grade: ");
        scanf("%f",&students[i].score_one);
        printf("Second test grade: ");
        scanf("%f",&students[i].score_two);

        printf("\n");

        fflush(stdin);
    }
    
    maior_p1 = students[0].score_one;
    float maior_media, menor_media;

    maior_media = INT_MIN;
    menor_media = INT_MAX;

    for(int i=0;i<TAM;i++){
        if(students[i].score_one>maior_p1){
            printf("The student with the highest score on the first test was: %s\n",students[i].nome);
        }
    }

    for(int i=0;i<TAM;i++){
        soma = 0;
        soma += students[i].score_one + students[i].score_two;
        media = soma / 2.0;

        printf("Student average:%s = %.2f\n",students[i].nome,media);
        if(media >= 6.0){
            printf("Aproved!\n");
            traco();
        }else{
            printf("Reproved!\n");
            traco();
        }

        if(media > maior_media){
            maior_media = media;
            indice_maior = i;
        }

        if(media < menor_media){
            menor_media = media;
            indice_menor = i;
        }
    }

    traco();
    printf("Highest Average:\n");
    printf("Student: %s Average: %.2f\n",students[indice_maior].nome,maior_media);
    traco();
    printf("Lowest Average:\n");
    printf("Student: %s Average: %.2f\n",students[indice_menor].nome,menor_media);
    

    return 0;
}