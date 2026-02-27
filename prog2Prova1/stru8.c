#include <stdio.h>
#include <string.h>

typedef struct climaMetter{int dia; int mes; int ano; float temp; float umid; float prec;} clima;

void maisChuvoso(clima prev[], int n){
    int i, j;
    clima aux;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(prev[j].prec < prev[j+1].prec){
                aux = prev[j];
                prev[j] = prev[j+1];
                prev[j+1] = aux;
            }
        }
    }
}

int main(){
    int n;
    int i;
    printf("Insira a quantidade de amostras de clima:\n");
    scanf("%d", &n);
    clima prev[n];
    for (i=0; i<n; i++){
        printf("\nDia/Mes/ano:\n");
        scanf("%d%d%d", &prev[i].dia, &prev[i].mes, &prev[i].ano);
        printf("\nTemperatura/Umidade/Precipitacao:\n");
        scanf("%f%f%f", &prev[i].temp, &prev[i].umid, &prev[i].prec);
    }
    maisChuvoso(prev, n);
    printf("\n-------Dados em ordem decrescente---------\n");
    for (i=0; i<n; i++){
        printf("\n\nna data: %d/%d/%d, a temperatura, umidade e precipitacao foram: %f, %f e %f", prev[i].dia, prev[i].mes, prev[i].ano, prev[i].temp, prev[i].umid, prev[i].prec);
    }
}