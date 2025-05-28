#include <stdio.h>

int main(){
    float vet[5];
    int codigo=3, i, z;
    for(i=0;i<5;i++){
        printf("digite o valor para a posição %d: ", i+1);
        scanf("%f", &vet[i]);
    }
    while(codigo < 0 || codigo > 2){
        printf("Digite o código:");
        scanf("%d",&codigo);
        if(codigo==0)
            break;
        else if(codigo == 1)
            for(z=0;z<5;z++)
                printf("posição %d: %.3f\n", z+1, vet[z]);
        else if(codigo==2)
            for(z=4;z>-1;z--)
                printf("posição %d: %.3f\n", z+1, vet[z]);
        else
            printf("Valor inválido, digite novamente!\n");
    }
}