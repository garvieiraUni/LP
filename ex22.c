#include <stdio.h>

int main(){
    int a[10], b[10], c[10], i;
    for(i=0;i<10;i++){
        scanf("%d", b[i]);
        scanf("%d", c[i]);
        if((i%2)==0)
            a[i] = b[i];
        else
            a[i] = c[i];
    }
}