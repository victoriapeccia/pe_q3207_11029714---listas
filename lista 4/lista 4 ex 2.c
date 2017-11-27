#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int m;
   int s;
   int d;
} tempo;

tempo calculo(tempo t1, tempo t2)
{
  tempo temp;
  temp.m= t2.m-t1.m;
  temp.s= t2.s-t1.s;
  temp.d= t2.d-t1.d;
  
  return temp;
}

void imprime (tempo resultado)
{
  printf("A diferença entre eles é: %d %d %d ", resultado.m,resultado.s,resultado.d);
}
  
int main ()
{
  tempo t1, t2, resultado;
 
  printf("Digite o primeiro horário:\n");
  printf("Minutos:\n");
  scanf ("%d", &t1.m);
  printf("Segundos:\n");
  scanf ("%d", &t1.s);
  printf("Decimal:\n");
  scanf ("%d",&t1.d);
  
  printf("Primeiro horário:%dm %ds %dd\n\n", t1.m,t1.s,t1.d);

  printf("Digite o segundo horário:\n");
  printf("Minutos:\n");
  scanf ("%d", &t2.m);
  printf("Segundos:\n");
  scanf ("%d", &t2.s);
  printf("Decimal:\n");
  scanf ("%d",&t2.d);
  
  printf("Segundo horário:%dm %ds %dd\n\n", t2.m,t2.s,t2.d);
  
  resultado= calculo(t1,t2);
  imprime(resultado);
  return 0;
  
}

