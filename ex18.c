#include <stdio.h>

int main(){
    int vet[10], x;
    printf("Digite um num. inteiro: ");
    scanf("%d", &x);
    for(int i=0;i<10;i++)
        vet[i] = x*(i+1);
    for(int i=0;i<10;i++)
        printf("%d ", vet[i]);
}