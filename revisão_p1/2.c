#include <stdio.h>
#include <stdlib.h>

int main(){
    float num = 3.14;
    float *ptr = NULL;

    ptr = &num;

    *ptr = 2.14;

    printf("\nNovo valor da variavel: %f",*ptr);


    return 0;
}