#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char a[2] = "A";
    i=5;
    a[1] = (char)i;
    printf("\n\n%c\n\n", a[1]);
}