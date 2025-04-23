#include <stdio.h>

int main(){
    int s, h;

    printf("Digite o salário por hora:");
    scanf("%i",&s);
    printf("Digite as horas trabalhadas no mês:");
    scanf("%i",&h);
    printf("O salário será:%i", s*h);
}
