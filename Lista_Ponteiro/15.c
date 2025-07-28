#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcula_raiz(float A, float B, float C, float *X1, float *X2);

//ax2 + bx + c = 0

int main(){
    float a, b, c;
    float raiz1 = 0, raiz2 = 0;

    printf("\nInsira o valor para 'a': ");
    scanf("%f",&a);

    printf("Insira o valor para 'b': ");
    scanf("%f",&b);

    printf("Insira o valor para 'c': ");
    scanf("%f",&c);

    int qtd = calcula_raiz(a,b,c,&raiz1,&raiz2);

    printf("Existem %d raizes:\n",qtd);

    if(qtd==2){
        printf("Raiz 1: %f; Raiz 2: %f\n",raiz1,raiz2);
    }else if(qtd==1){
        printf("Raiz 1: %f\n",raiz1);
    }

    return 0;
}

int calcula_raiz(float A, float B, float C, float *X1, float *X2){
    int qtd;
    int delta;

    if(A < 0){
        qtd = 0;
        return qtd;
    }

    if(A==0){
        qtd = 1;
        *X1 = -C / B;
        return qtd;
    }

    if(A>0){
        qtd = 2;
        return qtd;

        delta = (B * B) - (4 * A * C);
        
        if(delta < 0){
            return 0;

        }else if(delta == 0){
            *X1 = -B / (2 * A);
            return 1;

        }else{
            *X1 = (-B + sqrt(delta)) / (2 * A);
            *X2 = (-B - sqrt(delta)) / (2 * A);
            return 2;
        }
    }
    
}
