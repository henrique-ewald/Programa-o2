#include <stdio.h>
#include <string.h>
#define N 10

int contstr(char palavra[N]){
    int i, j;
    int cont=1;
    char bbt[N];
    bbt[0] = palavra[0];
    for(i=1; palavra[i] != '\0'; i++){
        for(j=0; bbt[j] != '\0'; j++){
            if (palavra[i] != bbt[j]){bbt[cont] = palavra[i]; cont++; break;}
        }
    }
}

int main(){
    char palavra[N];
    printf("Com qual palavra voce quer ver os char?:\n");
    scanf("%s", palavra);
    printf("\n\ntem %d caracteres diferentes", contstr(palavra));
}
