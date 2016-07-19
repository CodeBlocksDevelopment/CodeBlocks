#include <stdio.h>
#include <stdlib.h>

int numero, contador, primo;

int main()
{
    printf("Digite um número qualquer\n");
    scanf("%d",&numero);
    contador = 1;
    primo = 0;
    while (contador <= numero){
        if ((numero % contador)==0) {
            primo = primo + 1;
        }
        contador = contador + 1;
    }
    if (primo==2){
        printf("Este número é primo!!");
    } else {
        printf("Este número não é primo!!");
    }

    return 0;
}
