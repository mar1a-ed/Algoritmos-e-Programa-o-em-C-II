#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *vetor1, int tamanho1, int *vetor2, int tamanho2, int *vetor3);

int main(){
    int vet1[5];
    int vet2[5];
    int vet3[5];

    printf("\nPreenchendo o primeiro vetor:\n");
    for(int i=0;i<5;i++){
        printf("[%d] = ",i);
        scanf("%d",&vet1[i]);
    }

    printf("\nPreenchendo o segundo vetor:\n");
    for(int j=0;j<5;j++){
        printf("[%d] = ",j);
        scanf("%d",&vet2[j]);
    }

    int resultado;

    resultado = soma_vetor(vet1,5,vet2,5,vet3);
   
    printf("\nA soma dos arrays foi concluida com sucesso? (0 = nao, 1 = sim) %d\n", resultado);

    if(resultado == 0){
        printf("A soma nao pode ser feita pois os arrays tem tamanhos diferentes.");
    }else{
        printf("\nA soma dos arrays eh:\n");
        for(int k=0;k<5;k++){
        printf("[%d] = %d\n",k,vet3[k]);
        }
    }

    return 0;
}

int soma_vetor(int *vetor1, int tamanho1, int *vetor2, int tamanho2, int *vetor3){

    if(tamanho1 != tamanho2){
        return 0;
    }

    for(int i=0;i<tamanho1;i++){
            *(vetor3 + i) = *(vetor1 + i) + *(vetor2 + i);
    }

    return 1;
    
}
