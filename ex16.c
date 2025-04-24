#include <stdio.h>

int main(){
    float n1, n2, n3;
    printf("digite a primeira nota:");
    scanf("%f", &n1);
    printf("digite a segunda nota:");
    scanf("%f", &n2);
    printf("digite a terceira nota:");
    scanf("%f", &n3);

    printf("A média final é: %f", (n1*2 + n2*3 + n3*5)/10);
}
