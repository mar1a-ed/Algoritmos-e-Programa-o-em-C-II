#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];
    int *ptr;

    ptr = vetor;

    printf("\nPreenchendo o vetor:\n");
    for(int i=0;i<5;i++){
        printf("vetor[%d] = ",i);
        scanf("%d",&*(ptr+i));
    }

    printf("\nImprimindo endereco de valores pares:\n");
    for(int i=0;i<5;i++){
        if(*(ptr+i)%2==0){
            printf("vetor[%d] = %p\n",i,(ptr+i));
        }
    }


    return 0;
}