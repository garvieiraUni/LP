#include <stdio.h>

int main(){
    int codigo, senha;
    printf("Digite o codigo de usuario: ");
    scanf("%d", &codigo);
    if (codigo != 1234){
        printf("usuario invalido!");
    }
    else{
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != 9999){
            printf("senha incorreta!");
        }
        else{
            printf("Acesso permitido");
        }
    }
}