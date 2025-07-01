#include <stdio.h>
#include <stdlib.h>
#include "funcs.c"

void jogom(){
    int tabuleiro[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    int turno=1, linha, coluna, i, j;
    int vitoria=0, cont_emp=0;

    printf("\njogador 1(x) e jogador 2(o)\n");
    while(vitoria == 0){
        cont_emp = 0;
        cond_vitoria(tabuleiro, &vitoria);
        printf("Vitoria: %d\n", vitoria);
        printf("Tabuleiro:\n");
        for(i=0;i<3;i++){
            if(i!=0){
                printf("\n");
                printf("-------------");
                printf("\n");
            }
            for(j=0;j<3;j++){
                if(j==0)
                    printf("| ");
                if(tabuleiro[i][j] == 0)
                    printf("-");
                else if(tabuleiro[i][j] == 1){
                    printf("X");
                    cont_emp++;
                }
                else if(tabuleiro[i][j] == 2){
                    printf("O");
                    cont_emp++;
                }
                printf(" | ");
            }        
        }
        if(vitoria == 0){
            if(cont_emp == 9){
                printf("\nDeu velha!\n");
                break;
            }
            if(turno==1){
                printf("\neh a vez do jogador 1(x)!\n");
                jogada(&linha, &coluna, tabuleiro);
            }
            else if(turno==2){
                printf("\neh a vez do jogador 2(O)!\n");
                jogada(&linha, &coluna, tabuleiro);
            }
        }
        tabuleiro[linha][coluna] = turno;
        if(turno==1)
            turno=2;
        else if(turno==2)
            turno=1;
        if (vitoria == 1){
            printf("\nParabens jogador 1(x), voce venceu!\n");
            break;
        }
        else if(vitoria == 2){
            printf("\nParabens jogador 2(o), voce venceu!\n");
            break;
        }
    }
}