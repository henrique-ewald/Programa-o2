#include <stdio.h>
#define N 3

int main(){
    int m[N][N];
    int i,j,x=1;
    printf("Digite os numeros da matriz:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &m[i][j]);
        }
    }
    int k;
    printf("Quantas vezes devo subir essa matriz?:\n");
    scanf("%d", &k);
    while(k>=x){
        for(i=0; i<(N-1); i++){
            for(j=0; j<N; j++){
                m[i][j] = m[i+1][j];
            }
        }
        for(i=0; i<x; i++){
            for(j=0; j<N; j++){
                m[N-x][j] = 0;
            }
        }
        x++;
        for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                if(j==0){printf("\n[");}
                printf("%d", m[i][j]);
                if(j<N-1){printf(", ");}
                if(j==N-1){printf("]");}
            }
        }
        printf("\n\n ----Nova Matriz---- \n\n");
    }
}
