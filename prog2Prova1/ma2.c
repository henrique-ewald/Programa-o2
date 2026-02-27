#include <stdio.h>
#define N 5

int inca(int piramide[N][N]){
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if (i==0  && j!=0 && (piramide[0][j] != (piramide[0][j-1] +1)) ){
                return 0;
            }
            else if(j==4 && i!=0 && (piramide[i][4] != (piramide[i-1][4] + 1)) ){
                return 0;
            }
            else if(i==4 && j!=0 && j!=4 && (piramide[4][j] != (piramide[4][j-1] - 1))){
                return 0;
            }
            else if(j==0 && i>=2 && (piramide[i][0] != (piramide[i-1][0] - 1))){
                return 0;
            }
            else if(j!=4 && i==1 && (piramide[1][j] != (piramide[1][j-1] + 1))){
                return 0;
            }
            else if(j==3 && i!=0 && i!=4 && i!=1 && (piramide[i][3] != (piramide[i-1][3] + 1))){
                return 0;
            }
            else if(i==3 && j==2 && (piramide[3][2] != (piramide[3][1] + 1))){
                return 0;
            }
            else if(j==1 && i==3 && (piramide[i][1] != (piramide[i-1][1] - 1))){
                return 0;
            }
            else if(i==2 && j==2 && (piramide[2][2] != (piramide[2][1] - 1))){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n1;
    int matriz[N][N] = {
        {1,  2,  3,  4,  5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };
    n1 = inca(matriz);
    printf("Resultado: %d\n", n1);

    return 0;
}

//  [1,  2,  3,  4,  5]
//  [16, 17, 18, 19, 6]
//  [15, 24, 25, 20, 7]
//  [14, 23, 22, 21, 8]
//  [13, 12, 11, 10, 9]