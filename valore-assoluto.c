#include<stdio.h>
int main()
{
    int n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    
    printf("%d\n",n>=0 ? n:-n);
    printf("%d\n",n);
    
}