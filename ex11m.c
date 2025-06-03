#include <stdio.h>

int main(){
    int m[3][3], i, j, soma = 0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if(i==2 && j==0)
                soma += m[i][j];
            else if(i==0 && j==2)
                soma += m[i][j];
            else if(i==1 && j==1)
                soma += m[i][j];
        }
    }
    printf("A soma dos elementos na diagonal secundaria e: %d\n", soma);
}