#include <stdio.h>
#include <stdlib.h>

int main(){
    int var = 16;

    printf("Conteudo de var: %d\n",var);
    printf("Endereco de var: %p\n",&var);

    int *ptr = NULL;

    ptr = &var;

    printf("Conteudo apontado pelo ptr: %d\n",*ptr);
    printf("Endereco apontado por ptr: %p\n",ptr);
    printf("Endereco do proprio ptr: %p\n",&ptr);

    *ptr = 73;

    printf("\n");

    printf("Conteudo apontado pelo ptr: %d\n",*ptr);
    printf("Endereco apontado por ptr: %p\n",ptr);
    printf("Endereco do proprio ptr: %p\n",&ptr);





    //*ptr = conteúdo da variável que ptr aponta
    //ptr = endereço da variável que ptr aponta
    //&ptr = endereco do ponteiro ptr






    return 0;
}