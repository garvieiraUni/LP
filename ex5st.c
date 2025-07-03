#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mês;
    int ano;
};

int dif_datas(struct data x, struct data y){
    int i, dif, diasx, diasy, dif_bis;
    diasx = (x.ano*365) + (x.mês*30) + x.dia;
    diasy = (y.ano*365) + (y.mês*30) + y.dia;

    // ajustando dias(meses diferentes e anos bissextos)
    for(i=1;i<=x.mês;i++){
        if(i==2)
            diasx-=2;
        if(i<=7){
            if(i%2 != 0)
                diasx += 1;
        }
        else{
            if(i%2 == 0)
                diasx += 1;
        }
    }
    for(i=1;i<=y.mês;i++){
        if(i==2)
            diasy-=2;
        if(i<=7){
            if(i%2 != 0)
                diasy += 1;
        }
        else{
            if(i%2 == 0)
                diasy += 1;
        }
    }
    //ano bissexto de referencia: 2024
    for(i=1;i<=x.ano;i++){
        dif_bis = i - 2024;
        if(dif_bis<0)
            dif_bis *= -1;
        if(dif_bis%4 == 0)
            diasx+=1;
    }
    for(i=1;i<=y.ano;i++){
        dif_bis = i - 2024;
        if(dif_bis<0)
            dif_bis *= -1;
        if(dif_bis%4 == 0)
            diasy+=1;
    }
    if(diasx>diasy)
        dif = diasx - diasy;
    else
        dif = diasy - diasy;
    printf("%d,%d", diasx, diasy);
    return dif;
}

int main(){
    struct data datax;
    struct data datay;
    int dif;
    printf("Digite a primeira data:\nDia-->");
    scanf("%d",&datax.dia);
    printf("Mês-->");
    scanf("%d",&datax.mês);
    printf("Ano-->");
    scanf("%d",&datax.ano);
    printf("\nDigite a segunda data:\nDia-->");
    scanf("%d",&datay.dia);
    printf("Mês-->");
    scanf("%d",&datay.mês);
    printf("Ano-->");
    scanf("%d",&datay.ano);
    dif = dif_datas(datax, datay);
    printf("\nDiferença: %d dias\n", dif);
}