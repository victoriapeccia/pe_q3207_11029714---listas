#include <stdio.h>
#include <string.h>

void transposta(int lin,int col,int matriz1[lin][col])
{
  int i,j, temp;
  /*int matriz2[50][50];*/
  
  for ( i=0; i<lin; i++ )
  {
    for ( j=i+1; j<col; j++ )
    {
    if(lin>col){
        temp = matriz1[i][j];
        matriz1[i][j]=matriz1[j][i];
        matriz1[i][j] = temp;
    }
    }
  }
  
  /*for (i=0; i<col; i++)
  {
    for (j= 0; j<lin; j++)
    {
      matriz2[i][j] = matriz1[i][j];
    }
  }*/

  
  printf("sua nova matriz:\n");
  
  for ( i=0; i<lin; i++ )
  {
    for ( j=0; j<col; j++ )
    {
      printf("%d",matriz1[i][j]);
    }
    
    printf("\n");
    }
  
}


int main ()
{
  int matriz1[50][50];
  int col,lin, i, j;
  printf("Digite o numero de linhas desejadas:\n");
  scanf("%d", &lin);
printf("Digite o numero de colunas desejadas:\n");
  scanf("%d", &col);
  
  
  for ( i=0; i<lin; i++ )
  {
    for ( j=0; j<col; j++ )
    {
       printf ("\nElemento[%d][%d] = ", i, j);
       scanf ("%d", &matriz1[ i ][ j ]);
    }
  }
  
  printf("sua matriz:\n");
  
  for ( i=0; i<col; i++ )
  {
    for ( j=0; j<lin; j++ )
    {
      printf("%d  ",  matriz1[i][j]);
    }
    
    printf("\n");
  }
  
  transposta(lin,col,matriz1);
  
  return 0;
  
}


