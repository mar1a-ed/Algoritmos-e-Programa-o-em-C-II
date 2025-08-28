#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifica_string(char *string1, int tam1, char *string2, int tam2);

int main(){
    char str1[50];
    char str2[50];

    printf("\nInsira a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    getchar();

    printf("\nInsira a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);




    return 0;
}

void verifica_string(char *string1, int tam1, char *string2, int tam2){

    



}