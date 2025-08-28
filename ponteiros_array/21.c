#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int array[TAM];
    int *ptr;

    ptr = array;

    for(int i=0;i<TAM;i++){
        printf("[%d] = ",i);
        scanf("%d",&*(ptr + i));
    }

    for(int i=0;i<TAM;i++){
        *(ptr + i) += 1;
    }

    printf("\nVetor modificado:\n");
    for(int i=0;i<TAM;i++){
        printf("[%d] = %d\n",i,*(ptr + i));
    }

    return 0;
}