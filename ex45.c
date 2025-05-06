#include <stdio.h>

int main(){
    float kg_morango, kg_maca, preco_morango, preco_maca, total, desconto = 0;
    printf("Digite a quantidade (em Kg) de morangos: ");
    scanf("%f", &kg_morango);
    printf("Digite a quantidade (em Kg) de macas: ");
    scanf("%f", &kg_maca);
    if (kg_morango <= 5){
        preco_morango = kg_morango * 2.50;
    }
    else{
        preco_morango = kg_morango * 2.20;
    }
    if (kg_maca <= 5){
        preco_maca = kg_maca * 1.80;
    }
    else{
        preco_maca = kg_maca * 1.50;
    }
    total = preco_morango + preco_maca;
    if ((kg_morango + kg_maca > 8) || (total > 25.00)){
        desconto = total * 0.10;
    }
    total -= desconto;
    printf("O valor total a ser pago é: R$ %.2f\n", total);
}