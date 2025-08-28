#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct{
    char nome[100];
    int matricula;
    int cod_disciplina;
    float p1, p2;

}dados;

void traco(){
    printf("\n------------------------------------------------\n");
}

int main(){
    dados alunos[TAM];
    float soma, media; //p1 = peso 1; p2 = peso 2

    printf("-------------Student Registration-------------\n\n");
    for(int i=0;i<TAM;i++){
        printf("Student name: ");
        fgets(alunos[i].nome,100,stdin);
        fflush(stdin);
        printf("Registratio: ");
        scanf("%d",&alunos[i].matricula);
        fflush(stdin);
        printf("Discipline code: ");
        scanf("%d",&alunos[i].cod_disciplina);
        fflush(stdin);
        printf("First score test: ");
        scanf("%f",&alunos[i].p1);
        fflush(stdin);
        printf("Second score test: ");
        scanf("%f",&alunos[i].p2);
        fflush(stdin);

        printf("\n");
        traco();

    }

    printf("--------------------Average--------------------\n\n");
    for(int i=0;i<TAM;i++){
        soma = (alunos[i].p1 * 1.0) + (alunos[i].p2 * 2.0);
        media = soma / 3.0;

        printf("Name: %s",alunos[i].nome);
        printf("Average: %.2f\n",media);
        traco();
    }

    return 0;
}