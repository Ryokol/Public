#include<stdio.h>
riga()
{
  for(i=0;i<x;i++)
  {
    printf("*");
  }
  printf("\n");
  return 0;
}

int main()
{
  int i,j,x,y;
  printf("Inserisci 1º numero: ");
  scanf("%d",&x);
  printf("Inserisci 2º numero: ");
  scanf("%d",&y);
  for(j=0;j<y;j++)
  {
    riga();
  }
}
/*non va*/