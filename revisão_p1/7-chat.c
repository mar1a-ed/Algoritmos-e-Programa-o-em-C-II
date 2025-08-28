#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor1 = (int *) calloc (1, sizeof(int));
    int *vetor2 = NULL;

    int num, tam = 0;

    while(1){
        scanf("%d",&num);

        if(num<0){
            break;
        }

        tam++;

        int *vetor_temporario = (int *) realloc (vetor1, tam * sizeof(int));

        vetor2 = vetor_temporario;
    
        vetor2[tam - 1] = num;

    }

    printf("\nValores do vetor: ");
    for(int i=0;i<tam;i++){
        printf("%d ",*(vetor2 + i));
    }

    free(vetor1);
    free(vetor2);

    return 0;
}