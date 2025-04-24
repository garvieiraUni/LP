#include <stdio.h>

int main(){
    int comprimento, voltas, reabastecimentos; 
    float consumo, Nreab, Nmin;
    printf("Digite o comprimento da pista em metros:");
    scanf("%i",&comprimento);
    printf("Digite o número de voltas do circuito:");
    scanf("%i",&voltas);
    printf("Digite o número de reabastecimnetos planejados:");
    scanf("%i",&reabastecimentos);
    printf("Digite o consumo do carro em km/l:");
    scanf("%f",&consumo);
    comprimento = comprimento/1000;
    Nreab = voltas/reabastecimentos;
    Nmin = (Nreab*comprimento)/consumo;
    printf("O combustível mínimo por abastecimento é: %.0fl", Nmin); 
}
