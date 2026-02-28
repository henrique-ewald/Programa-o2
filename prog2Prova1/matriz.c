#include <stdio.h>
#define N 4

int main(){
    int i,j;
    for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                if(j==0){printf("\n[");}
                printf("00");
                if(j<N-1){printf(", ");}
                if(j==N-1){printf("]");}
            }
        }
}