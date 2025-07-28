#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 2

int main(){
    int matriz[L][C];
    int SL[L] = {0};
    int SC[C] = {0};

    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            printf("[%i][%i]: ",i,j);
            scanf("%d",&matriz[i][j]);

            SL[i] += matriz[i][j];
            SC[j] += matriz[i][j];
        }
    }

    
    printf("\nSoma das linhas da matriz:\n");
    for(int i=0;i<L;i++){
        printf("linha [%d]: %d\n",i,SL[i]);
    }

    printf("\nSoma das colunas da matriz:\n");
    for(int j=0;j<C;j++){
        printf("Coluna [%d]: %d\n",j,SC[j]);      
    }
    
    return 0;
}