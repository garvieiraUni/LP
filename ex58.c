#include <stdio.h>

int main(){
    float lado1, lado2, lado3;
    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%f", &lado2);
    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%f", &lado3);
    if (lado1 == lado2 && lado2 == lado3){
        printf("O triângulo é Equilátero.");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("O triângulo é Isósceles.");
    }
    else{
        printf("O triângulo é Escaleno.");
    }
}