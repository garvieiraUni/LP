#include <stdio.h>

int main(){
    int sa;
    float pr;

    printf("Digite o salário atual:");
    scanf("%i",&sa);
    printf("Digite o percentual de reajuste:");
    scanf("%f",&pr);
    printf("O novo salário será: %f", sa*pr);

}
