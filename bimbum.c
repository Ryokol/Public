#include<stdio.h>
int main()
{
    int bim,bum,x,i;
    printf("Inserisci un numero da 1-100: ");
    scanf("%d",&x);
    if(x<=100)
    {
    for(i=1;i<=x;i++)
    if(i%3==0 && i%5==0)
    {
        printf("%d è divisibile per 3 e 5 bimbum\n",i);
    }
    else
    {
    if(i%3==0)
    {
    printf("%d è divisibile per 3 bim\n",i);
    }
    if(i%5==0)
    {
    printf("%d è divisibile per 5 bum\n",i);
    }
    }
    

    }

}