#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 20;
    int *p_num = NULL;

    p_num = &num;

    printf("\nValor da variavel: %d",num);
    printf("\nEndereco da variavel: %p",p_num);
    printf("\nValor apontado pelo ponteiro: %d",*p_num);
    printf("\nEndereco de memoria do ponteiro: %p",&p_num);


    return 0;
}
