#include <stdio.h>
#include <stdlib.h>

struct ficha_aluno{ //tipo de dado
    char nome[50];
    int id_aluno;
    float nota;
};

void cadastro_menu(){
    printf("\n--------------Cadastro de aluno--------------\n\n\n");

}

void lendo_menu(){
    printf("\n--------------Lendo os dados da struct--------------\n\n");

}

int main(){
   struct ficha_aluno aluno;

   cadastro_menu();

   printf("Nome do aluno ......: ");
   fgets(aluno.nome, 40, stdin);

   printf("Id do aluno ......: ");
   scanf("%d",&aluno.id_aluno);

   printf("Nota do aluno ......: ");
   scanf("%f",&aluno.nota);


   printf("\n\n");
   
   lendo_menu();
   printf("Nome ......: %s\n",aluno.nome);
   printf("Id do aluno ......: %d\n",aluno.id_aluno);
   printf("Nota do aluno ......: %f\n",aluno.nota);


    return 0;
}