#include <stdio.h>

int main(){
    char tipoCombustivel;
    float litros, precoPorLitro, desconto, valorTotal;
    const float precoGasolina = 3.30;
    const float precoAlcool = 2.90;
    printf("Digite o tipo de combustível (A-álcool, G-gasolina): ");
    scanf(" %c", &tipoCombustivel);
    printf("Digite a quantidade de litros vendidos: ");
    scanf("%f", &litros);
    if (tipoCombustivel == 'A'){
        precoPorLitro = precoAlcool;
        if (litros <= 20){
            desconto = 0.03;
        }
        else{
            desconto = 0.05;
        }
    }
    else if (tipoCombustivel == 'G'){
        precoPorLitro = precoGasolina;
        if (litros <= 20){
            desconto = 0.04;
        } 
        else{
            desconto = 0.06;
        }
    }
    else{
        printf("Tipo de combustível inválido.\n");
        return 1;
    }
    valorTotal = litros * precoPorLitro * (1 - desconto);
    printf("Valor a ser pago: R$ %.2f\n", valorTotal);
}