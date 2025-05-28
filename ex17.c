#include <stdio.h>

int main(){
    int vet[10], i;
    for(i=0;i<10;i++)
        scanf("%d",&vet[i]);
    for(i=0;i<10;i++)
        printf("%d ", vet[i]);
    for(i=0;i<10;i++){
        if(vet[i]<0)
            vet[i] = 0;
    }
    printf("\n");
    for(i=0;i<10;i++)
     printf("%d ", vet[i]);
}