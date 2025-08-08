#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int cod_identificacao;
    char nome_produto[50];
    int qtd_estoque;
    double preco_produto;

}produto;

int main(){
    produto *estoque;

    int N;

    printf("\nNumero de produtos a serem cadastrados:\n");
    scanf("%d",&N);

    estoque = (produto*) malloc(N * sizeof(produto));

    for(int i=0;i<N;i++){
        printf("\n%d produto:\n",i+1);
        printf("Codigo de Identificacao: ");
        scanf("%d",&(estoque + i)->cod_identificacao);
        getchar();
        printf("Nome do Produto: ");
        fgets((estoque + i)->nome_produto, sizeof((estoque + i)->nome_produto),stdin);
        printf("Quantidade no Estoque: ");
        scanf("%d",&(estoque + i)->qtd_estoque);
        printf("Preco do produto: ");
        scanf("%lf",&(estoque + i)->preco_produto);
    }

    double maior_preco = estoque[0].preco_produto;
    char nome_preco[50];

    int maior_estoque = estoque[0].qtd_estoque;
    char nome_estoque[50];

    for(int i=0;i<N;i++){
        if((estoque + i)->preco_produto > maior_preco){
            strcpy(nome_preco,(estoque + i)->nome_produto);
        }

        if((estoque + i)->qtd_estoque > maior_estoque){
            strcpy(nome_estoque,(estoque + i)->nome_produto);
        }
    }

    printf("\nResultados:\n");
    printf("Produto com maior preco: %s",nome_preco);
    printf("\n");
    printf("Produto com maior estoque: %s",nome_estoque);



    return 0;
}