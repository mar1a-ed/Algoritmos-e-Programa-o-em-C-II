#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam_string;

    printf("\nInsira o tamanho da sua string: ");
    scanf("%d",&tam_string);

    getchar();

    char *string = (char*) malloc(tam_string * sizeof(char));

    printf("\nInforme o conteudo da sua string: ");
    fgets(string,tam_string + 1,stdin);

    printf("\nString alocada: %s",string);

    return 0;
}