#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** nota: função pow: traz x elevado à y --> pow (x, y)**/

typedef struct{
   float x;
   float y;
   float z;
} ponto;

float distancia(ponto p1, ponto p2)
{
  float dist;
  dist = sqrt (pow((float)(p2.x-p1.x),2) + pow((float)(p2.y-p1.y),2)+ pow((float)(p2.z-p1.z), 2));
  
  return dist;
}
  
float main ()
{
  ponto p1, p2;
 
  printf("Digite as coordenadas do ponto 1:\n");
  printf("Eixo x:\n");
  scanf ("%f", &p1.x);
  printf("Eixo y:\n");
  scanf ("%f", &p1.y);
  printf("Eixo z:\n");
  scanf ("%f", &p1.z);

  printf("Digite as coordenadas do ponto 2:\n");
  printf("Eixo x:\n");
  scanf ("%f", &p2.x);
  printf("Eixo y:\n");
  scanf ("%f", &p2.y);
  printf("Eixo z:\n");
  scanf ("%f", &p2.z);
  
  
  
  printf("A distância entre eles é: %.2f", distancia(p1,p2));
  
  return 0;
  
}

