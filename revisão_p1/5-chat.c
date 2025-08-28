#include <stdio.h>
#include <stdlib.h>

int soma_matriz(int **matriz, int linhas, int colunas);

int main(){
    int m, n;

    printf("Digite o numero de linhas: ");
    scanf("%d",&m);

    printf("Digite o numero de colunas: ");
    scanf("%d",&n);

    int **mat = (int **) malloc (m * sizeof(int));

    if(mat==NULL){
        printf("Nao foi possivel alocar memoria.");
        return 1;
    }

    for(int i=0;i<m;i++){
        mat[i] = (int *) malloc (n * sizeof(int));
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int soma_valores = soma_matriz(mat,m,n);

    printf("\nA soma dos valores da matriz eh: %d",soma_valores);

    free(mat);

    return 0;
}

int soma_matriz(int **matriz, int linhas, int colunas){

    int soma = 0;

    for(int m=0;m<linhas;m++){
        for(int n=0;n<colunas;n++){
            soma += matriz[m][n];
        }
    }

    return soma;

}