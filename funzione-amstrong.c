#include<stdio.h>

int main()
{
    int a,b,i;
    for(i=1;i!=0;i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d",&a);
        accumulo(a);
        printf("%d",potenza(a));
    }
}

int accumulo(int a,int b)
{
    int a2,b3,c3=1,j3;
    for(j3=0;b2!=0;j3++)
    {
        a2=a; 
        a2=a2/c3;
        if(a2!=0)
        {
            a2=c3*10;
            c3=c3*10:
        }
        else(a2==0)
        {
            potenza(a,j3);
        }
    }

}

int potenza(int a,int j3)
{
    int a1,b1=1,i1;

    for(i=1;b>0;i*10)
    {

        a1=(a/i)-(a/(i*10)*10);
        a1=a-a1;
        if(a1=0)
        {
            ;
        }
        else
        {
            return a1;
        }

    }
}