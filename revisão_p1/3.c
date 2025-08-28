#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, y = 20;
    int *p1 = NULL, *p2 = NULL;

    p1 = &x;
    p2 = &y;

    *p1 = *p2;

    printf("\n'x' = %d",x);
    printf("\n'y' = %d",y);


    return 0;
}