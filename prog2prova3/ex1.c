#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq = fopen("entrada.txt", "rt");
    int i,j;
    char linha[50];
    fgets(linha, sizeof(linha), arq);
    int m = atoi(linha);
    char **produtos = (char*)calloc(m, sizeof(char*));
    for(i=0;i<m;i++){
        produtos[i] = (char)calloc(50, sizeof(char));
    }
    float *valores = (int)calloc(m, sizeof(float));
    for(i=0; i<m; i++){
        if (fscanf(arq, "%s %f", &produtos[i], valores[i]) == 2){
            printf("Chegou até aqui\n");
        }
        else {
            printf("\n\nErro na leitura da %d linha", i);
        }
    }
    int p = atoi(linha);
    float vltotal=0;
    char lixo[50];
    int quant;
    for(i=0; i<p; i++){
        for(j=0; j<m; j++){
            if(strcmp(linha, produtos[j]) == 0){
                if(fscanf(arq, "%s %f", lixo, &quant) == 2){
                    vltotal += (valores[j])*quant;
                }
                else{
                    printf("\n\nErro na Leitura da linha 31 do cod\n\n");
                }
            }
        }
    }
    FILE *novoArq = fopen("saida.txt", "wt");
    fprintf(novoArq, "%f", vltotal);
    fclose(novoArq);
    fclose(arq);
}