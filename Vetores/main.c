#include <stdio.h>
#include <stdlib.h>

int vetor[10],i;

int main()
{
    for (i=0; i<10;i++){
        printf("Digite o %d º valor: ",(i+1));
        scanf("%d",&vetor[i]);
    }
    return 0;
    //Pedir para fazer o exemplo de buscar o maior valor de um vetor.
    //Pedir para buscar o menor e o maior.
}
