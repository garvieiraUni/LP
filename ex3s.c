#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXA 100
#define MAXBC 20

char troca(char A[MAXA], char B[MAXBC], char C[MAXBC]){
    char *refer=strstr(A,B);
    int i, j, pos, cont=0;
    if(refer != NULL){
        pos = refer - A;
        if(strlen(B)>strlen(C)){
            for(i=pos;i<strlen(A);i++){
                if(C[cont]!='\0'){
                    A[i] = C[cont];
                } else {
                    for(j=i;j<strlen(A);j++){  
                        A[i] = A[i+1];
                    }
                }
                cont++;
            }
        } else if(strlen(C)>strlen(B)){
            for(i=pos;i<strlen(A);i++){
                if(B[cont] != '\0'){
                    A[i] = C[cont];
                } else {
                    printf("%d", strlen(A));
                    for(j=strlen(A);j>i;j--){
                        A[j] = A[j-1];
                        printf("j:%d A[j]:%s A[j+1]:%s\n",j,A[j],A[j+1]);
                    }
                    A[i] = C[cont];
                }
                cont++;
            }
        }
        puts(A);
    }
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