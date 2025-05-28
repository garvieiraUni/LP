#include <stdio.h>

int main(){
  int vet[10], i, j, cont=0;
  for(i = 0; i < 10; i++){
    printf("Digite o valor do vetor[%d]: ", i+1);
    scanf("%d", &vet[i]);
  }
  for(i = 0; i < 10; i++){
    cont = 0;
    for(j=1; j <= vet[i]; j++){
      if(vet[i] % j == 0)
        cont++;
    }
    if(cont == 2)
      printf("O numero %d e primo na posição %d\n", vet[i], i+1);
  }
}