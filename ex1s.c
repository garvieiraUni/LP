#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, cont=1;
    char caracter, string[100];
    printf("Digite uma frase de até 100 caracteres\n---> ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';
    printf("Entrada: ");
    puts(string);
    for(i=0;i<strlen(string); i++){
        caracter = string[i];
        if(cont == 1){
            string[i] = string[i] - 32;
            cont=0;
        }
        if(caracter==' ')
            cont ++;   
    }
    printf("Saída: ");
    puts(string);
}