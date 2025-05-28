#include <stdio.h>

int main(){
    int a[10], b[10], c[10], i;
    for(i=0;i<10;i++){
        printf("Digite um valor para A[%d]: ", i+1);
        scanf("%d", &a[i]);
        printf("Digite um valor para B[%d]: ", i+1);
        scanf("%d", &b[i]);
        c[i] = a[i] - b[i];
    }
    printf("\n");
    for(i=0;i<10;i++)
        printf("C[%d]: %d | A[%d]: %d - B[%d]: %d\n", i+1, c[i], i+1, a[i], i+1, b[i]);
}