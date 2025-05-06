#include <stdio.h>

int main(){
    int codigo;
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);
    if (codigo == 1) {
        printf("Região de procedência: Sul");
    }
    else if (codigo == 2){
        printf("Região de procedência: Norte");
    }
    else if (codigo == 3){
        printf("Região de procedência: Leste");
    }
    else if (codigo == 4){
        printf("Região de procedência: Oeste");
    }
    else if (codigo == 5 || codigo == 6){
        printf("Região de procedência: Nordeste");
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9){
        printf("Região de procedência: Sudeste");
    }
    else if (codigo == 10){
        printf("Região de procedência: Centro-Oeste");
    }
    else if (codigo == 11){
        printf("Região de procedência: Noroeste\n");
    }
    else{
        printf("produto importado");
    }
}