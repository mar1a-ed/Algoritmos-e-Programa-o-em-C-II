#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int *ptr;
    
    ptr = array;

    printf("\nPreenchendo o vetor:\n");
    for(int i=0;i<5;i++){
        printf("array[%d] = ",i);
        scanf("%d",&*(ptr+i));
    }

    printf("\nDobro de cada valor lido:\n");
    for(int i=0;i<5;i++){
        printf("array[%d] = %d\n",i,(*(ptr + i) * 2));
    }


    return 0;
}