#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_char(char *string, char c);

int main(){
    char *texto = (char *) malloc (50 * sizeof(char));

    printf("Digite a string: ");
    fgets(texto,50,stdin);

    texto[strcspn(texto, "\n")] = '\0';

    char caracter;

    printf("Digite o caracter que deseja verificar as ocorrencias: ");
    scanf("%c",&caracter);

    int vezes = conta_char(texto,caracter);

    printf("\nO caracter %c apareceu %d vezes na string.",caracter,vezes);

    return 0;
}

int conta_char(char *string, char c){

    int ocorrencia = 0;

    while(*string != '\0'){
        if(*string == c){
            ocorrencia++;
        }
        
        
        string++;
    }

    return ocorrencia;

}