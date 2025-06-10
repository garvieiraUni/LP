#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, k, cont=0, j=0, reps;
    char strA[50], strB[50], strC[100];
    printf("Digite duas frases de até 50 caracteres.\n1. --> ");
    fgets(strA,sizeof(strA),stdin);
    strA[strlen(strA)-1] = '\0';
    printf("2. --> ");
    fgets(strB,sizeof(strB),stdin);
    strB[strlen(strB)-1] = '\0';
    if(strlen(strA)>strlen(strB))
        reps = strlen(strA);
    else
        reps = strlen(strB);
    for(i=0;i<reps;i++){
        if(strA[i]=='\0'){
            j=cont;
            for(k=i;k<reps;k++){
                strC[j] = strB[k];
                j++;
            }
            break;
        }
        else if(strB[i]=='\0'){
            j=cont;
            for(k=i;k<reps;k++){
                strC[j] = strA[k];
                j++;
            }
            break;
        }
        else{
            strC[cont]=strA[i];
            strC[cont+1]=strB[i];
        }
        cont+=2;
    }
    puts(strC);
}