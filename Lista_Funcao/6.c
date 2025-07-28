#include <stdio.h>
#include <stdlib.h>

void conversor_segundos(int HORA, int MINUTO, int SEGUNDO);

int main(){
    int seg, min, hr;

    printf("\nDigite o horario neste formato = horas:minutos:segundos: ");
    scanf("%d:%d:%d",&hr,&min,&seg);

    conversor_segundos(hr,min,seg);
    
    return 0;
}

void conversor_segundos(int HORA, int MINUTO, int SEGUNDO){

    SEGUNDO = SEGUNDO + (MINUTO * 60) + (HORA * 3600); 

    printf("Sao %d segundos.\n",SEGUNDO);

}
