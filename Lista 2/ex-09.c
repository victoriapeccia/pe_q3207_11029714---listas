#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int potencia(int n, int m)
{
 if(m == 0) return 1;
 else if (m==1) return n;

 return n*potencia(n, m-1);
}


int main()
{
 int x,y,z;
 printf("Digite uma base e um expoente:\n");
 scanf("%d",&x);
 scanf("%d",&y);

 z=potencia(x,y);

 printf("Resultado:\n", &z);

  return 0;
}
