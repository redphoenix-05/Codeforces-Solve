#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n>=0)
    printf("%d",n);
    else
    {
        n=-n;
        a=n%10;
        b=(n/10)%10;
        if(b>a)
        {
            c=n/100;
            c=c*10+a;
            c=-c;
            printf("%d",c);
        }
        else
        {
            c=n/10;
            c=-c;
            printf("%d",c);
        }
    }
    return 0;
}
