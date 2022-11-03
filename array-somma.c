#include<stdio.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    int a[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("%d",a[i]);
    return 0;
}