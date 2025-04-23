#include <stdio.h>

int main(){
    int e, b, n, v;

    printf("Digite o número de eleitores:");
    scanf("%i",&e);
    printf("Digite o número de votos brancos:");
    scanf("%i",&b);
    printf("Digite o número de votos nulos:");
    scanf("%i",&n);
    printf("Digite o número de votos válidos:");
    scanf("%i",&v);

    printf("a porcentagem de votos brancos foi: %i", (100*b)/e);
    printf("\na porcentagem de votos nulos foi: %i", (100*n)/e);
    printf("\na porcentagem de votos válidos foi: %i", (100*v)/e);
}
