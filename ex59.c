#include <stdio.h>

int main() {
    int angulo1, angulo2, angulo3;
    printf("Digite o valor do primeiro ângulo: ");
    scanf("%d", &angulo1);
    printf("Digite o valor do segundo ângulo: ");
    scanf("%d", &angulo2);
    printf("Digite o valor do terceiro ângulo: ");
    scanf("%d", &angulo3);
    if (angulo1 + angulo2 + angulo3 != 180){
        printf("Os valores fornecidos não formam um triângulo válido.\n");
    }
    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
        printf("O triângulo é Retângulo.");
    }
    else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90){
        printf("O triângulo é Obtusângulo.");
    }
    else{
        printf("O triângulo é Acutângulo.");
    }
}