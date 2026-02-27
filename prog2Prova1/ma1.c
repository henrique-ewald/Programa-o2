#include <stdio.h>
#define N 3

int main(){
    int m[N][N];
    int i, j, k;
    int cont=0, contdef=0;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            scanf("%d", &m[i][j]);
        }
    } // o J vai adicionar os (1, 2, 3), depois que o I mudar pra 1
    // ele vai começar na outra coluna, tipo:   .(1, 2, 3)
    //                                          .(2, 1, 2)
    //                                          .(7, 2, 1)
    int isToeplitz = 1;
    for (i = 1; i < N; i++) {
        for (j = 1; j < N; j++) {
            if (m[i][j] != m[i-1][j-1]) {
                isToeplitz = 0;
                break;
            }
        }
        if (!isToeplitz) break;
    }
    if (isToeplitz) {
        printf("Eh uma matriz de Toeplitz");
    }
    return 0;
}

