#include <stdio.h>
#include <string.h>

int inverter(char palavra [])
{

    int i,j=0;
    char temp;
    char resultado[100];
   
    for(i=strlen(palavra)-1;i>=0;i--)
    {
     resultado[j]= palavra[i];
     j++;
    }
    
    resultado[j]='\0';
    
   
  printf("A palavra invertida é:%s",resultado);
  return 0;
 
}
    
  
int main ()
{
    char palavra[100];
    char x;
    
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    
    inverter(palavra);
   
    return 0;
}
