#include <stdio.h>

float volume (float l, float c, float a)
{
  float v;
  v= l*c*a;
  return v;
}

unsigned int main (void)
{
  float x, y, z;

  printf ("Defina a largura, o comprimento e a altura:\n");

  scanf("%f", &x);
  scanf("%f", &y);
  scanf("%f", &z);

  printf("%.2f",volume(x, y, z));

return 0;

}

