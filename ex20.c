#include <stdio.h>

int main(){
    int vet1[10], vet2[10], i, cont=0;
    for(i=0;i<10;i++){
        printf("Digite um valor inteiro: ");
        scanf("%d",&vet1[i]);
        if((vet1[i]%2)!=0){
            vet2[cont]=vet1[i];
            cont ++;
        }
    }
    for(i=0;i<10;i++){
        if(i>cont)
            vet2[i] = 0;
        printf("%d, %d\n", vet1[i], vet2[i]);
    }
}