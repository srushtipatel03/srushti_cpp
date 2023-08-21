#include <stdio.h>
void main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a!=b)
    {
        b=++a;
    }
    printf("%d",b);
}