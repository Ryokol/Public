#include<stdio.h>
#define DIM 10
int primo(int n)
{
    int j=1,i;
    for(i=2;i<n && j!=0;i++)
    {
        j=n;
        while(j>0)
        {
            j=j-i;
        }

        if(j!=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int a[DIM];
    int i,n;
    for(i=0;i<DIM;i++)
    {
        scanf("%d",&primo(n));
    }...
}