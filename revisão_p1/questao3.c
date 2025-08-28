#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[50];
    int i = 0;

    fgets(string,50,stdin);

    getchar();

    while(string[i]==0){
        if(string[i] == 'a' || string[i] == 'A'){
            printf("%c",string[i]);
        }

        if(string[i] == 'e' || string[i] == 'E'){
            printf("%c",string[i]);
        }

        if(string[i] == 'i' || string[i] == 'I'){
            printf("%c",string[i]);
        }

        if(string[i] == 'o' || string[i] == 'O'){
            printf("%c",string[i]);
        }

        if(string[i] == 'u' || string[i] == 'U'){
            printf("%c",string[i]);
        }

        i++;
    }

    return 0;

}