#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string_inicial[277];
    int tamanho_string;

    printf("Digite sua string: ");
    fgets(string_inicial,sizeof(string_inicial),stdin);

    tamanho_string = strlen(string_inicial);

    string_inicial[strcspn(string_inicial,"\n")]='\0';

    printf("\nString na ordem inversa eh:");
    for(int i=tamanho_string-1;i>=0;i--){
        printf("%c",string_inicial[i]);
    }

    return 0;
}