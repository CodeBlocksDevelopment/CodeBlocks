#include <stdio.h>
#include <stdlib.h>

int A,B;

int main()
{
    A=3;
    B=5;
    while (A < 5) {
        A = A + 1;
        B = B + A;
    }
    B = B - 2;
    A = A + B;
    if (A > 3) {
        A = A + 5;
    } else {
        A = A + 2;
    }
    printf("O valor de A é: %d",A);
    return 0;
}
