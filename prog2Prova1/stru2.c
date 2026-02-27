#include <stdio.h>

int main(){
    typedef struct carnes{char nomeCarne[20]; int validade;} churras;
    churras tudo[10];
    churras aux;
    int i,j;
    int N;
    while(scanf("%d", &N) != EOF){
        for(i=0; i<N; i++){
            scanf("%s", tudo[i].nomeCarne);
            scanf("%d", &tudo[i].validade);
        }
        for(i=0; i<N-1; i++){
            for(j=0; j<N-1; j++){
                if(tudo[j].validade > tudo[j+1].validade){
                    aux = tudo[j];
                    tudo[j] = tudo[j+1];
                    tudo[j+1] = aux; 
                }
            }
        }
        for(i=0; i<N; i++){
            printf("%s", tudo[i].nomeCarne);
            if(i < N-1){printf(" ");}
        }
        printf("\n");
    }
}