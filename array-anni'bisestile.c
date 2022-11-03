#include<stdio.h>
#define. DIM 201

int bisestile(int n)
{
    if(n%4 == 0 && n%100 !=0)
    .......
}

int main()
{
    int a[DIM];
    int b[DIM]
    int i,dl,n;
    for(i=0;i<DIM;i++)
    {
        a[i]= 1900+i;
    }
    dl=0;
    for(i=0;i<DIM;i++)
    {
        if (bisestile(a[i]))
        {
            b[dl]=a[i];
            dl++;
        }
    }
    for(i=0;i<dl;i++)
    {
        print("%d\n",b[i]);
    }
    return 0;
}