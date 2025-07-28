#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char animal1[50], animal2[50], animal3[50];

    printf("Insira o primeiro tipo: ");
    fgets(animal1,sizeof(animal1),stdin);
    animal1[strcspn(animal1, "\n")]='\0';

    printf("Insira o segundo tipo: ");
    fgets(animal2,sizeof(animal2),stdin);
    animal2[strcspn(animal2,"\n")]='\0';

    printf("Insira o terceiro tipo: ");
    fgets(animal3,sizeof(animal3),stdin);
    animal3[strcspn(animal3,"\n")]='\0';

    if(strcmp("vertebrado",animal1)==0){
        if(strcmp("ave",animal2)==0){
            if(strcmp("carnivoro",animal3)==0){
                printf("\naguia");
            }else{
                printf("\npomba");
            }
        }else{
            if(strcmp("onivoro",animal3)==0){
                printf("\nhomem");
            }else{
                printf("\nvaca");
            }
        }
    }else{
        if(strcmp("inseto",animal2)==0){
            if(strcmp("hematofago",animal3)==0){
                printf("\npulga");
            }else{
                printf("\nlagarta");
            }
        }else{
            if(strcmp("hematofago",animal3)==0){
                printf("\nsanguessuga");
            }else{
                printf("\nminhoca");
            }
        }
    }





    return 0;
}