#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float x;
    float y;
    float z;

}vetor;

int main(){
    vetor vetores[3];

    printf("------Reading Array------\n\n");
    for(int i=0;i<3;i++){
        printf("First number: ");
        scanf("%f",&vetores[i].x);
        printf("Second number: ");
        scanf("%f",&vetores[i].y);
        printf("Third number: ");
        scanf("%f",&vetores[i].z);
    }

    float soma_vetor;

    soma_vetor = 0;

    for(int i=0;i<3;i++){
        soma_vetor = vetores[i].x + vetores[i].y + vetores[i].z;
    }

    printf("\n");
    printf("Sum of the array: %f\n",soma_vetor);

    return 0;
}