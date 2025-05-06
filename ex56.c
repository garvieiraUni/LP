#include <stdio.h>

int main(){
    int num1, num2, operacao;
    float resultado;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);
    printf("Escolha a operação a ser realizada:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Divisão\n");
    printf("4. Multiplicação\n");
    printf("Digite o número correspondente à operação: ");
    scanf("%d", &operacao);
    if (operacao == 1){
        resultado = num1 + num2;
        printf("Resultado da Adição: %.2f", resultado);
    }
    else if (operacao == 2){
        resultado = num1 - num2;
        printf("Resultado da Subtração: %.2f", resultado);
    }
    else if (operacao == 3){
        if (num2 != 0){
            resultado = (float)num1 / num2;
            printf("Resultado da Divisão: %.2f", resultado);
        }
        else{
            printf("Erro: Divisão por zero não é permitida.");
        }
    }
    else if (operacao == 4){
        resultado = num1 * num2;
        printf("Resultado da Multiplicação: %.2f", resultado);
    }
    else{
        printf("Operação inválida. Por favor, escolha entre 1, 2, 3 ou 4.");
    }
}