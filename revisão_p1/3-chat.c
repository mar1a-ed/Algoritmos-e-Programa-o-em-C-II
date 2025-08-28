#include <stdio.h>
#include <stdlib.h>

float notas(float *notas, int qtd);

int main(){
    int tam;

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&tam);

    float *alunos = (float *) malloc (tam * sizeof(float));

    for(int i=0;i<tam;i++){
        printf("Nota do %d aluno: ",i+1);
        scanf("%f",&*(alunos + i));
    }

    notas(alunos,tam);

    float media = notas(alunos, tam);

    printf("\nA media das notas desses alunos foi de: %.2f",media);

    return 0;
}

float notas(float *notas, int qtd){

    float media_notas = 0;
    float soma = 0;

    for(int j=0;j<qtd;j++){
        soma += *(notas + j);
    }

    media_notas = soma / qtd;

    return media_notas;

}