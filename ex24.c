#include <stdio.h>

int main(){
    int m;
    printf("Digite a quantidade de maçãs:");
    scanf("%d",&m);
    if(m>10)
        printf("A compra ficará %d reais", m*1);
    else
        printf("A compra ficará %.2f reais", m*1.5);
}
