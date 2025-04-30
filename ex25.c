#include <stdio.h>

int main(){
    float a1, a2, media;
    printf("Informe a primeira nota:");
    scanf("%f",&a1);
    printf("Informe a segunda nota:");
    scanf("%f",&a2);
    media = (a1+a2)/2;
    if(media>=6)
        printf("APROVADO!");
    else
        printf("REPROVADO!");
    printf("\nA média foi %f",media);
}
