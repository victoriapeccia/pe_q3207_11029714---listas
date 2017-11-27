#include <math.h>
#include <stdio.h>
#include <stdlib.h>


float soma (float n, float m)
{
    float  z= n+m;
    return z;
}

float subtracao (float n, float m)
{
  float  z= n-m;
  return z;
}

float multiplicacao (float n, float m)
{
    float  z= n*m;
    return z;
}

float divisao (float n, float m)
{
    float  z= n/m;
    return z;
}

float expoente (double n, double m)
{
    double z= pow(n,m);
    return z;
}

float main ()
{
  int opcao;
  float x, y;

  printf("Escolha uma opção de operação:\n");
  printf("1-Soma:\n");
  printf("2-Subtração:\n");
  printf("3-Multiplicação:\n");
  printf("4-Divisão:\n");
  printf("5-Potenciação:\n");
  scanf("%d", &opcao);

  printf("Digite dois números:\n");
  scanf("%f", &x);
  scanf("%f", &y);

  if (opcao==1) printf("%.2f", soma(x,y));
  if (opcao==2) printf("%.2f", subtracao(x,y));
  if (opcao==3) printf("%.2f", multiplicacao(x,y));
  if (opcao==4) printf("%.2f", divisao(x,y));
  if (opcao==5) printf("%.2f", expoente(x,y));

  return 0;
}
