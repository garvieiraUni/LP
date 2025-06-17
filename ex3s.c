#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXA 100
#define MAXBC 20

char troca(char A[MAXA], char B[MAXBC], char C[MAXBC]){
    char *refer=strstr(A,B), resultado[MAXA*3];
    int i, j, cont;
    do{
        for (i = 0, j = 0; i < strlen(A); i++){
            if(&A[i] == refer){
                for(cont = 0; cont < strlen(C); cont++){
                    resultado[j] = C[cont];
                    j++;
                }
                i += strlen(B) - 1;
            } else {
                resultado[j++] = A[i];
            }
        }
        resultado[j] = '\0';
        for(i = 0; i < j; i++){
            A[i] = resultado[i];
            A[j] = '\0';
        }
        refer = strstr(A, B);
    }while(refer != NULL);
    puts(resultado);
}

int main(){
    char A[MAXA],B[MAXBC],C[MAXBC];
    printf("C substituirá B em A!\n");
    printf("Digite B ---> ");
    fgets(B,sizeof(B),stdin);
    B[strlen(B)-1] = '\0';
    printf("Digite C ---> ");
    fgets(C,sizeof(C),stdin);
    C[strlen(C)-1] = '\0';
    printf("Digite A ---> ");
    fgets(A,sizeof(A),stdin);
    A[strlen(A)-1] = '\0';
    troca(A,B,C);
}