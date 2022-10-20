#include <stdio.h>
int main()
{
    int n,i,j,ns,na=1;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ns=n-i;  
    for(j=0;j<ns;j++)   
    {
        printf(" ");
    }
    for(j=0;j<na;j++)
    {
        printf("*");
    }
    na=na+2;
    printf("\n");
    }
    
    
    
    

}