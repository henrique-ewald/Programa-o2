#include <stdio.h>
#include <string.h>

int resistor(char cor1[10], char cor2[10], char mult[10]){
    int resistor;
    char cores[10][10] = {
        "preto", "marrom", "vermelho", "laranja", "amarelo",
        "verde", "azul", "violeta", "cinza", "branco"
    };
    int digito1, digito2, multiplo;
    int dig[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mults[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    int i;
    for(i=0; i<10; i++){
        if (strcmp(cor1, cores[i]) == 0){digito1 = dig[i];}
        if (strcmp(cor2, cores[i]) == 0){digito2 = dig[i];}
        if (strcmp(mult, cores[i]) == 0){multiplo = mults[i];}
    }
    resistor = ((digito1*10)+digito2) * multiplo;
    return resistor;
}

int main(){
    char cor1[10], cor2[10], mult[10];
    printf("Escreva as tres cores com um espaço separando-as\n");
    scanf("%s %s %s", cor1, cor2, mult);
    printf("%d", resistor(cor1, cor2, mult));
}