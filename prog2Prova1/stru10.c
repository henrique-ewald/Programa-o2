#include <stdio.h>
#include <string.h>
#define N 15

int main(){
    int i,j, y;
    char telefones[N][N] = {0};
    char letras[8][4] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    for(i=0; telefones[i][0] != '\0'; i++){
        scanf("%s", telefones[i]);
        for(j=0; telefones[i][j] != '\0'; j++){
            for(y=0; y<4 || letras[j][y] != '\0'; y++){
                if (telefones[i][j] == letras[j][y]){
                    telefones[i][j] = j+2;
                }
            }
        }
    }
    for(i=0; i<N; i++){
        printf("\n%s", telefones[i]);
    }
        

}