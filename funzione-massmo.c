#include<stdio.h>
int massimo();

int massimo(int n,int m)
{
    int n1,m1;
    if(n>m)
    {
        return n;
    }
    else
    {
        return m;
    }
}

int main()
{
    int n,m;
    printf("2 valori\n");
    printf("Inserisci valori:  ");
    scanf("%d %d",&n,&m);
    printf("Il valore massimo è %d",massimo(n,m));
    return 0;
}