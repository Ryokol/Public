#include<stdio.h>
int valoreAssoluto();
int valoreAssoluto(int n)
{
    int n1;
    if(n<0)
    {
        n1=-n;
    }
    return n1;

}

int main()
{
    int n;
    printf("Inserisci un valore: ");
    scanf("%d",&n);
    printf("Il valore assoluto di. %d è %d",n,valoreAssoluto(n));
}
