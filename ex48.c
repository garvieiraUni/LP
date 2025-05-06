#include <stdio.h>

int main() {
    float nota1, nota2, optativa, media;
    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &nota2);
    printf("Digite a nota da avaliacao optativa (ou -1 caso nao tenha feito): ");
    scanf("%f", &optativa);
    if (optativa != -1){
        if (nota1 < nota2 && optativa > nota1){
            nota1 = optativa;
        }
        else if (nota2 <= nota1 && optativa > nota2){
            nota2 = optativa;
        }
    }
    media = (nota1 + nota2) / 2;
    printf("Media do semestre: %.2f\n", media);
    if (media >= 6.0){
        printf("Situacao: Aprovado");
    }
    else if (media < 3.0){
        printf("Situacao: Reprovado");
    }
    else{
        printf("Situacao: Exame");
    }
}