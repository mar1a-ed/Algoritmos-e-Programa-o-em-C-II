#include <stdio.h>
#include <stdlib.h>
#define TAM_CONTATOS 2

typedef struct{
    int DDD;
    char telefone[11];

}telefones;

int main(){
    telefones contatos[TAM_CONTATOS];

    printf("Cadastrando Contatos:\n");
    for(int i=0;i<TAM_CONTATOS;i++){
        printf("%d contato:\n",i+1);
        printf("Digite o DDD: ");
        scanf("%d",&contatos[i].DDD);
        getchar();
        printf("Digite o numero de telefone: ");
        scanf(" %s",contatos[i].telefone);
        getchar();

        printf("\n");
    }

    printf("\n");

    printf("Telefones cadastrados:\n");
    for(int i=0;i<TAM_CONTATOS;i++){
        printf("Contato n %d: (%d) %s\n",i+1,contatos[i].DDD,contatos[i].telefone);
    }


    return 0;
}