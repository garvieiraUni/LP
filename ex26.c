#include <stdio.h>

int main(){
    int at, an;
    printf("Insira o ano atual:");
    scanf("%i",&at);
    printf("Insira o ano de nascimento:");
    scanf("%i",&an);
    if ((at-an)<16)
        printf("Você não pode votar esse ano");
    else
        printf("Você pode votar esse ano");
}
