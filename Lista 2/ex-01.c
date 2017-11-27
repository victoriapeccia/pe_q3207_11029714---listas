#include <stdio.h>

unsigned int paridade (unsigned int n)
{
  if(n%2==0) return 0;
  else return 1;
}

unsigned int main (void)
{
  int x;

  printf ("Digite um número inteiro positivo:");

  scanf("%d", &x);

  printf("%d",paridade(x));

return 0;

}
