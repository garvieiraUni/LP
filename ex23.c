#include <stdio.h>

int main(){
    int n;
    printf("digite um valor:");
    scanf("%d",&n);
    if(n<0)
        printf("O valor é negativo");
    else
        printf("O valor é positivo");
}
