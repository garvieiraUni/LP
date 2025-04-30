#include <stdio.h>

int main(){
    int v1, v2;
    printf("Digite o primeiro valor:");
    scanf("%d",&v1);
    printf("Digite o segundo valor:");
    scanf("%d",&v2);
    if(v1>v2)
        printf("%d é o maior",v1);
    else
        printf("%d é o maior",v2);
}   
