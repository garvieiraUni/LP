#include <stdio.h>

int vef_tri(int l1, int l2, int l3){
    if(l1>(l2+l3)||l2>(l1+l3)||l3>(l2+l1))
        return 0;
    else{
        if(l1==l2 && l2==l3)
            return 1;
        else if(l3==l2 || l2==l1){
            return 2;
        }
        else
            return 3;
    }
}
int main(){
    int l1, l2, l3, type;
    printf("Digite os lados de um triangulo: ");
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);
    type = vef_tri(l1,l2,l3);
    if(type==0)
        printf("Esse triangulo não existe");
    else if(type==1)
        printf("Equilátero");
    else if(type==2)
        printf("Isóceles");
    else if(type==3)
        printf("Escaleno");
}