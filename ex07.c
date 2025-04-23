#include <stdio.h>

int main(){
    int a, m, d;

    printf("Digite quantos anos você tem:");
    scanf("%i",&a);
    printf("Digite mais quantos meses você tem:");
    scanf("%i",&m);
    printf("Digite mais quantos dias você tem:");
    scanf("%i",&d);
    printf("Você viveu %i dias", (a*365)+(m*30)+d);
}
