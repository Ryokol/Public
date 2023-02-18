#include<stdio.h>

int main()
{
    int a;
    printf("Inserisci un numero: ");
    scanf("%d",&a);

    switch (a)
    {
    case 0:
        printf("A");
        break;
    case 1:
        printf("B");
        break;
    
    default:
        printf("ZZ");
        break;
    }
}