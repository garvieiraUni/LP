#include <stdio.h>

int main(){
    int hi, hf, nh;
    printf("Digite a hora de inicio:");
    scanf("%d",&hi);
    printf("Digite a hora do término:");
    scanf("%d",&hf);
    if(hi>hf)
        nh = 24 - (hi-hf);
    else
        nh = hf-hi;
    printf("Foram %d horas de jogo",nh);
}
