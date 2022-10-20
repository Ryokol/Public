#include <stdio.h>
int main()
{
    char c;
    while(1)
    {
    scanf("%c",&c);
    printf("%c",c);
    }
    printf("\n");
    
}

------------
#include <stdio.h>
int main()
{
    char c;
    do
    {
    scanf("%c",&c);
    printf("%c",c);
    }
    while(1);
    printf("\n");
    
}

------------
#include <stdio.h>
int main()
{
    char c;
    do
    {
    scanf("%c",&c);
    if(c>='a'&&c<='z')
    {
    printf("%c",c-('a'-'A'));
    }
    }
    while(c!= '\n');
    printf("\n");
    
}