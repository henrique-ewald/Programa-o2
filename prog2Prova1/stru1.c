#include <stdio.h>
int main(){
    int numeros[4] = {2,3,4,5};
    int i, j, n, l[1000];
    int cont2=0, cont3=0, cont4=0, cont5=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &l[i]);
    for(j=0; j<n; j++){
        for(i=0; i<4; i++){
            switch (l[j]%numeros[i])
            {
            case 0:
                if(i==0){cont2++;}
                else if(i==1){cont3++;}
                else if(i==2){cont4++;}
                else if(i==3){cont5++;}
                break;
            default:
                break;
            }
        }
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", cont2, cont3, cont4, cont5);
}