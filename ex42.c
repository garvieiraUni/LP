#include <stdio.h>

int main(){
    int x, y, z;
    char resposta;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);
    z = x*y + 5;
    if (z <= 0){
        resposta = 'A';
    }
    else{
        if (z <= 100){
            resposta = 'B';
        }
        else{
            resposta = 'C';
        }
    }
    printf("z: %d, Resposta: %c\n", z, resposta);
}

