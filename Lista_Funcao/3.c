#include <stdio.h>
#include <stdlib.h>

int eh_negativo_ou_positivo(int numero);

int main(){
    int num;

    printf("\nInsira um numero: ");
    scanf("%d",&num);

    printf("Se o retorno for '-1' eh negativo, se for '0' eh igual a zero e se for '1' eh positivo.\n");

    printf("%d",eh_negativo_ou_positivo(num));

    return 0;
}

int eh_negativo_ou_positivo(int numero){

    if(numero<0){
        return -1;
    }else if(numero==0){
        return 0;
    }else{
        return 1;
    }

}
