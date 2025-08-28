#include <stdio.h>
#include <stdlib.h>

float media_notas(float nota1, float nota2, float nota3, char letra);

int main(){
    float p1 = 8.4, p2 = 9.1, p3 = 3.1;
    char l = 'P';

    float m_n = media_notas(p1,p2,p3,l);

    printf("\nA media das notas foi: %.2f",m_n);


    return 0;
}

float media_notas(float nota1, float nota2, float nota3, char letra){

    float media = 0;

    if(letra=='A'){
        media = (nota1 + nota2 + nota3) / 3;

        return media;

    }else{
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;

        return media;

    }

    return media;

}