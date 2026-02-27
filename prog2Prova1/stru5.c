#include <stdio.h>
#include <string.h>
#define N 4

void campoMinado(int m[N][N], int n[N][N]){
    int i,j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            n[i][j] = 0;
            if(m[i][j] == 10){n[i][j] = 10;}
        }
    }
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(n[i][j] != 10){
                if(i==0 && j==0){
                    if(m[i][j+1] == 10){n[i][j]++;}
                    if(m[i+1][j] == 10){n[i][j]++;}
                    if(m[i+1][j+1] == 10){n[i][j]++;}
                }
                else if(i==0 && j==N-1){
                    if(m[i+1][j] == 10){n[i][j]++;}
                    if(m[i+1][j-1] == 10){n[i][j]++;}
                    if(m[i][j-1] == 10){n[i][j]++;}
                }
                else if(i==N-1 && j==0){
                    if(m[i][j+1] == 10){n[i][j]++;}
                    if(m[i-1][j] == 10){n[i][j]++;}
                    if(m[i-1][j+1] == 10){n[i][j]++;}
                }
                else if(i==N-1 && j==N-1){
                    if(m[i][j-1] == 10){n[i][j]++;}
                    if(m[i-1][j] == 10){n[i][j]++;}
                    if(m[i-1][j-1] == 10){n[i][j]++;}
                }
                else if(i==0){
                    if(m[i+1][j] == 10){n[i][j]++;}
                    if(m[i+1][j-1] == 10){n[i][j]++;}
                    if(m[i+1][j+1] == 10){n[i][j]++;}
                    if(m[i][j-1] == 10){n[i][j]++;}
                    if(m[i][j+1] == 10){n[i][j]++;}
                }
                else if(i==N-1){
                    if(m[i-1][j] == 10){n[i][j]++;}
                    if(m[i-1][j-1] == 10){n[i][j]++;}
                    if(m[i-1][j+1] == 10){n[i][j]++;}
                    if(m[i][j-1] == 10){n[i][j]++;}
                    if(m[i][j+1] == 10){n[i][j]++;}
                }
                else if(j==0){
                    if(m[i+1][j] == 10){n[i][j]++;}
                    if(m[i+1][j+1] == 10){n[i][j]++;}
                    if(m[i-1][j] == 10){n[i][j]++;}
                    if(m[i-1][j+1] == 10){n[i][j]++;}
                    if(m[i][j+1] == 10){n[i][j]++;}
                }
                else if(j==N-1){
                    if(m[i+1][j] == 10){n[i][j]++;}
                    if(m[i+1][j-1] == 10){n[i][j]++;}
                    if(m[i-1][j] == 10){n[i][j]++;}
                    if(m[i-1][j-1] == 10){n[i][j]++;}
                    if(m[i][j-1] == 10){n[i][j]++;}
                }
                else if((j>0 && j<N-1) && (i>0 && i<N-1)){
                    if(m[i+1][j] == 10){n[i][j]++;}
                    if(m[i+1][j-1] == 10){n[i][j]++;}
                    if(m[i+1][j+1] == 10){n[i][j]++;}
                    if(m[i-1][j] == 10){n[i][j]++;}
                    if(m[i-1][j-1] == 10){n[i][j]++;}
                    if(m[i-1][j+1] == 10){n[i][j]++;}
                    if(m[i][j-1] == 10){n[i][j]++;}
                    if(m[i][j+1] == 10){n[i][j]++;}
                }
            }
        }
    }
}

int main(){
    int i, j;
    int n[N][N];
    int m[N][N] = {
        {00, 10, 00, 00},
        {10, 00, 10, 00},
        {00, 10, 00, 10},
        {10, 10, 10, 10}
    };
    campoMinado(m, n);
    for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                if(j==0){printf("\n[");}
                if(n[i][j] != 10){printf("0");}
                printf("%d", n[i][j]);
                if(j<N-1){printf(", ");}
                if(j==N-1){printf("]");}
            }
        }
}

