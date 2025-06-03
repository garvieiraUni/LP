#include <stdio.h>

int main(){
    int m[4][4], i, j;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
            while(m[i][j] < 1 || m[i][j] > 20) {
                printf("Valor invalido. Digite um numero entre 1 e 20: ");
                scanf("%d", &m[i][j]);
            }
        }
    }
    printf("Matriz original:\n");
    for(i = 0; i < 4; i++) {
        if(i != 0)
            printf("\n");
        printf("| ");
        for(j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("|");
    }
    printf("\nMatriz triangular inferior:\n");
    for(i = 0; i < 4; i++) {
        if(i != 0)
            printf("\n");
        printf("| ");
        for(j = 0; j < 4; j++) {
            if(i >= j)
                printf("%d ", m[i][j]);
            else
                printf("0 ");
        }
        printf("|");
    }
}