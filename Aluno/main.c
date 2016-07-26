#include <iostream>
#include <cstdio.h>
#include <cstdlib.h>

int nota1, nota2;
float media;

int main()
{   printf("Digite a primeira nota\n");
    scanf("%d",&nota1);
    printf("Digite a segunda nota\n");
    scanf("%d",&nota2);
    media =(float)(nota1 + nota2)/2;
    cout<<std.fixed<<"Media: "<<media<<endl;
    if (media >= 6) {
        printf("O aluno esta aprovado com nota: %.2f",media);
    } else
    if ((media >= 4) && (media < 6)) {
        printf("O aluno esta de recuperação com nota: %.2f",media);
    } else {
        printf("O aluno esta reprovado com nota: %.2f!!",media);
    }
    return 0;
}
