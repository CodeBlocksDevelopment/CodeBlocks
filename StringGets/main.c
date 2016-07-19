#include <stdio.h>
#include <stdlib.h>

char *frase;


int main()
{
    printf("Digite uma frase qualquer: \n");
    frase = malloc(20);
    gets(frase);
    puts(frase);
    return 0;
}
