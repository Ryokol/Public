#include<stdio.h>
int primo();
int main()
{
 int n,m=1,i;
 for(i=0;i<10;i++)
 {
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    if(n>=0)
    {
        primo(n);
        m=primo(b);
        if(m==2)
        {
            printf("%d - numero primo\n",n);
        }
    }
    else
    {
        i=10;
    }
 }

}

int primo(int n,int m)
{
    int p=n,j,b;
    for(j=p;j>0;j--)
    {
        if(p/j==p || p%j==0)
        {
            b++;
            m=b;
        }
    }
    if(b==2)
    {
        /*primo*/
        return(b);
    }
    else
    {
        /*non primo*/
       return(b);
    }

}
