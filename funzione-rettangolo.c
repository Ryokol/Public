#include<stdio.h>

void riga(int x,y)
{
  int i,j;
  for(j=0;j<y;j++)
  {
  for(i=0;i<x;i++)
  {
    printf("*");
  }
    printf("\n");
  }

}
int main()
{
  int x,y;
  printf("Inserisci 2 numeri: ");
  scanf("%d",&x);
  riga();
}