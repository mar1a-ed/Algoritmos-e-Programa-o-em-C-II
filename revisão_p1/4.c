#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ptr = NULL;

    ptr = vetor;

    for(int i=0;i<5;i++){
        printf("%d ",*(ptr + i));
    }

    return 0;
}