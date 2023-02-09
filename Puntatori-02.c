#include<stdio.h>

int divisione (int num, int div, int *q, int *r)
{
    if(num == 0)
    {
        return num;
    }
    else if(div == 0)
    {
        printf("Impossibile");
        return 0;
    }
    *q = num / div;
    *r = num % div;
}

int main()
{
    int num, div;
    int a, b;
    printf("Inserisci due valori: ");
    scanf("%d%d",&num,&div);
    divisione(num, div, &a, &b);
    printf("Il risultato è:\nQuoziente: %d\nResto: %d",a,b);
}