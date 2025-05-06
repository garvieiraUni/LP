#include <stdio.h>

int main(){
    int lados;
    printf("Informe o número de lados do polígono: ");
    scanf("%d", &lados);
    if (lados < 3){
        printf("NÃO É UM POLÍGONO");
    }
    else if (lados == 3){
        printf("TRIÂNGULO");
    }
    else if (lados == 4){
        printf("QUADRADO");
    }
    else if (lados == 5){
        printf("PENTÁGONO");
    }
    else{
        printf("POLÍGONO NÃO IDENTIFICADO");
    }
}