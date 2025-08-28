#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiar_string(char *origem, char *destino);

int main(){
    char frase1[] = "Maria Linda";
    char frase2[] = "Oi bebe";

    copiar_string(frase1,frase2);

    printf("\n%s",frase1);
    printf("\n%s",frase2);

    return 0;
}

void copiar_string(char *origem, char *destino){

    strcpy(destino,origem);
}