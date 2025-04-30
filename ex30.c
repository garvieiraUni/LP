#include <stdio.h>

int main(){
    int h;
    float s, st;
    printf("Digite as horas no mês:");
    scanf("%d",&h);
    printf("Digite o salário por hora:");
    scanf("%f",&s);
    if(h>160){
        h -= 160;
        st = (s*h*1.5) + s*160;
    }
    else
        st = s*h;
        printf("O salário será %.2f", st);
}
