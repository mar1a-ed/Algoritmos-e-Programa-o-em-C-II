#include <stdio.h>
#include <stdlib.h>

int main(){
    int bytes;

    printf("Digite o tamanho que deseja(cada int = 4 bytes): ");
    scanf("%d",&bytes);

    int tam;

    if(bytes%sizeof(int)==0){
        tam = bytes / sizeof(int);
    }else{
        printf("Memoria invalida.");
        return 1;
    }

    int *ptr;

    ptr = (int *) calloc(tam,sizeof(int));

    if(ptr==NULL){
        printf("Nao foi possivel alocar memoria.");
        return 1;
    }

    int opcao;
    int valor, posicao;

    printf("\nAgora, o que deseja fazer?:\n");
    printf("1 = Inserir um valor em uma determinada posicao.\n");
    printf("2 = Consultar um valor em uma determinada posicao.\n");
    scanf("%d",&opcao);

    if(opcao==1){
        printf("Digite a posicao que deseja inserir: ");
        scanf("%d",&posicao);

        printf("Digite o valor que deseja inserir: ");
        scanf("%d",&valor);

        ptr[posicao] = valor;
    }else{
        printf("Digite a posicao que queira consultar: ");
        scanf("%d",&posicao);

        printf("vetor[%d] = %d\n",posicao,ptr[posicao]);
    }

    printf("Vetor:\n");
    for(int i=0;i<tam;i++){
        printf("vetor[%d] = %d\n",i,*(ptr + i));
    }
    
    free(ptr);

    ptr = NULL;
}