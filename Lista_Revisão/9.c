#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 5

int main(){
    int matriz[L][C];
    int menor_valor, posicaoL, posicaoC;

    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            printf("[%i][%i] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    menor_valor = matriz[0][0];

    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            if(matriz[i][j]<menor_valor){
                menor_valor = matriz[i][j];
                posicaoL = i;
                posicaoC = j;
            }
        }
    }

    printf("\nO menor valor da matriz eh: %d\n",menor_valor);
    printf("Está localizado na linha %d, coluna %d.\n",posicaoL,posicaoC);




    return 0;
}