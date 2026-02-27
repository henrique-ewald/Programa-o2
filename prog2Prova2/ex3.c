#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTDREVISOES 5 // Deve funcionar para qualquer valor definido aqui

typedef struct strevisao {
int km;
float custo;
} TIPOREVISAO;

typedef struct stcarro {
char placa[8];
TIPOREVISAO revisoes[QTDREVISOES];
} TIPOCARRO;

void analisaFrota(TIPOCARRO *v, int n, TIPOCARRO *CarroMaiorCusto, float *custo){
    int i,j;
    TIPOCARRO aux;
    float maisCaro = v[0].revisoes[0].custo;
    CarroMaiorCusto = &v[0];
    for(i=0; i<n; i++){
        for(j=0; j<QTDREVISOES; j++){
            if(v[i].revisoes[j].custo > maisCaro){
                CarroMaiorCusto = &v[i];

            }
        }
    }
}