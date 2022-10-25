#include<stdio.h>
int main ()
{
 int x;
 printf("Inserisci 1 numero; ");
 scanf("%d",&x);
 printf("%d!= %d",x,fattoriale(x));
 return 0;
}

int fattoriale(int x)
{
 int i,j=1;
 for(i=x;i>1;i--)
 {
  j=j*i;
 }
 return j;
}