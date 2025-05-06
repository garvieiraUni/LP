#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    if (a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("Valores em ordem decrescente: %d, %d, %d\n", a, b, c);
}