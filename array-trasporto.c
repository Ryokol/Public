#include<stdio.h>
#define DIM 5

int main()
{
    int a[DIM], b[DIM],i,dl=0;
    for(i=0;i<DIM,i++)
    {
        scanf("%d",&a[DIM]);
    }
    for(i=0;i<DIM;i++)
    {
        if(a[i]>0)
        {
            b[dl]=a[i];
            dl++;
        }
    }

}
//trasferire solo elementii positivi