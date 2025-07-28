#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 10;
    int j = 10;
    int k = 10;

    for(i=10;i>=1;i--){
        printf("%d...",i);
    }
    printf("FIM!\n");

    while(j>=1){
        printf("%d...",j);

        j--;
    }
    printf("FIM!\n");

    do{
        printf("%d...",k);

        k--;
    }while(k>=1);
    printf("FIM!\n");





    return 0;
}