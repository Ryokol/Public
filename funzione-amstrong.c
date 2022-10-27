#include<stdio.h>

int main()
{
    int a,i;
    for(i=1;i!=0;i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d",a);
        potenza(a);
        printf("%d",potenza(a));
    }
}

int potenza(int a)
{
    int a1,b=1,c,i;

    for(i=1;b>0;i*10)
    {
        a1=(a/i)-((a/(i*10)*10)
        a1=a-a1;
        if(a1=0)
        {
            b=0;
        }
        else
        {
            return a1;;
        }

    }
}