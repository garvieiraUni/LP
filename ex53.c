#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O número %d é par.", numero);
    }
    else{
        printf("O número %d é ímpar.", numero);
    }
}