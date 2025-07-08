#include <stdio.h>
struct alunos{
    int RA;
    int nota;
    int frequencia;
    char nome[100];
} aluno[60];

int main() {
    int num, i, ra, op, cont=0;
    printf("quantos alunos serao registrados: ");
    scanf("%d", &num);
    for(i=0;i<num;i++){
        printf("____________________________________\n");
        printf("digite o nome do aluno: ");
        getchar();
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strlen(aluno[i].nome)-1]='\0';
        printf("digite o RA: ");
        scanf("%d", &aluno[i].RA);
        printf("digite a nota: ");
        scanf("%d", &aluno[i].nota);
        printf("digite a frequencia: ");
        scanf("%d", &aluno[i].frequencia);
    }
    do{
        printf("\ndigite o ra do aluno desejado: ");
        scanf("%d",&ra);
        for(i=0;i<num;i++){
            if(ra==aluno[i].RA){
                printf("digite o que vc quer consultar\n1.nome\n2.nota\n3.frequencia\n4.RA\n-->");
                scanf("%d",&op);
                if(op==1){
                    printf("--");
                    puts(aluno[i].nome);
                    printf("deseja alterar?(S-1/N-0):");
                    scanf("%d",&op);
                    if(op==1){
                        printf("digite o novo nome: ");
                        getchar();
                        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
                        aluno[i].nome[strlen(aluno[i].nome)-1]='\0';
                    }
                }
                if(op==2){
                    printf("--%d--\n",aluno[i].nota);
                    printf("deseja alterar?(S-1/N-0):");
                    scanf("%d",&op);
                    if(op==1){
                        printf("digite a nova nota: ");
                        scanf("%d",&aluno[i].nota);
                    }
                }
                if(op==3){
                    printf("--%d--\n",aluno[i].frequencia);
                    printf("deseja alterar?(S-1/N-0):");
                    scanf("%d",&op);
                    if(op==1){
                        printf("digite a nova frequencia: ");
                        scanf("%d",&aluno[i].frequencia);
                    }
                }
                   if(op==4){
                    printf("--%d--\n", aluno[i].RA);
                    printf("deseja alterar?(S-1/N-0):");
                    scanf("%d",&op);
                    if(op==1){
                        printf("digite o novo RA: ");
                        scanf("%d",&aluno[i].RA);
                    }
                }
                break;
            }else if(cont==num)
                printf("Nenhum RA encontrado\n");
            else
                cont++;
        }
        printf("deseja procurar novamente?(S-1/N-0)");
        scanf("%d",&op);
    }while(op==1);
}
