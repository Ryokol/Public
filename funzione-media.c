#include<stdio.h>

int media(float n1);
int main()
{
 float n1;
 int i,n2;
 printf("Quanti voti: ");
 scanf("%d",&n2);
 for(i=1;i<=n2;i++)
 {
 printf("Inserisci il %d° voto: ",i);
 scanf("%f",&n1);
 if(i<n2)
 {
  media(n1);
 }
 else
 {
 n1=(media(n1)-n2/n2);
 printf("La media é: %f",n1);
 }
 }
 return 0;
}

/*seconda funzione*/
int media(float n1)
{
 float n=1;
 n=n+n1;
 return n;
}