#include <stdio.h>

int main(){
    int m[3][3], i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    printf("Matriz original:\n");
    for(i = 0; i < 3; i++) {
        if(i != 0)
            printf("\n");
        printf("| ");
        for(j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("|");
    }
    printf("\nMatriz transposta:\n");
    for(j=0; j < 3; j++) {
        if(j != 0)
            printf("\n");
        printf("| ");
        for(i = 0; i < 3; i++) {
            printf("%d ", m[i][j]);
        }
        printf("|");
    }
}