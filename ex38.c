#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, n3;
    printf("Digite tres numeros distintos: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 < n2 && n1 < n3){
        if (n2 < n3){
            printf("Ordem crescente: %d, %d, %d", n1, n2, n3);
        }
        else{
            printf("Ordem crescente: %d, %d, %d", n1, n3, n2);
        }
    }
    else{
        if (n2 < n1 && n2 < n3){
            if (n1 < n3){
                printf("Ordem crescente: %d, %d, %d", n2, n1, n3);
            }
            else{
                printf("Ordem crescente: %d, %d, %d", n2, n3, n1);
            }
        }
        else{
            if (n1 < n2){
                printf("Ordem crescente: %d, %d, %d", n3, n1, n2);
            }
            else{
                printf("Ordem crescente: %d, %d, %d", n3, n2, n1);
            }
        }
    }
}