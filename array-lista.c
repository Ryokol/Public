#include<stdio.h>
int main(void)
{
    int a[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=i+n+1;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}