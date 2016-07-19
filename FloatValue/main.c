#include <stdio.h>
#include <stdlib.h>

float value1,value2,soma;

int main()
{
    printf("Digite o valor um: \n");
    scanf("%f",&value1);
    fflush(stdin);
    printf("Digite o valor dois: \n");
    scanf("%f",&value2);
    fflush(stdin);
    soma = value1 + value2;
    printf("O total da soma é: %.2f",soma);
    return 0;
}
