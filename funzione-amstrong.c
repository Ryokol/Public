#include<stdio.h>

int accumulo();

int potenza();

int main()
{
    int a,b,s,c=1;
        printf("Inserisci un numero: ");
        scanf("%d",&a);
        accumulo(a,b);
        for(s=1;s<=b;s++)
      {
        potenza(a,c);
        printf("%d^%d",potenza(a),b);
        if(s==b)
        {
            printf(" = ");
        }
        else(s<b);
        {
            printf("+");
            c=c*10;
        }
      }  
        printf("%d",a);
        return 0;
}

int accumulo(int a,int b)
{
    int a2,b2=1,c3=1,j3;
    for(j3=0;a2!=0;j3++)
    {
        a2=a; 
        a2=a2/c3;
        if(a2!=0)
        {
            c3=c3*10;
        }
    }
    b=j3;
    return b;


}

int potenza(int a,int c)
{
    int a1,b1=1;

        a1=(a/c)-(a/(c*10)*10);
        a1=a-a1;
        if(a1=0)
        {
            return 0;
        }
        else
        {
            return a1;
        }
}