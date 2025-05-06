#include <stdio.h>
#include <math.h>

int main(){
    float num_conta, saldo, debito, credito, saldo_atual;
    printf("Numero da conta do cliente: ");
    scanf("%f", &num_conta);
    printf("Saldo: R$ ");
    scanf("%f", &saldo);
    printf("Debito (sem sinal negativo): R$ ");
    scanf("%f", &debito);
    printf("Credito: R$ ");
    scanf("%f", &credito);
    saldo_atual = saldo - debito + credito;
    printf("Saldo atual: R$ %.2f", saldo_atual);
    if (saldo_atual >= 0){
        printf(" - Saldo  positivo");
    }
    else{
        printf(" - Saldo  negativo");
    }
}