#include <stdio.h>
#include <stdlib.h>

int main(){
    int N = 6;

    int *array = (int*) malloc (N * sizeof(int));

    for(int i=0;i<N;i++){
        scanf("%d",&*(array + i));
    }

    int x = 3;
    int multiplo = 0;

    printf("\n");
    
    for(int i=0;i<N;i++){
        if(*(array + i) % x == 0){
            multiplo++;
            printf("%d ",*(array + i));
        }
    }

    printf("\n%d multiplos de %d dentro do vetor.",multiplo,x);

    return 0;
}