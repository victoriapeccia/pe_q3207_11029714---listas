#include <stdio.h>

void soma(int lin,int col,int matriz1[50][50],int matriz2[50][50])
{
  int i,j, soma[50][50];
  
  for ( i=0; i<lin; i++ )
  {
    for ( j=0; j<col; j++ )
    {
       soma[i][j]= matriz1[i][j]+matriz2[i][j];
    }
  }
  printf("sua matriz soma:\n");
  
  for ( i=0; i<lin; i++ )
  {
    for ( j=0; j<col; j++ )
    {
      printf("%d  ",  soma[i][j]);
    }
    printf("\n");
  }
}

void main ()
{
  int matriz1[50][50];
  int matriz2[50][50];
  int col,lin, i, j;
  printf("Digite o numero de linhas desejadas:\n");
  scanf("%d", &lin);
  printf("Digite o numero de colunas desejadas:\n");
  scanf("%d", &col);
  
  printf("Vamos definir sua matriz1:\n");
  
  for ( i=0; i<lin; i++ )
  {
    for ( j=0; j<col; j++ )
    {
       printf ("\nElemento[%d][%d] = ", i, j);
       scanf ("%d", &matriz1[ i ][ j ]);
    }
  }
  
  printf("sua matriz1:\n");
  
  for ( i=0; i<col; i++ )
  {
    for ( j=0; j<lin; j++ )
    {
      printf("%d  ",  matriz1[i][j]);
    }
    
    printf("\n");
  }
  printf("Vamos definir sua matriz2:\n");
  
    for ( i=0; i<lin; i++ )
  {
    for ( j=0; j<col; j++ )
    {
       printf ("\nElemento[%d][%d] = ", i, j);
       scanf ("%d", &matriz2[ i ][ j ]);
    }
  }
  printf("sua matriz2:\n");
  
  for ( i=0; i<col; i++ )
  {
    for ( j=0; j<lin; j++ )
    {
      printf("%d  ",  matriz2[i][j]);
    }
    printf("\n");
  }
  soma(lin,col,matriz1,matriz2);
}


