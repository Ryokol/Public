#include <stdio.h>
int main()
{
    float a,x;
    scanf("%f",&a);
    x=1.0;
   while(x*x != a)
   {
    x=(x+a/x)/2.0;
   }
   printf("%f\n",x);
}