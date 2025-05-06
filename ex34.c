#include <stdio.h>
#include <math.h>

int main(){
    float quant_atual, quant_max, quant_min, quant_media;
    printf("Quantidade atual em estoque do produto: ");
    scanf("%f", &quant_atual);
    printf("Quantidade maxima em estoque do produto: ");
    scanf("%f", &quant_max);
    printf("Quantidade minima em estoque do produto: ");
    scanf("%f", &quant_min);
    quant_media = (quant_max + quant_min)/2;
    printf("Quantidade media em estoque do produto: %.0f", quant_media);
    if (quant_atual >= quant_media){
        printf(" - Nao efetuar compra");
    }
    else{
        printf(" - Efetuar compra");
    }
}