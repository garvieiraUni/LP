#include <stdio.h>

int main(){
    float cf, final;
    printf("Digite o preço de fábrica:");
    scanf("%f",&cf);
    final = cf*0.28+ cf*0.45;
    printf("o preço final é de %f",cf+final);
}
