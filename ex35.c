#include <stdio.h>
#include <math.h>

int main(){
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    if (valor >= 0){
        if (valor > 0){
            printf("O valor e positivo");
        }
        else{
            printf("O valor e nulo");
        }
    }
    else{
        printf("O valor e negativo");
    }
}