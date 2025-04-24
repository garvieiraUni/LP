#include <stdio.h>

int main(){
    float comp, larg, alt, m2;

    printf("Digite o comprimento:");
    scanf("%f",&comp);
    printf("Digite a largura:");
    scanf("%f",&larg);
    printf("Digite a altura:");
    scanf("%f",&alt);
    m2 = 2*alt*(comp+larg);
    printf("A quantidade de caixas necessárias será: %f", m2/1.5);
}
