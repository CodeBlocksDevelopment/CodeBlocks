#include <stdio.h>
#include <stdlib.h>

int A,B,I,contador;

int main()
{
    B = 2;
    A = 10;
    //Variavel para controlar o laço de repetiço
    contador=0;
    for (I = 1; I < A; I = I + 2){
        A = A + B;
        B = (B * -1) + I;
        printf("Valor de A: %d\n",A);
        contador++;
        //Para na terceira vez que o laço é executado
        if (contador == 3)
         break;
    }
    return 0;
}
