#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10] = {2.4,3.5,1.2,5.5,8.6,7,8.9,9,0.4,11.2};
    float *ptr;

    ptr = vetor;

    printf("\nImprimindo o endereco de cada indice do vetor:");
    for(int i=0;i<10;i++){
        printf("vetor[%d] = %p\n",i,(ptr+i));
    }


    return 0;
}