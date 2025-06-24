#include <stdio.h>

int vef_letra(char carac){
    if(carac >= 65 && carac <= 90)
        return 1;
    else if(carac >= 97 && carac <=122)
        return 1;
    else 
        return 0;
}

int vef_vogal(char carac){
    int vogais[10] = {65,69,73,79,85,97,101,105,111,117};
    for(int i =0;i<10;i++)
        if(carac==vogais[i])
            return 1;
    return 0;
}

int vef_cons(char carac){
    if(vef_letra(carac)==1){
        if(vef_vogal(carac)==1)
            return 0;
        else
            return 1;
    } else 
        return 0;    
}

int main(){
    char car;
    printf("Digite o caractere: ");
    scanf("%c",&car);
    printf("é letra: %d", vef_letra(car));
    printf("é vogal: %d", vef_vogal(car));
    printf("é consoante: %d", vef_cons(car));
}