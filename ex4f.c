#include <stdio.h>

int mdc(int a, int b){
    int div, res, n1=a,n2=b;
    if(b>a){
        n1 = b;
        n2 = a;
    }
    do{
        res=n1%n2;
        div=n2;
        if(res!=0){
            n1 = div;
            n2 = res;
        }
    }while(res!=0);
    return n2;
}

int main(){
    int na, nb;
    printf("Digite dois números:\n");
    scanf("%d",&na);
    scanf("%d",&nb);
    printf("MDC: %d", mdc(na, nb));
}