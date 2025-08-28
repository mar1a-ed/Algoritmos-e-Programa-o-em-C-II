#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr;

    ptr = vetor; //o ponteiro aponta automaticamente para o primeiro indice do vetor

    int i;

    //mostrando os elementos do vetor 
    for(i=0;i<10;i++){
        printf("vetor[%d] = %d\n",i,*(ptr + i));
    }

    printf("\n");

    //mostrando os enderecos do vetor
    for(i=0;i<10;i++){
        printf("vetor[%d] = %p\n",i,(ptr + i));
    }

    printf("\n");

    printf("Array de ponteiros:\n");

    int *vtr[4]; //array de ponteiros 
    int vt1[] = {1,2,3};
    int vt2[] = {4,5,6};
    int vt3[] = {7,8,9};
    int vt4[] = {10,11,12};

    vtr[0] = vt1; //atribuindo os indices do vetor de ponteiro para os vetores de inteiros
    vtr[1] = vt2;
    vtr[2] = vt3;
    vtr[3] = vt4;

    //acessando os valores de cada indice do vetor de ponteiros

    printf("Indice '0' do array de ponteiros:\n");
    for(int j=0;j<3;j++){
        printf("*vtr[0] = %d\n",*(*(vtr + 0) + j));
    }

    printf("\nIndice '1' do array de ponteiros:\n");
    for(int j=0;j<3;j++){
        printf("*vtr[1] = %d\n",*(*(vtr + 1) + j));
    }
    return 0;
}