#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){
    
    srand((unsigned int ) time(NULL));

    int qtd;

    printf("\nInsira a quantidade de elementos que voce deseja armazenar (maior ou igual a 10): ");
    scanf("%d",&qtd);

    if(qtd < 10){
        printf("Quantidade invalida!");
        return 1;
    }

    double *vetor;

    vetor = (double*) malloc(qtd * sizeof(double));

    printf("\nPreenchendo os %d primeiros numeros do vetor com numeros aleatorios de 1 a 100:\n",TAM);
    for(int i=0;i<TAM;i++){
        *(vetor + i) = (rand() % 100) + 1;
    }

    printf("\nNumeros gerados no vetor:\n");
    for(int i=0;i<TAM;i++){
        printf("vetor[%d] = %lf\n",i,*(vetor + i));
    }

    free(vetor);

    return 0;
}