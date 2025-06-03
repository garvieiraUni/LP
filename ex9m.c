#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[3][3], i, j, soma=0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if(i>j)
                soma += m[i][j];
        }
    }
    printf("A soma dos elementos abaixo da diagonal principal e: %d\n", soma); 
}