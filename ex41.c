#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite dois numeros:");
    scanf("%d %d",&n1,&n2);
    if(n1==n2)
        printf("Numeros iguais");
    else{
        if(n1>n2)
        printf("O primeiro e maior");
        else
        printf("O segundo e maior");
    }
}