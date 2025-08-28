#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int id_aluno;
    char curso[100];

}aluno;

int main(){
    aluno alunos[2];

    printf("\n-----------Cadastro de alunos-----------\n\n");

    for(int i=0;i<2;i++){
        printf("Nome......: ");
        fgets(alunos[i].nome,50,stdin);
        printf("Id do aluno......: ");
        scanf("%d",&alunos[i].id_aluno);
        fflush(stdin);
        printf("Curso......: ");
        fgets(alunos[i].curso,100,stdin);
        printf("\n");
    }

    printf("\n----------Cadastros realizados----------\n\n");
    for(int i=0;i<2;i++){
        printf("Nome do %d aluno: %s",i+1,alunos[i].nome);
        printf("Id do %d aluno: %d\n",i+1,alunos[i].id_aluno);    
        printf("Curso do %d aluno: %s\n",i+1,alunos[i].curso);

        printf("\n");
    
    }

    return 0;
}