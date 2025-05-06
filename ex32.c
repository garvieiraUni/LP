#include <stdio.h>
#include <math.h>

int main(){
    float sal_fixo, val_vendas;
    printf("Salario fixo: R$ ");
    scanf("%f", &sal_fixo);
    printf("Valor das vendas efetuadas: R$ ");
    scanf("%f", &val_vendas);
    if (val_vendas > 1500){
        printf("Salario total: R$ %.2f", sal_fixo + 0.03*1500 + 0.05*(val_vendas-1500));
    }
    else{
        printf("Salario total: R$ %.2f", sal_fixo + 0.03*val_vendas);
    }
}