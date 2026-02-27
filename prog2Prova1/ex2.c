#include <string.h>
#include <stdio.h>
#define N 3


typedef struct pessoa {char nome[20]; int idade; char telefone[10];} tpessoa;


void recVetor(tpessoa lista[]){
    int i,j;
    tpessoa aux;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(lista[j].idade < lista[j+1].idade){
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;
            }
            else if(lista[j].idade == lista[j+1].idade && strcmp(lista[j].nome, lista[j+1].nome) > 0){
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;
            }
        }
    }
}

int main(){
    int i;
    tpessoa lista[N];
    printf("Insira os dados de N pessoas");
    for (i=0; i<N; i++){
        scanf("%s%d%s", lista[i].nome, &lista[i].idade, lista[i].telefone);
    }
    recVetor(lista);
    for (i=0; i<N+1; i++){
        printf("%s\n%d\n%s\n", lista[i].nome, lista[i].idade, lista[i].telefone);
    }
    return 0;
}