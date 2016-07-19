#include <stdio.h>
#include <stdlib.h>

char String[20] = "Teste de string \0";
int i;

int main()
{
    printf("String é um vetor:\n");
    for (i=strlen(String);i>=0;i--){
        printf("%c ",String[i]);
    }
    printf("\n Hello world!\n");
    return 0;
}
