#include <stdio.h>

int main()
{
    int x,y,z;

    printf ("Digite um n�mero inteiro para x:");
    scanf ("%d", &x);
    printf ("Digite um n�mero inteiro para y:");
    scanf ("%d", &y);

    z=x/y;

    printf("A divis�o dos n�meros que voc� digitou �:%d", z);

    return 0;
}
