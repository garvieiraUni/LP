#include <stdio.h>

int main(){
    int v1, v2;
    printf("Digite o primeiro valor:");
    scanf("%d",&v1);
    printf("Digite o segundo valor:");
    scanf("%d",&v2);
    if(v1>v2)
        printf("Em ordem crescente: %d, %d", v2, v1);
    else
        printf("Em ordem crescente %d, %d", v1, v2);
}
