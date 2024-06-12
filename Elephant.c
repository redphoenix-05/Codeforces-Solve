#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n%5==0)
    {
        a=n/5;
    }
    else
    {
        a=n/5+1;
    }
    printf("%d",a);
    return 0;
}
