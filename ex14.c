#include <stdio.h>

int main(){
    int fixo, vendas;
    float final, com, valor;
    printf("Digite o salário fixo:");
    scanf("%i",&fixo);
    printf("Digite a comissão:");
    scanf("%f",&com);
    printf("Digite o número de vendas:");
    scanf("%i",&vendas);
    printf("Digite o valor das vendas:");
    scanf("%f",&valor);
    final = fixo + com*vendas + valor*0.5;
    printf("O salário final será: %f", final);
}
