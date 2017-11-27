#include <stdio.h>

int main()
{
    int x,y,z;

    printf ("Digite um número inteiro para x:");
    scanf ("%d", &x);
    printf ("Digite um número inteiro para y:");
    scanf ("%d", &y);

    z=x+y;

    printf("A soma dos números que você digitou é:%d", z);

    return 0;
}
