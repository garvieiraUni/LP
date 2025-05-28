#include <stdio.h>

int main(){
  int v[6], vp[6], vi[6], contp=0, conti=0, i, sp=0;
  for(i = 0; i < 6; i++){
    printf("Digite o valor do vetor[%d]: ", i+1);
    scanf("%d", &v[i]);
  }
  for(i = 0; i < 6; i++){
    if(v[i] % 2 == 0){
      vp[contp] = v[i];
      contp++;
    }
    else{
      vi[conti] = v[i];
      conti++;
    }
  }
  for(i = 0; i < contp; i++)
    sp += vp[i];
  printf("A soma dos valores pares é: %d\n", sp);
  printf("Os valores impares são:\n"); 
  for(i = 0; i < conti; i++)
    printf("%d ", vi[i]);
  printf("\nA quantidade de valores impares é: %d", conti);
}