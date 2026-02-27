#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* indiceNum(char *s, int contres){
    int i,j, flag=0;
    

    for(i=0; s[i]; i++){
        if(s[i] != ' '){
            contres++;
        }
    }
}

float Mediana(char *s){
    int i,j, d=0, mult=0;
    int contres=0, flag=0;
    
    for(i=0; s[i]; i++){
        if(s[i] != ' '){contres++;}   /////// tem que criar um for com flag pra saber quantos numeros tem
    }

    int **cont = (int**)calloc(contres, sizeof(int*));

    for(i=0; i<contres; i++){
        cont[i] = (int*)calloc(contres, sizeof(int));
    }
    
    

    
    for(i=0; s[i]; i++){
        if(s[i] != ' '){
            cont[d] += (((int)s[i]-48)*mult);  /// deixaria o numero invertido...
            mult*=10;
        }
        else{
            d++;
            mult=0;
        }
    }
    
}