#include <stdio.h>
#include <stdlib.h>
#include "fake_IA.c"

void jogo(){
    int tabuleiro[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    int turno=1, linha, coluna, i, j;
    int vitoria=0, cont_emp=0, dif, fig, fig_bot;

    dif = dificuldade();
    fig = figura(&fig_bot);
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
                if(fig==1)
                    jogada(&linha, &coluna, tabuleiro);
                else{
                    if(dif==1)
                        jog_facil(&linha, &coluna, tabuleiro);
                    else if(dif==2)
                        jog_medio(&linha, &coluna, tabuleiro, fig);
                }
            }
            else if(turno==2){
                printf("\neh a vez do jogador 2(O)!\n");
                if(fig==2)
                    jogada(&linha, &coluna, tabuleiro);
                else{  
                    if(dif==1)  
                        jog_facil(&linha, &coluna, tabuleiro);
                    else if(dif==2)
                        jog_medio(&linha, &coluna, tabuleiro, fig_bot);
                }
            }
        }
        tabuleiro[linha][coluna] = turno;
        if(turno==1)
            turno=2;
        else if(turno==2)
            turno=1;
        if (vitoria == 1){
            if(fig==1)
                printf("\nParabens, voce venceu!\n");
            else
                printf("\nVoce perdeu!");
            break;
        }
        else if(vitoria == 2){
            if(fig==2)
                printf("\nParabens, voce venceu!\n");
            else
                printf("\nVoce perdeu!");
            break;
        }
    }
}