#include <stdio.h>
#include <stdlib.h>

char c;
float b;
int a;
int mes;
int dia;
int ano;
int vetor[4];

#define TESTE 2

int main()
{
    /*Leitura da data com scanf*/
    printf("Digite o dia, o mês e o ano: ");
    scanf(" %d %d %d",&dia,&mes,&ano);
    printf("A data é: %d/%d/%d \n",dia,mes,ano);
    c = 'A';
    b = 3.87654;
    a = 5;
    printf("O valor de teste é: %d \n", TESTE);
    printf("O valor de c : %c \n",c);
    printf("O valor de b : %2.2f \n", b);
    printf("O valor de a : %d \n", a);
    int i;
    for (i=0; i < 4; i++){
        scanf("%d",&vetor[i]);
    }
    printf("Fim do programa!!\n");
    return 0;
}
