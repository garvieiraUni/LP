#include <stdio.h>

int main(){
    float nota1, nota2, media;
    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Media semestral: %.2f\n", media);
    if (media >= 6.0){
        printf("PARABENS! Voce foi aprovado!\n");
    }
}