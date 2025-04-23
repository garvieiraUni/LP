#include <stdio.h>

int main(){
    int f;

    printf("Digite a temperatura em farenheit:");
    scanf("%i",&f);
    printf("A temperatura em celsius é: %i", (5*(f-32))/9);
}
