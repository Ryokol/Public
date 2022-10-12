#include<stdio.h>
int main()
{
    int i,a,b=1;
    printf("Moltiplicatore\n");
    for(i=1;i<=5;i++)
    {
        printf("Scrivi il %d° valore: ",i);
        scanf("%d",&a);
        b=b*a;
    }
    printf("Il risultato é: %d\n",b);
}