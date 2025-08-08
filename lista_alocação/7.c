#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main(){
    int sorteio[TAM], preenchido[TAM];
    int *s, *p;

    s = sorteio;
    p = preenchido;

    printf("Numeros da loteria:\n");
    for(int i=0;i<TAM;i++){
        printf("%d numero: ",i+1);
        scanf("%d",&s[i]);
    }

    printf("\nNumeros do seu bilhete:\n");
    for(int i=0;i<TAM;i++){
        printf("%d numero: ",i+1);
        scanf("%d",&p[i]);

    }

    int corretos = 0;

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(s[i] == p[j]){
                corretos++;
                break;
            }
        }
    }

    int *correct;
    int k = 0;

    correct = (int *) calloc(corretos,sizeof(int));

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(s[i] == p[j]){
                correct[k] = s[i];
            }
        }
    }

    printf("\nNumeros sorteados:\n");
    for(int i=0;i<TAM;i++){
        printf("%d numero: %d\n",i+1,*(s + i));
    }

    printf("\nNumeros acertados:\n");
    for(int k=0;k<corretos;k++){
        printf("%d\n",correct[k]);
    }

    free(correct);
    
    return 0;
}