#include <stdio.h>
#include <math.h>

int main(){
    int gols1, gols2;
    printf("Gols do time 1: ");
    scanf("%d", &gols1);
    printf("Gols do time 2: ");
    scanf("%d", &gols2);
    if (gols1 == gols2){
        printf("Empate");
    }
    else{
        if (gols1 > gols2){
            printf("Time 1 vencedor");
        }
        else{
            printf("Time 2 vencedor");
        }
    }   
}