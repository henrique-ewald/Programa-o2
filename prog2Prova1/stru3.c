#include <stdio.h>
#include <string.h>
#define N 5

typedef struct algo{char nome[20]; float saldo;} cliente;


int MaisRico(cliente rico[N]){
    cliente aux;
    int i, j, flag=0;
    for(i=0; i<N; i++)
        for(j=0; i<N; j++)
            if(rico[i].saldo < rico[i+1].saldo){
                aux = rico[i];
                rico[i] = rico[i+1];
                rico[i+1] = aux;
            }
}





int main(){
}