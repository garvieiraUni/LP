#include <stdio.h>

int soma_num(int num){
    int soma=0;
    for(int i=2;i<num;i++)
        soma += i;
    return soma;
}
int main(){
    int n, soma_n;
    printf("Digite um número:");
    scanf("%d",&n);
    soma_n = soma_num(n);
    printf("A soma dos números entre %d e 1 é: %d", n, soma_n);
}