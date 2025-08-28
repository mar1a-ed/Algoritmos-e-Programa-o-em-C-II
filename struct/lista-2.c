#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int idade;
    char endereco[100];

}dados;

int main(){
    dados ficha_pessoa;

    printf("\n------------INSERINDO DADOS-----------\n\n");
    printf("Nome......: ");
    fgets(ficha_pessoa.nome,100,stdin);

    printf("Idade......: ");
    scanf("%d",&ficha_pessoa.idade);

    fflush(stdin);

    printf("Endereco......: ");
    fgets(ficha_pessoa.endereco,100,stdin);

    fflush(stdin);

    printf("\n-----------LENDO OS DADOS-----------\n\n");
    printf("Nome: %s",ficha_pessoa.nome);
    printf("Idade: %d\n",ficha_pessoa.idade);
    printf("Endereco: %s",ficha_pessoa.endereco);


    return 0;
}