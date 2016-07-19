#include <stdio.h>
#include <stdlib.h>

char buffer[10];

int main()
{
    printf("Digite uma string: \n");
    gets(buffer);
    printf("Foi digitado: \n");
    puts(buffer);
    return 0;
}
