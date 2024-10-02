#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(b>c)
            d=a-c;
        else
            d=a-b;
    }
    else if(b>a && b>c)
    {
        if(a>c)
            d=b-c;
        else
            d=b-a;
    }
    else
    {
        if(a>b)
            d=c-b;
        else
            d=c-a;
    }
    printf("%d",d);
    return 0;
}
