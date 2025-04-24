#include <stdio.h>
//combustivel 2,90
int main(){
    float kmi, kmf, l, vt, cons, lucro;
    printf("Digite a marcação do odômetro no inicio do dia:");
    scanf("%f",&kmi);
    printf("Digite a marcação do odômetro no fim do dia:");
    scanf("%f",&kmf);
    printf("Digite o total de litros de combustível gasto:");
    scanf("%f",&l);
    printf("Digite o valor total recebido dos passageiros:");
    scanf("%f",&vt);
    cons = (kmf-kmi)/l;
    lucro = vt - l*2.90;
    printf("o consumo do médio foi de %.0f km/l, enquanto o lucro foi de R$%.2f",cons,lucro);
}
