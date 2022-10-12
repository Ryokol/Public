#include<stdio.h>
int main()
{
    int i,a,b=0;
    for(i=1;i<=5;i++)
    {
        printf("Inserisci il %d° numero: ",i);
        scanf("%d,&a");
        if(b<a)
        {
            b=a;
        }
    }
    printf("Il numero piú grande é %d\n",b);
}