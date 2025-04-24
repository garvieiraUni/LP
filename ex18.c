#include <stdio.h>

int main(){
    int pot;
    float larg, comp, qtdw, qtdl;
    printf("Digite a potência da lâmpada em watts:");
    scanf("%i",&pot);
    printf("Digite a largura do cômodo:");
    scanf("%f", &larg);
    printf("Digite o comprimento do cômodo:");
    scanf("%f",&comp);
    qtdw = larg*comp*18;
    qtdl = qtdw/pot;
    printf("A quantidade de lâmpadas necessária é: %.0f", qtdl); 
}
