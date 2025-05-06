#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, n3;
    printf("Digite tres numeros distintos: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 < n2 && n1 < n3){
        printf("Soma dos dois maiores: %d", n2+n3);
    }
    else{
        if (n2 < n1 && n2 < n3){
            printf("Soma dos dois maiores: %d", n1+n3);
        }
        else{
            printf("Soma dos dois maiores: %d", n1+n2);
        }
    }
}