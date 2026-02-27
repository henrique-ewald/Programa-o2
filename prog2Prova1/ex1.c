#include <stdio.h>
#include <string.h>
#define N 3

int campoMinado(int M[N][N], int R[N][N]){

                                                            // [I0J0, I0J1, I0J2]
                                                            // [I1J0, I1J1, I1J2]
                                                            // [I2J0, I2J1, I2J2]

    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if (M[i][j] == 10) continue;
            cont=0;
        }
    }
}

int main(){
    M[N][N] = {{0, 10, 0}, {10, 10, 0}, {0, 0, 0};}

}