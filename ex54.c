#include <stdio.h>
#include <math.h>

int main(){
    int lados;
    float medida;
    printf("Digite o número de lados do polígono regular (3, 4 ou 5): ");
    scanf("%d", &lados);
    printf("Digite a medida do lado em cm: ");
    scanf("%f", &medida);
    if (lados == 3){
        float perimetro = 3 * medida;
        printf("TRIÂNGULO\n");
        printf("Perímetro: %.2f cm", perimetro);
    }
    else if (lados == 4){
        float area = medida * medida;
        printf("QUADRADO\n");
        printf("Área: %.2f cm²", area);
    }
    else if (lados == 5){
        printf("PENTÁGONO");
    }
    else{
        printf("Número de lados inválido.");
    }
}
