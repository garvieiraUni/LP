#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jog_facil(int *linha, int *coluna, int tab[3][3]){
    srand(time(NULL));
    int valid=0, l, c;
    do{
        l = rand() % 3;
        c= rand() % 3;
        if(tab[l][c]==0 && valid==0){
            *linha = l;
            *coluna = c;
            valid = 1;
        }
    }while(valid==0);
}

void jog_medio(int *linha, int *coluna, int tab[3][3], int fig){
    int i, j, vef=0;
    // Verifica linhas para ganhar
    for (i = 0; i < 3; i++) {
        if (tab[i][0] == tab[i][1] || tab[i][1] == tab[i][2] || tab[i][0] == tab[i][2]){
            if(tab[i][0]==fig||tab[i][1]==fig){
                if(tab[i][0]==fig||tab[i][2]==fig){
                    if(tab[i][1]==fig||tab[i][2]==fig){
                        for(j=0;j<3;j++){
                        if(tab[i][j]==0){
                            *linha = i;
                            *coluna = j;
                            vef=1;
                            }
                        }
                    }
                }
            }
        }
    }
    // Verifica colunas para ganhar
    for (j = 0; j < 3; j++) {
        if (tab[0][j] == tab[1][j] || tab[1][j] == tab[2][j] || tab[0][j] == tab[2][j] && vef==0){
            if(tab[0][j]==fig||tab[1][j]==fig){
                if(tab[0][j]==fig||tab[2][j]==fig){
                    if(tab[1][j]==fig||tab[2][j]==fig){
                        for(i=0;i<3;i++){
                            if(tab[i][j]==0){
                                *linha = i;
                                *coluna = j;
                                vef=1;
                            }
                        }
                    }
                }
            }
        }
    }

    // verifica diagonais para ganhar
    if (tab[0][0] == tab[1][1] || tab[1][1] == tab[2][2] || tab[0][0] == tab[2][2] && vef== 0){
        if(tab[0][0]==fig||tab[1][1]==fig){
            if(tab[0][0]==fig||tab[2][2]==fig){
                if(tab[1][1]==fig||tab[2][2]==fig){
                    for(i=0;i<3;i++){
                        if(tab[i][i]==0){
                            *linha = i;
                            *coluna = i;
                            vef=1;
                        }
                    }
                }
            }
        }
    }
    else if (tab[0][2] == tab[1][1] || tab[1][1] == tab[2][0] || tab[0][2] == tab[2][0] && vef == 0){
        if(tab[0][2]==fig||tab[1][1]==fig){
            if(tab[0][2]==fig||tab[2][0]==fig){
                if(tab[1][1]==fig||tab[2][0]==fig){
                    for(i=0;i<3;i++){
                        if(i==0)
                            j=2;
                        else if(i==2)
                            j=0;
                        else
                            j=i;
                        if(tab[i][j]==0){
                            *linha = i;
                            *coluna = j;
                            vef=1;
                        }
                    }
                }
            }
        }
    }

    if(vef==0){
        // Verifica linhas do adversario
        for (i = 0; i < 3; i++) {
            if (tab[i][0] == tab[i][1] || tab[i][1] == tab[i][2] || tab[i][0] == tab[i][2] && vef == 0){
                if(tab[i][0]!=0||tab[i][1]!=0){
                    if(tab[i][0]!=0||tab[i][2]!=0){
                        if(tab[i][1]!=0||tab[i][2]!=0){
                            for(j=0;j<3;j++){
                                if(tab[i][j]==0){
                                    *linha = i;
                                    *coluna = j;
                                    vef=1;
                                }
                            }
                        }
                    }
                }
            }
        }
        // Verifica colunas do adversario
        for (j = 0; j < 3; j++) {
            if (tab[0][j] == tab[1][j] || tab[1][j] == tab[2][j] || tab[0][j] == tab[2][j] && vef == 0){
                if(tab[0][j]!=0||tab[1][j]!=0){
                    if(tab[0][j]!=0||tab[2][j]!=0){
                        if(tab[1][j]!=0||tab[2][j]!=0){
                            for(i=0;i<3;i++){
                                if(tab[i][j]==0){
                                    *linha = i;
                                    *coluna = j;
                                    vef=1;
                                }
                            }
                        }
                    }
                }
            }
        }

        //verifica diagonais do adversario
        if (tab[0][0] == tab[1][1] || tab[1][1] == tab[2][2] || tab[0][0] == tab[2][2] && vef == 0){
            if(tab[0][0]!=0||tab[1][1]!=0){
                if(tab[0][0]!=0||tab[2][2]!=0){
                    if(tab[1][1]!=0||tab[2][2]!=0){
                        for(i=0;i<3;i++){
                            if(tab[i][i]==0){
                                *linha = i;
                                *coluna = i;
                                vef=1;
                            }
                        }
                    }
                }
            }
        }
        else if (tab[0][2] == tab[1][1] || tab[1][1] == tab[2][0] || tab[0][2] == tab[2][0] && vef == 0){
            if(tab[0][2]!=0||tab[1][1]!=0){
                if(tab[0][2]!=0||tab[2][0]!=0){
                    if(tab[1][1]!=0||tab[2][0]!=0){
                        for(i=0;i<3;i++){
                            if(i==0)
                                j=2;
                            else if(i==2)
                                j=0;
                            else
                                j=i;
                            if(tab[i][j]==0){
                                *linha = i;
                                *coluna = j;
                                vef=1;
                            }
                        }
                    }
                }
            }
        }
    }

    //se não houver linhas ou colunas, tenta colocar ao lado de uma figura aliada
    if(vef==0){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(tab[i][j]==fig){
                    if(j==1){
                        if(tab[i][j+1]==0 && vef==0){
                            *linha = i;
                            *coluna = j+1;
                            vef=1;
                        }
                        else if(tab[i][j-1]==0 && vef==0){
                            *linha = i;
                            *coluna = j-1;
                            vef=1;
                        }
                    }
                    else if(j==0){
                        if(tab[i][j+1]==0 && vef==0){
                            *linha = i;
                            *coluna = j+1;
                            vef=1;
                        }
                    }
                    else if(j==2){
                        if(tab[i][j-1]==0 && vef==0){
                            *linha = i;
                            *coluna = j-1;
                            vef=1;
                        }
                    }

                    if(i==1){
                        if(tab[i+1][j]==0 && vef==0){
                            *linha = i+1;
                            *coluna = j;
                            vef=1;
                        }
                        else if(tab[i-1][j]==0 && vef==0){
                            *linha = i-1;
                            *coluna = j;
                            vef=1;
                        }
                    }
                    else if(i==0){
                        if(tab[i+1][j]==0 && vef==0){
                            *linha = i+1;
                            *coluna = j;
                            vef=1;
                        }
                    }
                    else if(i==2){
                        if(tab[i-1][j]==0 && vef==0){
                            *linha = i-1;
                            *coluna = j;
                            vef=1;
                        }
                    }               
                }
            }
        }
    }
    if(vef==0){
        if(tab[1][1]==0){
            *linha = 1;
            *coluna = 1;
        }
        else{
            *linha = 0;
            *coluna = 2;
        }
    }
}