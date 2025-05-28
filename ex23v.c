#include <stdio.h>

int main(){
  int v1[5], v2[5], escalar=0, i;
  for(i = 0; i < 5; i++){
    printf("Digite o valor do vetor 1[%d] e 2[%d]: \n", i+1, i+1);
    scanf("%d\n", &v1[i]);
    scanf("%d", &v2[i]);
    escalar += v1[i] * v2[i];
   }
  printf("O produto escalar dos vetores eh: %d\n", escalar);
  printf("v1:");
  for(i = 0; i < 5; i++)
    printf("%d ", v1[i]);
  printf("\nv2:");
  for(i = 0; i < 5; i++)
    printf("%d ", v2[i]);
}