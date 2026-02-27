#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ContaCaracteres(char s[],int *maiusculas,int *minusculas, int *digitos) {
  *maiusculas=0;
  *minusculas=0;
  *digitos=0;
  while(*s) {
      if(*s>='A'&&*s<='Z')
        (*maiusculas)++;
      if(*s>='a'&&*s<='z')
        (*minusculas)++;
      if(*s>='0'&&*s<='9')
        (*digitos)++;
    s++;
  }    
}

int main() {
    char s[100];
    int qtdmaius, qtdminus, qtddig;
    printf("Informe uma string:");
    fgets(s,sizeof(s),stdin); // o fgets le inclusive o '\n',
                              // mas nesse caso não é relevante
    ContaCaracteres(s,&qtdmaius,&qtdminus,&qtddig);
    printf("Qtd Maiusculas:%d\n",qtdmaius);                              
    printf("Qtd Minusculas:%d\n",qtdminus);                              
    printf("Qtd Digitos   :%d\n",qtddig);                              
    return 0;
}
