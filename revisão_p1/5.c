#include <stdio.h>
#include <stdlib.h>

int *encontra_valor(int *vetor, int tamanho, int valor);

int main(){
    int array[5] = {2,3,2,6,7};
    int procurado = 2;

    int *valor =  encontra_valor(array,5,procurado);
    
    if(valor != NULL){
        printf("\nValor: %d",*valor);
    }else{
        printf("\nNenhum valor encontrado");
    }

    return 0;
}

int *encontra_valor(int *vetor, int tamanho, int valor){

    int *endereco;

    for(int i=0;i<tamanho;i++){
        if(*(vetor+i) == valor){
            endereco = &*(vetor+i);
            return endereco;
        }
    }

    return NULL;

}