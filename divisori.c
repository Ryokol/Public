#include<stdio.h>
int main()
{
    int i,a;
    printf("Inserisci un numero: ");
    scanf("%d",a);
    for(i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            printf("%d è divisibile per %d\n",a,i);
        }
    }

}