#include <stdio.h>

int main(){
    int idade_homem1, idade_homem2, idade_mulher1, idade_mulher2;
    int homem_mais_velho, homem_mais_novo, mulher_mais_velha, mulher_mais_nova;
    int soma, produto;
    printf("Digite a idade do primeiro homem: ");
    scanf("%d", &idade_homem1);
    printf("Digite a idade do segundo homem: ");
    scanf("%d", &idade_homem2);
    printf("Digite a idade da primeira mulher: ");
    scanf("%d", &idade_mulher1);
    printf("Digite a idade da segunda mulher: ");
    scanf("%d", &idade_mulher2);
    if (idade_homem1 > idade_homem2){
        homem_mais_velho = idade_homem1;
        homem_mais_novo = idade_homem2;
    }
    else{
        homem_mais_velho = idade_homem2;
        homem_mais_novo = idade_homem1;
    }
    if (idade_mulher1 > idade_mulher2){
        mulher_mais_velha = idade_mulher1;
        mulher_mais_nova = idade_mulher2;
    }
    else{
        mulher_mais_velha = idade_mulher2;
        mulher_mais_nova = idade_mulher1;
    }
    soma = homem_mais_velho + mulher_mais_nova;
    produto = homem_mais_novo * mulher_mais_velha;
    printf("Soma das idades do homem mais velho com a mulher mais nova: %d\n", soma);
    printf("Produto das idades do homem mais novo com a mulher mais velha: %d\n", produto);
}