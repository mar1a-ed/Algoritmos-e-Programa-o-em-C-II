#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;

    printf("\nInsira o numero de posicoes que deseja alocar: ");
    scanf("%d",&N);

    int *ptr;

    ptr = (int*) malloc(N * sizeof(int));

    for(int i=0;i<N;i++){
        printf("posicao %d: ",i);
        scanf("%d",&*(ptr + i));
    }

    int X;

    printf("\nInsira um numero para verificar multiplos: ");
    scanf("%d",&X);

    printf("Multiplos de '%d':\n",X);

    for(int i=0;i<N;i++){
        if(X % *(ptr + i) == 0){
            printf("%d da posicao %d\n",*(ptr + i), i);
        }
    }

    free(ptr);

    ptr = NULL;

    return 0;
}