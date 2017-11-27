#include <stdio.h>

int vogais(char string [], int tamanho)
{
  int quant=0,i;
  for(i=0;i<=tamanho;i++)
  {
    if(string[i]=='a'|string[i]=='e'|string[i]=='i'|string[i]=='o'|string[i]=='u')
    {
      quant=quant+1;
    }
  }
  return quant;
}

int main ()
{
    char palavra[100];
    int x;
 
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    
    x=vogais(palavra,100);
    printf("A quantidade de vogais é:%d",x);
 
    return 0;
}