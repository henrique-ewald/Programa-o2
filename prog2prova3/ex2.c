#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void inverteBits(int num){
    // tem que inverter todos os BITS da variavel;
    //supor:
    //
    // 101 000  ---- >>> 000 101
    // 40   ---- >> 5
    //
    // caso 1:          caso 2:            caso 3:              caso 4:
    // 1xx xx0          1xx xx1            0xx xx1              0xx xx0
    // 0xx xx1           xx xx

    int i,j;
    int aux, flag=0;
    for(i=0, j=31; i<16; i++, j--){
        
        // VERIFICA SE OS BITS SÃO IGUAIS, SE FOREM, NÃO FAZ NADA, SENÃO, FAZ O DE BAIXO;
        int bit_i = (x >> i) & 1;
        int bit_j = (x >> j) & 1;


        // INVERTE OS BITS CASO ELES SEJAM DIFERENTES:
        num ^= (1 << i);
        num ^= (1 << j);
    }
}

int main(){
    int num=40;
    inverteBits(num);
    printf("\n\nNumero antigo: 40\nNumero novo: %d", num);
}