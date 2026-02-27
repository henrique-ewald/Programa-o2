#include <stdio.h>
#include <string.h>


int iniciais(char inicial[], char nomeCompleto[]){
    int i,j=0;
    int cont=0;
    int flag=0;
    for(i=0; nomeCompleto[j] != '\0'; i++, flag=0){
        for(;nomeCompleto[j] != ' ' || nomeCompleto[j] != '\0'; j++){
            if(flag==0){
                inicial[i] = nomeCompleto[j];
                inicial[i+1] = '.';
                i++;
                flag=1;
            }
        }
    }
    for(j=0; j<=i; j++){
        if(j==i){inicial[j] = '\0';}
    }
    cont = (i/2);
    return cont;
}


int main(){
    int x;
    char inicial[21];
    char nomeCompleto[100] = "Henrique Ewald Dos Santos";
    printf("%s", nomeCompleto);
    x = iniciais(inicial, nomeCompleto);
    printf("Teve %d iniciais, e a sigla ficou como: %s\n", x, inicial);
}