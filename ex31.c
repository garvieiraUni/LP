#include <stdio.h>

int main(){
    char sexo;
    float altura, peso_ideal;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);
    if (sexo == 'M'){
        peso_ideal = 72.7*altura - 58;
    }
    else{
        peso_ideal = 62.1*altura - 44.7;
    }
    printf("Seu peso ideal: %.2f Kg", peso_ideal);
}