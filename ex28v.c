#include <stdio.h>

int main(){
  int v[10], v1[10], v2[10], contv1=0, contv2=0, i;
  for(i = 0; i < 10; i++){
    printf("Digite o valor do vetor[%d]: ", i+1);
    scanf("%d", &v[i]);
  }
  for(i = 0; i < 10; i++){
    if(v[i] % 2 == 0)
      v1[contv1++] = v[i];
    else
      v2[contv2++] = v[i];
  }
  printf("Vetor pai: ");
  for(i = 0; i < 10; i++)
    printf("%d ", v[i]);
  printf("\nVetor par: ");
  for(i = 0; i < contv1; i++)
    printf("%d ", v1[i]);
  printf("\nVetor impar: ");
  for(i = 0; i < contv2; i++)
    printf("%d ", v2[i]);
}