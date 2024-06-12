#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    if(n%2==0)
    {
        a=4;
        b=n-a;
        printf("%d %d",a,b);
    }
    else
    {
        a=9;
        b=n-9;
        printf("%d %d",a,b);
    }
    return 0;
}
