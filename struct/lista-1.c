#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minutos;
    int segundos;

}horario;

typedef struct{
    int dia;
    int mes;
    int ano;

}data;

typedef struct{
    int data;
    int horario;
    char descricao[100];

}compromisso;

int main(){
    horario horarios;
    data datas;
    compromisso compromissos;

    printf("\n----------HORÁRIO----------\n\n");
    printf("Hora ...... : ");
    scanf("%i",&horarios.hora);
    printf("Minutos ...... : ");
    scanf("%i",&horarios.minutos);
    printf("Segundos ...... : ");
    scanf("%i",&horarios.segundos);

    printf("\n----------DATA----------\n\n");
    printf("Dia ...... : ");
    scanf("%i",&datas.dia);
    printf("Mes ...... : ");
    scanf("%i",&datas.mes);
    printf("Ano ...... : ");
    scanf("%i",&datas.ano);

    printf("\n----------COMPROMISSO----------\n\n");
    printf("Data (ano)...... : ");
    scanf("%i",&compromissos.data);
    printf("Horario ......: ");
    scanf("%i",&compromissos.horario);
    printf("Descricao ......: ");
    fgets(compromissos.descricao,100,stdin);




    return 0;
}