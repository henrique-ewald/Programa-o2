#include <stdio.h>
#define N 3

int main(){
    int m[N][N];
    int i,j,x;
    printf("Digite os numeros da matriz:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &m[i][j]);
        }
    }
    int k;
    printf("Quantas vezes devo subir essa matriz?:\n");
    scanf("%d", &k);
    while(k!=0){
        for(i=0; i<N-1; i++){
            for(j=0; j<N; j++){    
                m[i][j] = m[i+1][j];
            }
        }
        for(x=0;x<N; x++){
            m[N-1][x] = 0;
        }
        for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                if(j==0){printf("\n[");}
                printf("%d", m[i][j]);
                if(j<N-1){printf(", ");}
                if(j==N-1){printf("]");}
            }
        }
        if(k>1) printf("\n\n ----Nova matriz----\n\n");
        k--;
    }


}