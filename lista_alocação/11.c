#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char sobrenome[30];
    int ano;

}cadastro_alunos;

int main(){
    cadastro_alunos *aluno;
    
    int qtd;

    printf("\nDigite a quantidade de alunos a serem armazenados no cadastro: ");
    scanf("%d",&qtd);

    aluno = (cadastro_alunos*) malloc(qtd * sizeof(cadastro_alunos));

    for(int i=0;i<qtd;i++){
        printf("Cadastrando %d aluno:\n",i+1);
        printf("Matricula: ");
        scanf("%d",&(aluno + i)->matricula);
        getchar();
        printf("Sobrenome: ");
        fgets((aluno + i)->sobrenome ,sizeof((aluno + i)->sobrenome),stdin);
        printf("Ano de nascimento: ");
        scanf("%d",&(aluno + i)->ano);

        printf("\n");
    }


    printf("Dados cadastrados:\n");
    for(int i=0;i<qtd;i++){
        printf("%d aluno:\n",i+1);
        printf("Matricula: %d\n",(aluno + i)->matricula);
        printf("Sobrenome: %s",(aluno + i)->sobrenome);
        printf("Ano de nascimento: %d\n",(aluno + i)->ano);

        printf("\n");
    }

    free(aluno);

    return 0;
}