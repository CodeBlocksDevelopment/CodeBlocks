#include <stdio.h>
#include <stdlib.h>

float salario_maior, salario_menor;
int contador;

int main()
{
    salario_menor=15000.00;
    salario_maior=30000.00;
    contador=0;
    while (salario_menor < salario_maior) {
        salario_menor = salario_menor + (salario_menor*((float)18/100));
        contador=contador+1;
    }
    printf("Vai demorar %d anos para o salario ultrapassar o outro!!",contador);
    return 0;
}
