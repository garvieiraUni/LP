#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, n3;
    printf("Digite tres valores de lados de um triangulo: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 < n2+n3 && n2 < n1+n3 && n3 < n2+n1){
        printf("Esse triangulo existe");
    }
    else{
        printf("Esse triangulo nao existe");
    }
}