#include<stdio.h>
int main()
{
    int i,a,b=0;
    printf("Scegli un numero: ");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        if(a/i==a || a%i==0)
        {
            b++;
        }
    }
    if(b==2)
    {
        printf("%d é un numero primo",a);
    }
    else
    {
        printf("%d non é un numero primo",a);
    }
}