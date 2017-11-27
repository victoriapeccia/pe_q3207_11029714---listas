#include <stdio.h>

unsigned int potencia (unsigned int n, unsigned int m)
{
  if (m==0) return 1;
  if (m==1) return n;

  return (n*potencia(n,m-1));
}

unsigned int main ()
{
  int x,y;
  printf("Digite uma base:");
  scanf("%d", &x);
  printf("Digite um expoente:");
  scanf("%d", &y);
  
  printf("Resultado: %d", potencia(x,y));
  
  return 0;
  
}