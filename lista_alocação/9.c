#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, count = 0;
    int *vetor = NULL;

    while(1){
        printf("Digite um numero(maior ou igual a 0): ");
        scanf("%d",&num);

        if(num < 0){
            break;
        }

        int *aux = (int*) realloc(vetor, (count + 1) * sizeof(int));

        vetor = aux;
        vetor[count] = num;
        count++;

    }

    printf("Vetor:\n");
    for(int i=0;i<count;i++){
        printf("%d ",*(vetor + i));
    }

    free(vetor);

    return 0;
}