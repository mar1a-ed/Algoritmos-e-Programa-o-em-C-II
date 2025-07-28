#include <stdio.h>
#include <stdlib.h>

void desenha_linha(int quantidade);

int main(){
    int qtnd;

    printf("Digite a quantidade de simbolos '=' que vao ser colocados na linha: ");
    scanf("%d",&qtnd);

    desenha_linha(qtnd);


    return 0;
}

void desenha_linha(int quantidade){
    char simbolo = '=';

    for(int i=0;i<quantidade;i++){
        printf("%c",simbolo);
    }
}