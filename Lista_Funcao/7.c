#include <stdio.h>
#include <stdlib.h>

void temperatura_fahrenheit(float celsius);

int main(){
    float c; //celsius

    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f",&c);

    temperatura_fahrenheit(c);

    return 0;
}

void temperatura_fahrenheit(float celsius){

    float f; //fahrenheit

    f = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura em fahrenheit eh: %.2f\n",f);

}