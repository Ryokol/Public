#include<stdio.h>
int main()
{
    char c;
    printf("Inserisci un carattere: ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    {
        printf("%c  è. maiuscola\n",c);
    }
    if(c>=97. && c<=122)
    {
        printf("%c è minuscola\n",c);
    }
    if(c>=48 && c<=57)
    {
        printf("%c è un numero\n",c);
    }
    else
    {
        printf("carattere diverso\n");
    }
}