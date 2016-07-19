#include <stdio.h>
#include <stdlib.h>

int numero1, numero2, numero3;

int main()
{
    printf("Digite o primeiro valor:\n");
    scanf("%d",&numero1);
    printf("Digite o segundo valor:\n");
    scanf("%d",&numero2);
    printf("Digite o terceiro valor:\n");
    scanf("%d",&numero3);
    if  (numero1 > numero2 && numero1 > numero3) {
        printf("O primeiro valor e maior!!\n");
    } else
    if (numero2 > numero1 && numero2 > numero3) {
        printf("O segundo valor e o maior!!\n");
    } else
    if (numero3 > numero1 && numero3 > numero2) {
        printf("O terceiro valor é o maior!!\n");
    }

    return 0;
}
