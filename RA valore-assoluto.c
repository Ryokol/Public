#include<stdio.h>

int valoreAssoluto(int n)
{
    int n1=n;
    if(n1<0)
    {
        n1=-n1;
        return n1;
    }
    else
    return n1;

}

int main()
{
    int n;
    printf("Inserisci un valore: ");
    scanf("%d",&n);
    printf("Il valore assoluto di. %d è %d",n,valoreAssoluto(n));
}
