#include <stdio.h>
#include <stdlib.h>

int main(){
    //arquivo = coleção de bytes armazenados em um dispositivo de armazenamento secundario
    //arquivo de texto = podem ser editados no bloco de notas
    //arquivo binario = nao podem ser editados no bloco de notas

    FILE *arquivo;

    //escrita 'w'
    arquivo = fopen("arquivo.txt", "w");
    
    if(arquivo == NULL){
        printf("\nErro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "Ola mundo!\n");

    fclose(arquivo);

    printf("\nArquivo fechado");

    //leitura 'r'
    arquivo = fopen("arquivo.txt","r");

    if(arquivo == NULL){
        printf("\nErro ao abrir o arquivo");
        return 1;
    }

    fclose(arquivo);

    printf("\nArquivo fechado");

    //escrita arquivo binario
    arquivo = fopen("arquivo.txt","wb");

    //leitura arquivo binario
    arquivo = fopen("arquivo.txt","rb");

    return 0;
}